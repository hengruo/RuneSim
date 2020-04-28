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

# generate gallery.cc
gallery_cc = ['''#include "gallery.h"
#include "cardset01.cc"
#include "cardset02.cc"
''']
poro_with_1_cost = []
champion = dict()
for id, item in enumerate(data):
    if item['type'] == 'Unit' and item['supertype'] == 'Champion':
        champion[id] = -1
    if item['type'] == 'Spell' and item['supertype'] == 'Champion':
        ref = item['associatedCardRefs']
        for code in ref:
            if code2id[code] in champion:
                champion[code2id[code]] = id
    if item['subtype'] == 'PORO' and item['cost'] == 1 and item['collectible']:
        poro_with_1_cost.append(id)

csp = []
for ch in champion:
    csp.append("{" + "{},{}".format(ch, champion[ch]) +"}")
gallery_cc.append("umap<RSID, Card *> GALLERY;")
gallery_cc.append("umap<RSID, Card *> COLLECTIBLE;")
gallery_cc.append("vec<RSID> DRAVEN = {1, 130};\n")
gallery_cc.append("vec<RSID> PORO_WITH_1_COST = {" + ",".join(map(lambda x:str(x), poro_with_1_cost)) +"};\n")
gallery_cc.append("umap<RSID, RSID> CHAMPION_TO_SPELL = {" + ",".join(csp) +"};")
gallery_cc.append('''
void init_gallery() {
  init_gallery01();
  init_gallery02();
  for (auto p: GALLERY) {
    if (p.second->collectible)
      COLLECTIBLE[p.first] = p.second;
    CODE_TO_CARD[str(p.second->code)] = p.second;
  }
}

void clear_gallery() {
  for(auto entry: GALLERY){
    delete entry.second;
  }
  GALLERY.clear();
}
''')

gf = open("../src/cardset/gallery.cc", 'w')
gf.writelines(gallery_cc)
