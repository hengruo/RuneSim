//
// Created by Hengruo Zhang on 2/7/20.
//

#ifndef RUNESIM_CARD_CARD_H
#define RUNESIM_CARD_CARD_H

#include "../common/common.h"

#define K_NONE 0x00000000000000
#define K_FEARSOME 0x00000000000001
#define K_BURST 0x00000000000002
#define K_OVERWHELM 0x00000000000004
#define K_LIFESTEAL 0x00000000000008
#define K_EPHEMERAL 0x00000000000010
#define K_REGENERATION 0x00000000000020
#define K_SKILL 0x00000000000040
#define K_BARRIER 0x00000000000080
#define K_CANT_BLOCK 0x00000000000100
#define K_FLEETING 0x00000000000200
#define K_CHALLENGER 0x00000000000400
#define K_DOUBLE_ATTACK 0x00000000000800
#define K_ELUSIVE 0x00000000001000
#define K_SLOW 0x00000000002000
#define K_FAST 0x00000000004000
#define K_QUICK_ATTACK 0x00000000008000
#define K_IMBUE 0x00000000010000
#define K_LAST_BREATH 0x00000000020000
#define K_TOUGH 0x00000000040000
#define K_TRAP 0x00000000080000

#define CHECK_K_NONE(X) (X == 0)
#define CHECK_K_FEARSOME(X) ((K_FEARSOME & (X)) != 0)
#define CHECK_K_BURST(X) ((K_BURST & (X)) != 0)
#define CHECK_K_OVERWHELM(X) ((K_OVERWHELM & (X)) != 0)
#define CHECK_K_LIFESTEAL(X) ((K_LIFESTEAL & (X)) != 0)
#define CHECK_K_EPHEMERAL(X) ((K_EPHEMERAL & (X)) != 0)
#define CHECK_K_REGENERATION(X) ((K_REGENERATION & (X)) != 0)
#define CHECK_K_SKILL(X) ((K_SKILL & (X)) != 0)
#define CHECK_K_BARRIER(X) ((K_BARRIER & (X)) != 0)
#define CHECK_K_CANT_BLOCK(X) ((K_CANT_BLOCK & (X)) != 0)
#define CHECK_K_FLEETING(X) ((K_FLEETING & (X)) != 0)
#define CHECK_K_CHALLENGER(X) ((K_CHALLENGER & (X)) != 0)
#define CHECK_K_DOUBLE_ATTACK(X) ((K_DOUBLE_ATTACK & (X)) != 0)
#define CHECK_K_ELUSIVE(X) ((K_ELUSIVE & (X)) != 0)
#define CHECK_K_SLOW(X) ((K_SLOW & (X)) != 0)
#define CHECK_K_FAST(X) ((K_FAST & (X)) != 0)
#define CHECK_K_QUICK_ATTACK(X) ((K_QUICK_ATTACK & (X)) != 0)
#define CHECK_K_IMBUE(X) ((K_IMBUE & (X)) != 0)
#define CHECK_K_LAST_BREATH(X) ((K_LAST_BREATH & (X)) != 0)
#define CHECK_K_TOUGH(X) ((K_TOUGH & (X)) != 0)
#define CHECK_K_TRAP(X) ((K_TRAP & (X)) != 0)

enum class CardType {
  TRAP,
  SPELL,
  UNIT,
  ABILITY
};

enum class CardSubType{
  NONE,
  TECH,
  ELITE,
  SPIDER,
  PORO,
  YETI,
  ELNUK
};

enum class CardSupType{
  NONE,
  CHAMPION
};

enum class CardRarity{
  NONE,
  COMMON,
  RARE,
  EPIC,
  CHAMPION
};

enum class CardRegion {
  DEMACIA,
  FRELJORD,
  IONIA,
  NOXUS,
  PILTOVER_N_ZAUN,
  SHADOW_ISLES
};

class Game;
class Event;

class Card {
public:
  const RSID id;
  const char *const name;
  const char *const description;
  const char *const levelUpDescription;
  const char *const code;
  const CardRegion region;
  const CardRarity rarity;
  const CardType type;
  const CardSupType supType;
  const CardSubType subType;
  const u64 keywords;
  const u8 cost;
  const u8 attack;
  const u8 health;
  const bool collectible;
  Card(const RSID Id,
       const char *const Name,
       const char *const Description,
       const char *const LevelUpDescription,
       const char *const Code,
       const CardRegion Region,
       const CardRarity Rarity,
       const CardType Type,
       const CardSupType SupType,
       const CardSubType SubType,
       const u64 Keywords,
       const u8 Cost,
       const u8 Attack,
       const u8 Health,
       const bool Collectible);
  // functions to register event listeners
  virtual void regWhenGameStarts();
  virtual void regWhenPlayed();
  virtual void regWhenSummoned();
  // whether this card can be played
  virtual bool playable(Event event);
  // whether this spell or skill can be casted
  virtual bool castable(Event event);
  // action when play this card
  virtual void onPlay(Event event);
  // action when cast this spell, skill, or trap
  virtual void onCast(Event event);
  virtual void onDiscard(Event event);
  virtual void onDie(Event event);
  virtual void onSummon(Event event);
};

#endif //RUNESIM_CARD_CARD_H
