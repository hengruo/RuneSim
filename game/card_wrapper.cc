//
// Created by Hengruo Zhang on 3/29/20.
//

#include "card_wrapper.h"
CardWrapperImpl *CardWrapperImpl::build(rsid gamewiseId, rsid cardId) {
  auto c = new CardWrapperImpl(gamewiseId, cardId);
  return c;
}
CardWrapperImpl::CardWrapperImpl(rsid GamewiseId, rsid CardId) : gamewiseId(GamewiseId), cardId(CardId), card(gallery[CardId]) {}
const Card *CardWrapperImpl::getCard() const {
  return card;
}

CardWrapper::CardWrapper(rsid gamewiseId, rsid cardId) {
  cw = make_shared<CardWrapperImpl>(gamewiseId, cardId);
}
Result<CardWrapper> CardWrapper::build(rsid gamewiseId, rsid cardId) {
  if(gallery.find(cardId)==gallery.end())
    return Result<CardWrapper>::mkErr("Not existed card ID: %d.", cardId);
  return Result<CardWrapper>::mkVal(CardWrapper(gamewiseId, cardId));
}
const Card *CardWrapper::getCard() const {
  return cw->getCard();
}
rsid CardWrapper::getWrapperId() const {
  return cw->gamewiseId;
}
CardWrapper::CardWrapper() {}
Result<CardWrapper> CardWrapper::buildForDeck(rsid gamewiseId, rsid cardId) {
  if(gallery.find(cardId)==collectible.end())
    return Result<CardWrapper>::mkErr("Not existed card ID: %d or card is not collectible.", cardId);
  return Result<CardWrapper>::mkVal(CardWrapper(gamewiseId, cardId));
}
