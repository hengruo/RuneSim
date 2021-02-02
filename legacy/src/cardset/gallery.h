#ifndef RUNESIM_GALLERY_H
#define RUNESIM_GALLERY_H

#include "../game/card.h"
#include "initiator.h"

extern umap<RSID, Card *> GALLERY;
extern umap<RSID, Card *> COLLECTIBLE;
extern umap<str, Card*> CODE_TO_CARD;
extern vec<RSID> DRAVEN;
extern vec<RSID> PORO_WITH_1_COST;
extern umap<RSID, RSID> CHAMPION_TO_SPELL;
void init_gallery();
void clear_gallery();
void init_cardset01();
void init_cardset02();
#endif //RUNESIM_GALLERY_H
