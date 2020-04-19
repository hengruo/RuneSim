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


# generate gallery.h
gallery_h = ['''#ifndef RUNESIM_CARD_GALLERY_H
#define RUNESIM_CARD_GALLERY_H

#include "cardset.h"

extern umap<RSID, Card *> GALLERY;
extern umap<RSID, Card *> COLLECTIBLE;
extern vec<RSID> DRAVEN;
extern vec<RSID> PORO_WITH_1_COST;
void init_gallery();
void clear_gallery();
#endif //RUNESIM_CARD_GALLERY_H
''']
gh = open("../src/cardset/gallery.h", 'w')
gh.writelines(gallery_h)

# generate gallery.cc
gallery_cc = ['''#include "gallery.h"
void init_gallery_() {
''']

for id in id2classname:
    gallery_cc.append("  GALLERY[{}] = new {};\n".format(id, id2classname[id]))

gallery_cc.append("}\n")
poro_with_1_cost = []
for id, item in enumerate(data):
    if item['subtype'] == 'Poro' and item['cost'] == 1 and item['collectible']:
        poro_with_1_cost.append(id)
gallery_cc.append("umap<RSID, Card *> GALLERY;")
gallery_cc.append("umap<RSID, Card *> COLLECTIBLE;")
gallery_cc.append("vec<RSID> DRAVEN = {1, 130};\n")
gallery_cc.append("vec<RSID> PORO_WITH_1_COST = {" + ",".join(map(lambda x:str(x), poro_with_1_cost)) +"};\n")
gallery_cc.append('''
void init_gallery() {
  init_gallery_();
  for(auto p: GALLERY){
    if(p.second->collectible)
      COLLECTIBLE[p.first] = p.second;
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
