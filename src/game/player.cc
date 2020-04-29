//
// Created by Hengruo Zhang on 2/9/20.
//

#include "game.h"

Result<rsvec> Player::buildDeck(const str & deckCode, RSID pid) {
  std::map<str, i32> deckMap = LoRDeckCode::decode(deckCode);
  std::map<RSID, i32> deckMap_;
  for (std::pair<str, i32> p : deckMap)
    deckMap_[CODE_TO_CARD[p.first]->id] = p.second;
  auto res = Game::checkDeck(deckMap_);
  if(res.isErr())
    return res.castErr<rsvec>();

  vec<RSID> deck;
  for (std::pair<RSID, i32> p : deckMap_) {
    for (RSID k = 0; k < p.second; k++) {
      auto res = Entity::buildAndRegCard(generateId(), p.first, pid);
      if (res.isErr())
        return res.castErr<rsvec>();
      auto ent = res.val();
      deck.push_back(ent.getId());
    }
  }
  return Result<rsvec>::mkVal(rsvec::fromVec(deck));
}

Result<sptr<Player>> Player::build(RSID pid, const str & deckCode) {
  sptr<Player> player = std::make_shared<Player>();
  player->playerId = pid;
  Entity nexus = Entity::buildAndRegNexus(generateId(), pid).val();
  player->nexusId = nexus.getId();
  auto res = buildDeck(deckCode, pid);
  if (res.isErr())
    return res.castErr<sptr<Player>>();
  player->deck = res.val();
  return Result<sptr<Player>>::mkVal(player);
}
