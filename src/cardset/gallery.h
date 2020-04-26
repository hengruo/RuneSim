#ifndef RUNESIM_CARD_GALLERY_H
#define RUNESIM_CARD_GALLERY_H

#include "cardset01.h"

extern umap<RSID, Card *> GALLERY;
extern umap<RSID, Card *> COLLECTIBLE;
extern vec<RSID> DRAVEN;
extern vec<RSID> PORO_WITH_1_COST;
extern umap<RSID, RSID> CHAMPION_TO_SPELL;
void init_gallery();
void clear_gallery();
#endif //RUNESIM_CARD_GALLERY_H
