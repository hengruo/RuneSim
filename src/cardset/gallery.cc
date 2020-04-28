#include "gallery.h"
#include "initiator.h"

umap<RSID, Card *> GALLERY;
umap<RSID, Card *> COLLECTIBLE;
umap<str, Card*> CODE_TO_CARD;
vec<RSID> DRAVEN = {1, 130};
vec<RSID> PORO_WITH_1_COST = {66, 118, 124, 142, 269, 369, 556};
umap<RSID, RSID> CHAMPION_TO_SPELL =
    {{1, 100}, {5, 86}, {6, 62}, {7, -1}, {8, 177}, {15, 177}, {28, 259}, {33, 139}, {40, 399}, {41, 143}, {43, 3},
     {45, 372}, {49, 27}, {56, 244}, {58, 243}, {61, 139}, {87, 194}, {90, 194}, {92, 353}, {111, 310}, {116, 27},
     {129, 100}, {133, 353}, {140, 168}, {141, 62}, {150, 366}, {155, 259}, {170, 257}, {182, 372}, {186, 17},
     {206, 86}, {229, 10}, {230, 310}, {232, -1}, {252, 3}, {256, 243}, {265, 366}, {270, 399}, {300, 379}, {303, 10},
     {316, 257}, {326, 131}, {351, 379}, {362, 244}, {368, 131}, {371, 17}, {384, 131}, {411, 168}, {414, 143},
     {427, 429}, {437, 462}, {440, 438}, {463, 438}, {467, 586}, {472, 570}, {488, 503}, {493, 528}, {502, 570},
     {507, 481}, {508, 580}, {513, 462}, {514, 505}, {516, 429}, {533, 503}, {535, 528}, {543, 457}, {550, 481},
     {559, 586}, {566, 580}, {568, 457}, {587, 505}};

void init_gallery() {
  init_cardset01();
  init_cardset02();
  for (auto p: GALLERY) {
    if (p.second->collectible)
      COLLECTIBLE[p.first] = p.second;
    CODE_TO_CARD[str(p.second->code)] = p.second;
  }
  init01IO049();
  init01SI030();
  init01SI030T2();
  init01NX050();
}

void clear_gallery() {
  for (auto entry: GALLERY) {
    delete entry.second;
  }
  GALLERY.clear();
}
