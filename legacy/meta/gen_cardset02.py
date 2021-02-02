from typing import List
import ujson as json


def build_class_name(name, id):
    name0 = name.replace("'", "").replace(":", " ").replace("!", " ").replace(",", " ").replace("-", " ")
    name1 = "".join([x.capitalize() for x in name0.split(' ')])
    return name1 + "{0:#0{1}d}".format(id, 4)

data1 = json.load(open("set1-en_us.json"))
data2 = json.load(open("set2-en_us.json"))
data = data1 + data2
code2id = dict()
id2classname = dict()

for id, item in enumerate(data):
    code2id[item['cardCode']] = id
    id2classname[id] = build_class_name(item['name'], id)

def gen_class(id: int, name: str, des, ldes, code, reg, rar, type, sub, sup, keys: List[str], cost, att, heal,
              collectible: bool):
    if sub == "": sub = "NONE"
    if sub == "SEA MONSTER": sub = "SEA_MONSTER"
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

    item = "\nGALLERY[{}] = ".format(id)
    item += "new Card(\n{},\"{}\",\n".format(id, name)
    item += "\"{}\",\n".format(des.replace('\r\n', '\\n').replace('"', '\\"'))
    item += "\"{}\",\n".format(ldes.replace('\r\n', '\\n').replace('"', '\\"'))
    item += "\"{}\", CardRegion::{}, CardRarity::{},\n".format(code, reg.upper(), rar.upper())
    item += "CardType::{}, CardSupType::{}, CardSubType::{},\n".format(type.upper(), sup.upper(),sub.upper())
    item += "{},\n".format(keywords)
    item += "{}, {}, {}, {});\n".format(cost, att, heal, str(collectible).lower())
    return item


cardset_h = ['''//
//
// Generate by Python
//

#include "gallery.h"

void init_cardset02(){
''']

for id_, item in enumerate(data2):
    id = id_ + len(data1)
    res = gen_class(id, item['name'], item['descriptionRaw'], item['levelupDescriptionRaw'],
                    item['cardCode'], item['region'], item['rarity'],
                    item['type'], item['subtype'], item['supertype'],
                    item['keywords'], item['cost'], item['attack'], item['health'], item['collectible'])
    cardset_h.append(res)

cardset_h.append('}')

cf = open("../src/cardset/cardset02.cc", 'w')
cf.writelines(cardset_h)