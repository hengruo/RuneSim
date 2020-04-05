//
// Created by Hengruo Zhang on 3/29/20.
//

#ifndef RUNESIM_GAME_CARD_WRAPPER_H
#define RUNESIM_GAME_CARD_WRAPPER_H

#include "gallery.h"

class CardWrapperImpl {
private:
  const Card *card = nullptr;
public:
  rsid gamewiseId{};
  rsid cardId{};
  i8 manaOffset = 0;
  i8 powerOffset = 0;
  i8 healthOffset = 0;
  u32 featureMask = 0;
  bool isPurified = false;
  bool isBarriered = false;
  bool isDiscarded = false;
  bool isDead = false;

  CardWrapperImpl(rsid GamewiseId, rsid CardId);

  static CardWrapperImpl *build(rsid gamewiseId, rsid cardId);
  const Card *getCard() const;
};

class CardWrapper {
private:
  sptr<CardWrapperImpl> cw;
public:
  CardWrapper();
private:
  CardWrapper(rsid gamewiseId, rsid cardId);
public:
  static Result<CardWrapper> build(rsid gamewiseId, rsid cardId);
  static Result<CardWrapper> buildForDeck(rsid gamewiseId, rsid cardId);
  [[nodiscard]] const Card *getCard() const;
  rsid getWrapperId() const;
};

#endif //RUNESIM_GAME_CARD_WRAPPER_H
