//
// Created by Hengruo Zhang on 2/9/20.
//

#ifndef RUNESIM_GAME_PLAYER_H
#define RUNESIM_GAME_PLAYER_H

#include "gallery.h"
#include "card_wrapper.h"
#include "game.h"

class Game;

class Player {
private:
  rsid playerId{};
  i8 nexusHealth = 20;
  u8 unitMana = 0;
  u8 spellMana = 0;
  bool inAttack = false;
  sptr<Game> game;
  vec<CardWrapper> deck;
  vec<CardWrapper> hand;
  vec<CardWrapper> table;
public:
  static Result<vec<CardWrapper>> buildDeck(vec<pair<rsid, isize>> v);
  static Result<sptr<Player>> build(sptr<Game> g, rsid pid, vec<pair<rsid, isize>> v);
  i8 getNexusHealth() const;
  bool isInAttack() const;
  u8 getUnitMana() const;
  u8 getSpellMana() const;
  i8 reduceHealth(u8 damage);
  i8 gainHealth(u8 life);
  u8 useUnitMana(u8 mana);
  u8 useSpellMana(u8 mana);
  const Card &draw();
  void discard(size_t index);
  vec<rsid> firstDraw();
  virtual ~Player();
};

#endif //RUNESIM_GAME_PLAYER_H
