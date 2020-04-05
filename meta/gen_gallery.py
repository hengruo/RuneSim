from collections import defaultdict
import ujson as json

data = json.load(open("data.json"))


def gen_cname(name, col, nid):
    cname = "".join([x.capitalize() for x in name.split(' ')])
    cname = cname.replace("'", "_")
    cname = cname.replace(":", "_")
    cname = cname.replace("!", "_")
    cname = cname.replace(",", "_")
    cname = cname.replace("-", "_")
    if not col:
        cname = cname + str(nid)
    return cname


def gen_class(id, name: str, des, ldes, code, reg, rar, type, sub, sup, keys, cost, att, heal, col, nid):
    cname = gen_cname(name, col, nid)
    if sub == "":
        sub = "NONE"
    if sup == "":
        sup = "NONE"
    klist = []
    for k in keys:
        if k == "Can\'t Block":
            klist.append("K_CANT_BLOCK")
        elif k == 'Double Attack':
            klist.append("K_DOUBLE_ATTACK")
        elif k == 'Quick Attack':
            klist.append("K_QUICK_ATTACK")
        elif k == 'Last Breath':
            klist.append("K_LAST_BREATH")
        else:
            klist.append("K_" + k.upper())
    if len(klist) == 0: klist.append("K_NONE")
    keywords = " | ".join(klist)
    if reg == 'Piltover & Zaun':
        reg = 'PILTOVER_N_ZAUN'
    elif reg == 'Shadow Isles':
        reg = 'SHADOW_ISLES'

    item = "class {} final".format(cname)
    item += " : public Card {\n"
    item += "public:\n"
    item += "  {}() : Card({}, \"{}\",\n".format(cname, id, name)
    item += "             \"{}\",\n".format(des.replace('\r\n', '\\n'))
    item += "             \"{}\",\n".format(ldes.replace('\r\n', '\\n'))
    item += "             \"{}\", CardRegion::{}, CardRarity::{},\n".format(code, reg.upper(), rar.upper())
    item += "             CardType::{}, CardSupType::{}, CardSubType::{},\n".format(type.upper(), sup.upper(),
                                                                                    sub.upper())
    item += "             {},\n".format(keywords)
    item += "             {}, {}, {}, {})".format(cost, att, heal, str(col).lower())
    item += " {}\n};\n"
    return item


named = defaultdict(lambda: 0)
classdef = []
galinit = ["Card *card = nullptr;\n"]
for id, item in enumerate(data):
    n = item['name']
    if not item['collectible']:
        named[n] = named[n] + 1
    res = gen_class(id, item['name'], item['descriptionRaw'], item['levelupDescriptionRaw'],
                    item['cardCode'], item['region'], item['rarity'],
                    item['type'], item['subtype'], item['supertype'],
                    item['keywords'], item['cost'], item['attack'], item['health'], item['collectible'],
                    named[item['name']])
    classdef.append(res)
    galinit.append("card = new {};\ngallery[card->id] = card;\n".format(gen_cname(n, item['collectible'], named[n])))

cf = open("class.h", 'w')
cf.writelines(classdef)
gf = open("gallery.cc", 'w')
gf.writelines(galinit)
