//
// Created by Hengruo Zhang on 2/9/20.
//

#include "player.h"

Result<vec<CardWrapper>> Player::buildDeck(vec<pair<rsid, isize>> v) {
  vec<CardWrapper> deck;
  uset<CardRegion> regions;
  umap<rsid, i32> cardCnt;
  rsid cnt = 0;
  for (pair<rsid, rsid> p : v) {
    if (p.second <= 0 || p.second > 3)
      return Result<vec<CardWrapper>>::mkErr("Invalid number of card %04d: %d.", p.first, p.second);
    cardCnt[p.first] += p.second;
    if(cardCnt[p.first] > 3)
      return Result<vec<CardWrapper>>::mkErr("Invalid number of card %04d: %d.", p.first, cardCnt[p.first]);
    for (rsid k = 0; k < p.second; k++) {
      auto res = CardWrapper::buildForDeck(rsidByTime(), p.first);
      if (res.isErr())
        return res.castErr<vec<CardWrapper>>();
      auto wrapper = res.val();
      deck.push_back(wrapper);
      cnt++;
      if (cnt > Game::deckSize)
        return Result<vec<CardWrapper>>::mkErr("Exceed deck size.");
      regions.insert(wrapper.getCard()->region);
      if (regions.size() > Game::regionSize)
        return Result<vec<CardWrapper>>::mkErr("Exceed region size.");
    }
  }
  return Result<vec<CardWrapper>>::mkVal(deck);
}
i8 Player::getNexusHealth() const {
  return nexusHealth;
}
bool Player::isInAttack() const {
  return inAttack;
}
u8 Player::getUnitMana() const {
  return unitMana;
}
u8 Player::getSpellMana() const {
  return spellMana;
}
Result<sptr<Player>> Player::build(sptr<Game> g, rsid pid, vec<pair<rsid, isize>> v) {
  sptr<Player> player = make_shared<Player>();
  player->playerId = pid;
  player->game = std::move(g);
  auto res = buildDeck(std::move(v));
  if(res.isErr())
    return res.castErr<sptr<Player>>();
  player->deck = res.val();
  return Result<sptr<Player>>::mkVal(player);
}
Player::~Player() {
  game = nullptr;
}
vec<rsid> Player::firstDraw() {
  vec<rsid> res;
  isize i = rand(1, Game::deckSize)-1;
  res.push_back(deck[i].getWrapperId());
  i = rand(1, Game::deckSize)-1;
  res.push_back(deck[i].getWrapperId());
  i = rand(1, Game::deckSize)-1;
  res.push_back(deck[i].getWrapperId());
  i = rand(1, Game::deckSize)-1;
  res.push_back(deck[i].getWrapperId());
  return vec<rsid>();
}
