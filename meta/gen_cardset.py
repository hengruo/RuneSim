from typing import List
import ujson as json


def build_class_name(name, id):
    name0 = name.replace("'", "").replace(":", " ").replace("!", " ").replace(",", " ").replace("-", " ")
    name1 = "".join([x.capitalize() for x in name0.split(' ')])
    return name1 + "{0:#0{1}d}".format(id, 4)


data = json.load(open("set1-en_us.json"))
code2id = dict()
id2classname = dict()
for id, item in enumerate(data):
    code2id[item['cardCode']] = id
    id2classname[id] = build_class_name(item['name'], id)

def gen_class(id: int, name: str, des, ldes, code, reg, rar, type, sub, sup, keys: List[str], cost, att, heal,
              collectible: bool, assoc: List[str]):
    global code2id
    global id2classname
    cname = id2classname[id]
    if sub == "": sub = "NONE"
    if sup == "": sup = "NONE"
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

    refs = "{" + ",".join(map(lambda s: str(code2id[s]), assoc)) + "}"

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
    item += "             {}, {}, {}, {}, {})".format(cost, att, heal, str(collectible).lower(), refs)
    item += "{}\n"
    # item += "bool playable(Event event) override;\n"
    # item += "bool castable(Event event) override;\n"
    # item += "void onPlay(Event event) override;\n"
    # item += "void onSummon(Event event) override;\n"
    # item += "void onCast(Event event) override;\n"
    item += "};\n"
    return item


cardset_h = ['''//
//
// Generate by Python
//
#ifndef RUNESIM_CARD_CARDSET_H
#define RUNESIM_CARD_CARDSET_H

#include "card.h"

''']

for id, item in enumerate(data):
    res = gen_class(id, item['name'], item['descriptionRaw'], item['levelupDescriptionRaw'],
                    item['cardCode'], item['region'], item['rarity'],
                    item['type'], item['subtype'], item['supertype'],
                    item['keywords'], item['cost'], item['attack'], item['health'], item['collectible'],
                    item['associatedCardRefs'])
    cardset_h.append(res)

cardset_h.append('#endif //RUNESIM_CARD_CARDSET_H')

cf = open("../src/cardset/cardset01.h", 'w')
cf.writelines(cardset_h)