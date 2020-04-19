//
// Created by Hengruo Zhang on 2/9/20.
//

#include "game.h"

Result<vec<RSID>> Player::buildDeck(const vec<pair<RSID, isize>> &v, RSID pid) {
  vec<RSID> deck;
  for (pair<RSID, isize> p : v) {
    for (RSID k = 0; k < p.second; k++) {
      auto res = Entity::buildCard(generateId(), p.first, pid);
      if (res.isErr())
        return res.castErr<vec<RSID>>();
      auto ent = res.val();
      deck.push_back(ent.getEntityId());
    }
  }
  return Result<vec<RSID>>::mkVal(deck);
}

Result<sptr<Player>> Player::build(RSID pid, vec<pair<RSID, isize>> &v) {
  sptr<Player> player = make_shared<Player>();
  player->playerId = pid;
  Entity nexus = Entity::buildNexus(generateId(), pid).val();
  player->nexusId = nexus.getEntityId();
  auto res = buildDeck(v, pid);
  if (res.isErr())
    return res.castErr<sptr<Player>>();
  player->deck = res.val();
  return Result<sptr<Player>>::mkVal(player);
}
