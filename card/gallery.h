//
// Created by Hengruo Zhang on 2/7/20.
//

#ifndef RUNESIM_CARD_GALLERY_H
#define RUNESIM_CARD_GALLERY_H

#include "../common/common.h"
#include "card.h"

class DisciplineOfFortitude1 final : public Card {
public:
  DisciplineOfFortitude1() : Card(0, "Discipline of Fortitude",
                                  "Give an ally +0|+3 this round.",
                                  "",
                                  "01IO012T2", CardRegion::IONIA, CardRarity::NONE,
                                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                  K_BURST,
                                  3, 0, 0, false) {}
};

class Draven1 final : public Card {
public:
  Draven1() : Card(1, "Draven",
                   "Play or Strike: Create 2 Spinning Axe in hand.",
                   "",
                   "01NX020T3", CardRegion::NOXUS, CardRarity::NONE,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_QUICK_ATTACK | K_OVERWHELM,
                   3, 4, 4, false) {}
};

class Dawnspeakers final : public Card {
public:
  Dawnspeakers() : Card(2, "Dawnspeakers",
                        "Round End: Grant other allies +1|+1 if an ally died this round.",
                        "",
                        "01DE031", CardRegion::DEMACIA, CardRarity::EPIC,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        3, 1, 4, true) {}
};

class YusariTheSlayer1 final : public Card {
public:
  YusariTheSlayer1() : Card(3, "Yusari the Slayer",
                            "",
                            "",
                            "01IO048T1", CardRegion::IONIA, CardRarity::NONE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_ELUSIVE,
                            3, 3, 2, false) {}
};

class Jinx_sGetExcited_1 final : public Card {
public:
  Jinx_sGetExcited_1() : Card(4, "Jinx's Get Excited!",
                              "To play, discard 1. Deal 3 to anything.\nShuffle a Jinx into your deck.",
                              "",
                              "01PZ040T3", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                              CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                              K_FAST,
                              3, 0, 0, false) {}
};

class GlacialStorm1 final : public Card {
public:
  GlacialStorm1() : Card(5, "Glacial Storm",
                         "Deal 1 to all enemies.",
                         "",
                         "01FR024T2", CardRegion::FRELJORD, CardRarity::NONE,
                         CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                         K_SKILL,
                         0, 0, 0, false) {}
};

class Teemo1 final : public Card {
public:
  Teemo1() : Card(6, "Teemo",
                  "Nexus Strike: Double the Poison Puffcaps in the enemy deck.",
                  "",
                  "01PZ008T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_ELUSIVE,
                  1, 2, 2, false) {}
};

class Lucian final : public Card {
public:
  Lucian() : Card(7, "Lucian",
                  "",
                  "I've seen 4+ allies or an allied Senna, Sentinel of Light die.",
                  "01DE022", CardRegion::DEMACIA, CardRarity::CHAMPION,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_QUICK_ATTACK,
                  2, 3, 2, true) {}
};

class Yasuo1 final : public Card {
public:
  Yasuo1() : Card(8, "Yasuo",
                  "When you Stun or Recall an enemy, I strike it.",
                  "",
                  "01IO015T1", CardRegion::IONIA, CardRarity::NONE,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_QUICK_ATTACK,
                  4, 5, 4, false) {}
};

class Heimerdinger final : public Card {
public:
  Heimerdinger() : Card(9, "Heimerdinger",
                        "When you cast a spell, create a Fleeting Turret in hand with equal cost. It costs 0 this round.",
                        "I've seen you summon 12+ Power of Turrets.",
                        "01PZ056", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
                        CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                        K_IMBUE,
                        5, 1, 3, true) {}
};

class KeeperOfMasks final : public Card {
public:
  KeeperOfMasks() : Card(10, "Keeper of Masks",
                         "When I'm summoned, give other allies +1|+0 this round.",
                         "",
                         "01IO020", CardRegion::IONIA, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         2, 2, 3, true) {}
};

class Tryndamere_sBattleFury1 final : public Card {
public:
  Tryndamere_sBattleFury1() : Card(11, "Tryndamere's Battle Fury",
                                   "Grant an ally +8|+4.\nShuffle a Tryndamere into your deck.",
                                   "",
                                   "01FR039T1", CardRegion::FRELJORD, CardRarity::NONE,
                                   CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                   K_BURST,
                                   8, 0, 0, false) {}
};

class AugmentedExperimenter final : public Card {
public:
  AugmentedExperimenter() : Card(12, "Augmented Experimenter",
                                 "Play: Discard your hand. Draw 3. Deal 3 to an enemy unit.",
                                 "",
                                 "01PZ013", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_NONE,
                                 6, 3, 3, true) {}
};

class Mobilize final : public Card {
public:
  Mobilize() : Card(13, "Mobilize",
                    "Reduce the cost of allies in hand by 1.",
                    "",
                    "01DE019", CardRegion::DEMACIA, CardRarity::RARE,
                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                    K_BURST,
                    3, 0, 0, true) {}
};

class CullingStrike final : public Card {
public:
  CullingStrike() : Card(14, "Culling Strike",
                         "Kill a unit with 3 or less Power.",
                         "",
                         "01NX004", CardRegion::NOXUS, CardRarity::RARE,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         3, 0, 0, true) {}
};

class ParadeElectrorig final : public Card {
public:
  ParadeElectrorig() : Card(15, "Parade Electrorig",
                            "Support: Shuffle 4 copies of the supported ally into your deck.",
                            "",
                            "01PZ007", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            3, 2, 4, true) {}
};

class Heimerdinger1 final : public Card {
public:
  Heimerdinger1() : Card(16, "Heimerdinger",
                         "When you cast a spell, create a Fleeting Turret in hand with equal cost. Grant it +1|+1 and it costs 0 this round.",
                         "",
                         "01PZ056T10", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                         CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                         K_IMBUE,
                         5, 2, 4, false) {}
};

class PhantomPrankster final : public Card {
public:
  PhantomPrankster() : Card(17, "Phantom Prankster",
                            "When another ally dies, deal 1 to the enemy Nexus.",
                            "",
                            "01SI038", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            3, 0, 3, true) {}
};

class Lux_sPrismaticBarrier1 final : public Card {
public:
  Lux_sPrismaticBarrier1() : Card(18, "Lux's Prismatic Barrier",
                                  "Give an ally Barrier this round.\nShuffle a Lux into your deck.",
                                  "",
                                  "01DE042T1", CardRegion::DEMACIA, CardRarity::NONE,
                                  CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                  K_BURST,
                                  3, 0, 0, false) {}
};

class AcademyProdigy final : public Card {
public:
  AcademyProdigy() : Card(19, "Academy Prodigy",
                          "",
                          "",
                          "01PZ018", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_QUICK_ATTACK,
                          2, 3, 1, true) {}
};

class HeraldOfSpring final : public Card {
public:
  HeraldOfSpring() : Card(20, "Herald of Spring",
                          "Support: Give my supported ally Lifesteal this round.",
                          "",
                          "01IO045", CardRegion::IONIA, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          2, 2, 2, true) {}
};

class FaeBladetwirler final : public Card {
public:
  FaeBladetwirler() : Card(21, "Fae Bladetwirler",
                           "When you Stun or Recall a unit, grant me +2|+0.",
                           "",
                           "01IO008", CardRegion::IONIA, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_QUICK_ATTACK,
                           2, 1, 3, true) {}
};

class CrimsonCurator final : public Card {
public:
  CrimsonCurator() : Card(22, "Crimson Curator",
                          "When I survive damage, create a random Crimson unit in your hand.",
                          "",
                          "01NX048", CardRegion::NOXUS, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          3, 3, 3, true) {}
};

class IcebornLegacy final : public Card {
public:
  IcebornLegacy() : Card(23, "Iceborn Legacy",
                         "Grant an ally and all allied copies of it everywhere +2|+2.",
                         "",
                         "01FR006", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_SLOW,
                         5, 0, 0, true) {}
};

class Ghost final : public Card {
public:
  Ghost() : Card(24, "Ghost",
                 "Give an ally Elusive this round.",
                 "",
                 "01IO022", CardRegion::IONIA, CardRarity::COMMON,
                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                 K_BURST,
                 1, 0, 0, true) {}
};

class OmenHawk final : public Card {
public:
  OmenHawk() : Card(25, "Omen Hawk",
                    "When I'm summoned, grant the top 2 allies in your deck +1|+1.",
                    "",
                    "01FR022", CardRegion::FRELJORD, CardRarity::COMMON,
                    CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                    K_NONE,
                    1, 1, 1, true) {}
};

class HarshWinds final : public Card {
public:
  HarshWinds() : Card(26, "Harsh Winds",
                      "Frostbite 2 enemies. ",
                      "",
                      "01FR042", CardRegion::FRELJORD, CardRarity::RARE,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_BURST,
                      6, 0, 0, true) {}
};

class GlimpseBeyond final : public Card {
public:
  GlimpseBeyond() : Card(27, "Glimpse Beyond",
                         "Kill an ally to draw 2.",
                         "",
                         "01SI049", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         2, 0, 0, true) {}
};

class Elise_sCrawlingSensation1 final : public Card {
public:
  Elise_sCrawlingSensation1() : Card(28, "Elise's Crawling Sensation",
                                     "If an ally died this round, summon 2 Spiderling.\nShuffle a Elise into your deck.",
                                     "",
                                     "01SI053T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                                     CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                     K_SLOW,
                                     1, 0, 0, false) {}
};

class Braum final : public Card {
public:
  Braum() : Card(29, "Braum",
                 "",
                 "I've survived 10 total damage.",
                 "01FR009", CardRegion::FRELJORD, CardRarity::CHAMPION,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                 K_CHALLENGER | K_REGENERATION,
                 3, 0, 5, true) {}
};

class AncientCrocolith final : public Card {
public:
  AncientCrocolith() : Card(30, "Ancient Crocolith",
                            "To play me, kill 2 allies.",
                            "",
                            "01SI057", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            4, 7, 7, true) {}
};

class SwiftwingLancer final : public Card {
public:
  SwiftwingLancer() : Card(31, "Swiftwing Lancer",
                           "Last Breath: Create an Elite in hand.",
                           "",
                           "01DE010", CardRegion::DEMACIA, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_LAST_BREATH | K_CHALLENGER,
                           5, 5, 4, true) {}
};

class SoulShepherd final : public Card {
public:
  SoulShepherd() : Card(32, "Soul Shepherd",
                        "When you summon an Ephemeral ally, grant it +1|+1.",
                        "",
                        "01SI023", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        2, 2, 3, true) {}
};

class EagerApprentice final : public Card {
public:
  EagerApprentice() : Card(33, "Eager Apprentice",
                           "When I'm summoned, refill 2 spell mana.",
                           "",
                           "01PZ019", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           2, 2, 1, true) {}
};

class Darius final : public Card {
public:
  Darius() : Card(34, "Darius",
                  "",
                  "The enemy Nexus has 10 or less Health.",
                  "01NX038", CardRegion::NOXUS, CardRarity::CHAMPION,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_OVERWHELM,
                  6, 6, 5, true) {}
};

class KinkouLifeblade final : public Card {
public:
  KinkouLifeblade() : Card(35, "Kinkou Lifeblade",
                           "",
                           "",
                           "01IO040", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_LIFESTEAL | K_ELUSIVE,
                           4, 2, 2, true) {}
};

class RimefangWolf final : public Card {
public:
  RimefangWolf() : Card(36, "Rimefang Wolf",
                        "Strike: If I struck a unit with 0 Power, kill it.",
                        "",
                        "01FR018", CardRegion::FRELJORD, CardRarity::RARE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_CHALLENGER,
                        3, 3, 2, true) {}
};

class VanguardDefender final : public Card {
public:
  VanguardDefender() : Card(37, "Vanguard Defender",
                            "",
                            "",
                            "01DE020", CardRegion::DEMACIA, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                            K_TOUGH,
                            2, 2, 2, true) {}
};

class Battlesmith final : public Card {
public:
  Battlesmith() : Card(38, "Battlesmith",
                       "When you summon an Elite, grant it +1|+1.",
                       "",
                       "01DE034", CardRegion::DEMACIA, CardRarity::RARE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_NONE,
                       2, 2, 2, true) {}
};

class TiannaCrownguard final : public Card {
public:
  TiannaCrownguard() : Card(39, "Tianna Crownguard",
                            "When I'm summoned, Rally.",
                            "",
                            "01DE002", CardRegion::DEMACIA, CardRarity::EPIC,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_TOUGH,
                            8, 7, 7, true) {}
};

class ArachnoidHost final : public Card {
public:
  ArachnoidHost() : Card(40, "Arachnoid Host",
                         "When I'm summoned, grant other Spider allies +2|+0.",
                         "",
                         "01NX023", CardRegion::NOXUS, CardRarity::RARE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                         K_NONE,
                         5, 5, 3, true) {}
};

class Karma1 final : public Card {
public:
  Karma1() : Card(41, "Karma",
                  "When you play a spell, cast it again on the same targets.",
                  "",
                  "01IO041T1", CardRegion::IONIA, CardRarity::NONE,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_IMBUE,
                  5, 5, 4, false) {}
};

class Garen1 final : public Card {
public:
  Garen1() : Card(42, "Garen",
                  "Round Start: Rally.",
                  "",
                  "01DE012T1", CardRegion::DEMACIA, CardRarity::NONE,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::ELITE,
                  K_REGENERATION,
                  5, 6, 6, false) {}
};

class StandAlone final : public Card {
public:
  StandAlone() : Card(43, "Stand Alone",
                      "If you have exactly 1 ally, grant it +3|+3.",
                      "",
                      "01DE017", CardRegion::DEMACIA, CardRarity::RARE,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_BURST,
                      3, 0, 0, true) {}
};

class Jinx final : public Card {
public:
  Jinx() : Card(44, "Jinx",
                "",
                "Your hand is empty.",
                "01PZ040", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
                CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                K_QUICK_ATTACK,
                4, 4, 3, true) {}
};

class DecisiveManeuver final : public Card {
public:
  DecisiveManeuver() : Card(45, "Decisive Maneuver",
                            "Stun an enemy. Give all allies +2|+0 this round.",
                            "",
                            "01NX013", CardRegion::NOXUS, CardRarity::RARE,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_FAST,
                            5, 0, 0, true) {}
};

class Fiora final : public Card {
public:
  Fiora() : Card(46, "Fiora",
                 "",
                 "I've killed 2 enemies.",
                 "01DE045", CardRegion::DEMACIA, CardRarity::CHAMPION,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                 K_CHALLENGER,
                 3, 3, 3, true) {}
};

class PuffcapPeddler final : public Card {
public:
  PuffcapPeddler() : Card(47, "Puffcap Peddler",
                          "When you cast a spell, plant 3 Poison Puffcap on random cards in the enemy deck.",
                          "",
                          "01PZ025", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_IMBUE,
                          3, 3, 3, true) {}
};

class BrightsteelFormation final : public Card {
public:
  BrightsteelFormation() : Card(48, "Brightsteel Formation",
                                "Play or Attack: Give all allies Barrier.",
                                "",
                                "01DE052", CardRegion::DEMACIA, CardRarity::EPIC,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_BARRIER,
                                9, 9, 9, true) {}
};

class SuperMegaDeathRocket_1 final : public Card {
public:
  SuperMegaDeathRocket_1() : Card(49, "Super Mega Death Rocket!",
                                  "Deal 4 to the enemy nexus and 1 to all other enemies. Fleeting.",
                                  "",
                                  "01PZ040T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                  K_SLOW | K_FLEETING,
                                  2, 0, 0, false) {}
};

class Elise final : public Card {
public:
  Elise() : Card(50, "Elise",
                 "Attack: Summon an attacking Spiderling.",
                 "Round Start: You have 3+ other Spiders.",
                 "01SI053", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::SPIDER,
                 K_FEARSOME,
                 2, 2, 3, true) {}
};

class RelentlessPursuit final : public Card {
public:
  RelentlessPursuit() : Card(51, "Relentless Pursuit",
                             "Rally.",
                             "",
                             "01DE021", CardRegion::DEMACIA, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_FAST,
                             3, 0, 0, true) {}
};

class MagnumOpus1 final : public Card {
public:
  MagnumOpus1() : Card(52, "Magnum Opus",
                       "Obliterate the top 5 cards of your deck to deal 1 to all enemies for each spell obliterated.",
                       "",
                       "01PZ048T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                       CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                       K_SKILL,
                       0, 0, 0, false) {}
};

class ParalyzingBite1 final : public Card {
public:
  ParalyzingBite1() : Card(53, "Paralyzing Bite",
                           "Stun an enemy.",
                           "",
                           "01NX046T1", CardRegion::NOXUS, CardRarity::NONE,
                           CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                           K_SKILL,
                           0, 0, 0, false) {}
};

class Transfusion final : public Card {
public:
  Transfusion() : Card(54, "Transfusion",
                       "Deal 1 to an ally to give another ally +2|+2 this round.",
                       "",
                       "01NX047", CardRegion::NOXUS, CardRarity::COMMON,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_BURST,
                       2, 0, 0, true) {}
};

class OnslaughtOfShadows final : public Card {
public:
  OnslaughtOfShadows() : Card(55, "Onslaught of Shadows",
                              "Summon 2 Spectral Rider.",
                              "",
                              "01SI010", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_SLOW,
                              2, 0, 0, true) {}
};

class LegionSaboteur final : public Card {
public:
  LegionSaboteur() : Card(56, "Legion Saboteur",
                          "Attack: Deal 1 to the enemy Nexus.",
                          "",
                          "01NX040", CardRegion::NOXUS, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          1, 2, 1, true) {}
};

class Hecarim1 final : public Card {
public:
  Hecarim1() : Card(57, "Hecarim",
                    "Ephemeral allies have +3|+0.\nAttack: Summon 2 attacking Spectral Rider.",
                    "",
                    "01SI042T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_OVERWHELM,
                    6, 5, 6, false) {}
};

class ScrapScuttler1 final : public Card {
public:
  ScrapScuttler1() : Card(58, "Scrap Scuttler",
                          "",
                          "",
                          "01PZ032", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          1, 1, 1, false) {}
};

class Zed1 final : public Card {
public:
  Zed1() : Card(59, "Zed",
                "Attack: Create an attacking Living Shadow with my stats and keywords.",
                "",
                "01IO009T2", CardRegion::IONIA, CardRarity::NONE,
                CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                K_QUICK_ATTACK,
                3, 4, 3, false) {}
};

class Vilemaw1 final : public Card {
public:
  Vilemaw1() : Card(60, "Vilemaw",
                    "",
                    "",
                    "01SI027T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                    CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                    K_FEARSOME,
                    3, 6, 6, false) {}
};

class GreengladeElder final : public Card {
public:
  GreengladeElder() : Card(61, "Greenglade Elder",
                           "When I'm summoned, grant allies in hand +1|+1.",
                           "",
                           "01IO014", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           3, 1, 1, true) {}
};

class Darius1 final : public Card {
public:
  Darius1() : Card(62, "Darius",
                   "",
                   "",
                   "01NX038T2", CardRegion::NOXUS, CardRarity::NONE,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_OVERWHELM,
                   6, 10, 5, false) {}
};

class Lucian_sRelentlessPursuit1 final : public Card {
public:
  Lucian_sRelentlessPursuit1() : Card(63, "Lucian's Relentless Pursuit",
                                      "Rally.\nShuffle a Lucian into your deck.",
                                      "",
                                      "01DE022T2", CardRegion::DEMACIA, CardRarity::NONE,
                                      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                      K_FAST,
                                      3, 0, 0, false) {}
};

class Jury_rig final : public Card {
public:
  Jury_rig() : Card(64, "Jury-Rig",
                    "When cast or discarded, summon a Scrap Scuttler.",
                    "",
                    "01PZ028", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                    K_BURST,
                    1, 0, 0, true) {}
};

class Detain final : public Card {
public:
  Detain() : Card(65, "Detain",
                  "An ally Captures a unit.",
                  "",
                  "01DE025", CardRegion::DEMACIA, CardRarity::COMMON,
                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                  K_FAST,
                  5, 0, 0, true) {}
};

class AvarosanMarksman final : public Card {
public:
  AvarosanMarksman() : Card(66, "Avarosan Marksman",
                            "Play: Deal 1 to an enemy unit.",
                            "",
                            "01FR036", CardRegion::FRELJORD, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            3, 3, 1, true) {}
};

class NimblePoro final : public Card {
public:
  NimblePoro() : Card(67, "Nimble Poro",
                      "",
                      "",
                      "01IO005", CardRegion::IONIA, CardRarity::COMMON,
                      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                      K_QUICK_ATTACK,
                      1, 1, 1, true) {}
};

class ScarthaneSteffen final : public Card {
public:
  ScarthaneSteffen() : Card(68, "Scarthane Steffen",
                            "When I survive damage, grant me +3|+0.",
                            "",
                            "01FR045", CardRegion::FRELJORD, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            3, 2, 4, true) {}
};

class NavoriConspirator final : public Card {
public:
  NavoriConspirator() : Card(69, "Navori Conspirator",
                             "To play me, Recall an ally.",
                             "",
                             "01IO044", CardRegion::IONIA, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_ELUSIVE,
                             2, 2, 2, true) {}
};

class JubilantPoro1 final : public Card {
public:
  JubilantPoro1() : Card(70, "Jubilant Poro",
                         "When I'm summoned, create in hand another random 1 cost Poro from any region.",
                         "",
                         "01FR008T1", CardRegion::FRELJORD, CardRarity::NONE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                         K_NONE,
                         1, 1, 1, false) {}
};

class Shatter final : public Card {
public:
  Shatter() : Card(71, "Shatter",
                   "Deal 4 to an enemy unit if it has 0 Power. Otherwise, Frostbite it.",
                   "",
                   "01FR055", CardRegion::FRELJORD, CardRarity::COMMON,
                   CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                   K_SLOW,
                   2, 0, 0, true) {}
};

class CrystalArrow1 final : public Card {
public:
  CrystalArrow1() : Card(72, "Crystal Arrow",
                         "Frostbite an enemy and all other enemies with 3 or less Health. Draw 1.",
                         "",
                         "01FR038T3", CardRegion::FRELJORD, CardRarity::NONE,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_SLOW,
                         2, 0, 0, false) {}
};

class ArachnoidSentry final : public Card {
public:
  ArachnoidSentry() : Card(73, "Arachnoid Sentry",
                           "Play: Stun an enemy.",
                           "",
                           "01NX046", CardRegion::NOXUS, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                           K_NONE,
                           3, 3, 2, true) {}
};

class RisingSpellForce final : public Card {
public:
  RisingSpellForce() : Card(74, "Rising Spell Force",
                            "Give an ally +4|+0 and Quick Attack this round.",
                            "",
                            "01PZ050", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_BURST,
                            3, 0, 0, true) {}
};

class Mk3_Floor_b_gone1 final : public Card {
public:
  Mk3_Floor_b_gone1() : Card(75, "Mk3: Floor-B-Gone",
                             "",
                             "",
                             "01PZ056T6", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                             K_ELUSIVE,
                             3, 3, 1, false) {}
};

class JeweledProtector final : public Card {
public:
  JeweledProtector() : Card(76, "Jeweled Protector",
                            "Play: Grant an ally in hand +3|+3.",
                            "",
                            "01IO023", CardRegion::IONIA, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            5, 4, 4, true) {}
};

class CursedKeeper final : public Card {
public:
  CursedKeeper() : Card(77, "Cursed Keeper",
                        "Last Breath: Summon an Escaped Abomination.",
                        "",
                        "01SI048", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_CANT_BLOCK | K_LAST_BREATH,
                        2, 1, 1, true) {}
};

class Undermine1 final : public Card {
public:
  Undermine1() : Card(78, "Undermine",
                      "Deal 2 to the enemy Nexus.",
                      "",
                      "01PZ054T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                      K_SKILL,
                      0, 0, 0, false) {}
};

class Impersonate1 final : public Card {
public:
  Impersonate1() : Card(79, "Impersonate",
                        "Pick a follower. Transform me into an exact copy of it.",
                        "",
                        "01PZ030T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                        CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                        K_SKILL,
                        0, 0, 0, false) {}
};

class Brothers_Bond final : public Card {
public:
  Brothers_Bond() : Card(80, "Brothers' Bond",
                         "Grant two allies +2|+0.",
                         "",
                         "01NX025", CardRegion::NOXUS, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_BURST,
                         2, 0, 0, true) {}
};

class HouseSpider final : public Card {
public:
  HouseSpider() : Card(81, "House Spider",
                       "When I'm summoned, summon a Spiderling.",
                       "",
                       "01NX055", CardRegion::NOXUS, CardRarity::COMMON,
                       CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                       K_NONE,
                       2, 2, 2, true) {}
};

class Judgment final : public Card {
public:
  Judgment() : Card(82, "Judgment",
                    "A battling ally strikes all battling enemies.",
                    "",
                    "01DE007", CardRegion::DEMACIA, CardRarity::EPIC,
                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                    K_FAST,
                    8, 0, 0, true) {}
};

class UsedCaskSalesman final : public Card {
public:
  UsedCaskSalesman() : Card(83, "Used Cask Salesman",
                            "When I'm summoned, summon 2 Caustic Cask.",
                            "",
                            "01PZ017", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            3, 3, 2, true) {}
};

class SumpDredger final : public Card {
public:
  SumpDredger() : Card(84, "Sump Dredger",
                       "To play me, discard 1.",
                       "",
                       "01PZ038", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_NONE,
                       2, 4, 3, true) {}
};

class Mk2_EvolutionTurret1 final : public Card {
public:
  Mk2_EvolutionTurret1() : Card(85, "Mk2: Evolution Turret",
                                "",
                                "",
                                "01PZ056T7", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                                K_TOUGH,
                                2, 2, 1, false) {}
};

class ScribeOfSorrows final : public Card {
public:
  ScribeOfSorrows() : Card(86, "Scribe of Sorrows",
                           "When I'm summoned, create a copy in hand of an ally that died this game.",
                           "",
                           "01SI018", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           3, 2, 3, true) {}
};

class Teemo_sMushroomCloud1 final : public Card {
public:
  Teemo_sMushroomCloud1() : Card(87, "Teemo's Mushroom Cloud",
                                 "Plant 5 Poison Puffcap on random cards in the enemy deck.\nShuffle a Teemo into your deck.",
                                 "",
                                 "01PZ008T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                 CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                 K_BURST,
                                 1, 0, 0, false) {}
};

class Kalista1 final : public Card {
public:
  Kalista1() : Card(88, "Kalista",
                    "The first time I attack each round, revive an attacking Ephemeral copy of the Strongest dead allied follower. This round, we're bonded and it takes damage for me.",
                    "",
                    "01SI030T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_FEARSOME,
                    3, 5, 4, false) {}
};

class Entreat final : public Card {
public:
  Entreat() : Card(89, "Entreat",
                   "Draw a Champion.",
                   "",
                   "01FR029", CardRegion::FRELJORD, CardRarity::RARE,
                   CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                   K_BURST,
                   2, 0, 0, true) {}
};

class NightHarvest1 final : public Card {
public:
  NightHarvest1() : Card(90, "Night Harvest",
                         "Kill the 2 Weakest enemies if an ally died this round.",
                         "",
                         "01SI035T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                         CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                         K_SKILL,
                         0, 0, 0, false) {}
};

class Kalista final : public Card {
public:
  Kalista() : Card(91, "Kalista",
                   "",
                   "I've seen 4+ allies die.",
                   "01SI030", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_FEARSOME,
                   3, 4, 3, true) {}
};

class SownSeeds final : public Card {
public:
  SownSeeds() : Card(92, "Sown Seeds",
                     "Grant allies in hand +1|+0.",
                     "",
                     "01IO029", CardRegion::IONIA, CardRarity::RARE,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_BURST,
                     2, 0, 0, true) {}
};

class Ezreal1 final : public Card {
public:
  Ezreal1() : Card(93, "Ezreal",
                   "Nexus Strike: Create a Fleeting Mystic Shot in hand.\nWhen you cast a spell, deal 2 to the enemy Nexus.",
                   "",
                   "01PZ036T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_ELUSIVE | K_IMBUE,
                   3, 2, 4, false) {}
};

class UnscarredReaver final : public Card {
public:
  UnscarredReaver() : Card(94, "Unscarred Reaver",
                           "When I survive damage, grant me +3|+0.",
                           "",
                           "01FR035", CardRegion::FRELJORD, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           1, 0, 3, true) {}
};

class DeathMark final : public Card {
public:
  DeathMark() : Card(95, "Death Mark",
                     "Remove Ephemeral from an ally to grant it to an enemy.",
                     "",
                     "01IO003", CardRegion::IONIA, CardRarity::RARE,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_FAST,
                     3, 0, 0, true) {}
};

class JaeMedarda final : public Card {
public:
  JaeMedarda() : Card(96, "Jae Medarda",
                      "When I'm targeted, draw 1.",
                      "",
                      "01PZ035", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_ELUSIVE,
                      8, 6, 6, true) {}
};

class ShadyCharacter final : public Card {
public:
  ShadyCharacter() : Card(97, "Shady Character",
                          "Play: Pick a follower. Transform me into an exact copy of it.",
                          "",
                          "01PZ030", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          4, 1, 1, true) {}
};

class ShadowFlare final : public Card {
public:
  ShadowFlare() : Card(98, "Shadow Flare",
                       "Grant ALL battling followers Ephemeral.",
                       "",
                       "01IO047", CardRegion::IONIA, CardRarity::EPIC,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_FAST,
                       6, 0, 0, true) {}
};

class CorinaVeraza final : public Card {
public:
  CorinaVeraza() : Card(99, "Corina Veraza",
                        "Play: Obliterate the top 5 cards of your deck to deal 1 to all enemies for each spell obliterated.",
                        "",
                        "01PZ048", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        9, 6, 6, true) {}
};

class CatalystOfAeons final : public Card {
public:
  CatalystOfAeons() : Card(100, "Catalyst of Aeons",
                           "Get an empty mana gem and heal your Nexus 3.",
                           "",
                           "01FR012", CardRegion::FRELJORD, CardRarity::COMMON,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_BURST,
                           5, 0, 0, true) {}
};

class Draven_sWhirlingDeath1 final : public Card {
public:
  Draven_sWhirlingDeath1() : Card(101, "Draven's Whirling Death",
                                  "A battling ally strikes a battling enemy.\nShuffle a Draven into your deck.",
                                  "",
                                  "01NX020T2", CardRegion::NOXUS, CardRarity::NONE,
                                  CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                  K_FAST,
                                  3, 0, 0, false) {}
};

class CrimsonDisciple final : public Card {
public:
  CrimsonDisciple() : Card(102, "Crimson Disciple",
                           "When I survive damage, deal 2 to the enemy Nexus.",
                           "",
                           "01NX030", CardRegion::NOXUS, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           2, 2, 3, true) {}
};

class EnragedYeti1 final : public Card {
public:
  EnragedYeti1() : Card(103, "Enraged Yeti",
                        "",
                        "",
                        "01FR028", CardRegion::FRELJORD, CardRarity::NONE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
                        K_NONE,
                        1, 5, 5, false) {}
};

class MushroomCloud final : public Card {
public:
  MushroomCloud() : Card(104, "Mushroom Cloud",
                         "Plant 5 Poison Puffcap on random cards in the enemy deck.",
                         "",
                         "01PZ010", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_BURST,
                         1, 0, 0, true) {}
};

class ArenaBattlecaster final : public Card {
public:
  ArenaBattlecaster() : Card(105, "Arena Battlecaster",
                             "Attack: Give other battling allies +1|+0 this round.",
                             "",
                             "01NX007", CardRegion::NOXUS, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             2, 2, 2, true) {}
};

class ZauniteUrchin final : public Card {
public:
  ZauniteUrchin() : Card(106, "Zaunite Urchin",
                         "To play me, discard 1.\nLast Breath: Draw 1.",
                         "",
                         "01PZ045", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_LAST_BREATH,
                         1, 2, 1, true) {}
};

class InspiringMentor final : public Card {
public:
  InspiringMentor() : Card(107, "Inspiring Mentor",
                           "Play: Grant an ally in hand +1|+0.",
                           "",
                           "01IO026", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           1, 1, 2, true) {}
};

class RecklessResearch1 final : public Card {
public:
  RecklessResearch1() : Card(108, "Reckless Research",
                             "Discard your hand. Draw 3. Deal 3 to an enemy unit.",
                             "",
                             "01PZ013T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                             CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                             K_SKILL,
                             0, 0, 0, false) {}
};

class BackAlleyBarkeep final : public Card {
public:
  BackAlleyBarkeep() : Card(109, "Back Alley Barkeep",
                            "When I'm summoned, create a random card in hand for each Back Alley Barkeep you've summoned this game. ",
                            "",
                            "01PZ002", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            4, 3, 2, true) {}
};

class Spiderling1 final : public Card {
public:
  Spiderling1() : Card(110, "Spiderling",
                       "",
                       "",
                       "01SI002", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                       K_NONE,
                       1, 1, 1, false) {}
};

class Scuttlegeist final : public Card {
public:
  Scuttlegeist() : Card(111, "Scuttlegeist",
                        "Reduce my cost by 1 for each ally that died this game.",
                        "",
                        "01SI005", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_FEARSOME,
                        10, 5, 5, true) {}
};

class Ashe final : public Card {
public:
  Ashe() : Card(112, "Ashe",
                "Attack: Frostbite the Strongest enemy.",
                "You Frostbite 5+ enemies. When I level up, create a Crystal Arrow on top of deck.",
                "01FR038", CardRegion::FRELJORD, CardRarity::CHAMPION,
                CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                K_NONE,
                4, 5, 3, true) {}
};

class LaurentDuelist final : public Card {
public:
  LaurentDuelist() : Card(113, "Laurent Duelist",
                          "Play: Give an ally Challenger this round.",
                          "",
                          "01DE055", CardRegion::DEMACIA, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          3, 3, 2, true) {}
};

class TrueshotBarrage final : public Card {
public:
  TrueshotBarrage() : Card(114, "Trueshot Barrage",
                           "Deal 3 to an enemy or the enemy Nexus, 2 to another, and 1 to another.",
                           "",
                           "01PZ004", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_SLOW,
                           7, 0, 0, true) {}
};

class MageseekerInciter final : public Card {
public:
  MageseekerInciter() : Card(115, "Mageseeker Inciter",
                             "Grant me +2|+2 once you've cast a 6+ cost spell this game.",
                             "",
                             "01DE048", CardRegion::DEMACIA, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             4, 4, 3, true) {}
};

class DawnAndDusk final : public Card {
public:
  DawnAndDusk() : Card(116, "Dawn and Dusk",
                       "Summon 2 exact copies of an ally. They're Ephemeral.",
                       "",
                       "01IO024", CardRegion::IONIA, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_SLOW,
                       6, 0, 0, true) {}
};

class SpiderQueenElise1 final : public Card {
public:
  SpiderQueenElise1() : Card(117, "Spider Queen Elise",
                             "Other Spider allies have Challenger and Fearsome.",
                             "",
                             "01SI053T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                             CardType::UNIT, CardSupType::CHAMPION, CardSubType::SPIDER,
                             K_FEARSOME | K_CHALLENGER,
                             2, 4, 3, false) {}
};

class VanguardBannerman final : public Card {
public:
  VanguardBannerman() : Card(118, "Vanguard Bannerman",
                             "Allegiance: Grant all allies +1|+1.",
                             "",
                             "01DE001", CardRegion::DEMACIA, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                             K_NONE,
                             4, 3, 3, true) {}
};

class DaringPoro final : public Card {
public:
  DaringPoro() : Card(119, "Daring Poro",
                      "",
                      "",
                      "01PZ020", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                      K_ELUSIVE,
                      1, 1, 1, true) {}
};

class LegionMarauder final : public Card {
public:
  LegionMarauder() : Card(120, "Legion Marauder",
                          "Attack: Grant allied Legion Marauders everywhere +1|+1.",
                          "",
                          "01NX021", CardRegion::NOXUS, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          3, 3, 2, true) {}
};

class Avalanche final : public Card {
public:
  Avalanche() : Card(121, "Avalanche",
                     "Deal 2 to ALL units.",
                     "",
                     "01FR020", CardRegion::FRELJORD, CardRarity::RARE,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_SLOW,
                     4, 0, 0, true) {}
};

class CounterfeitCopies final : public Card {
public:
  CounterfeitCopies() : Card(122, "Counterfeit Copies",
                             "Pick a card in hand. Shuffle 4 exact copies of it into your deck.",
                             "",
                             "01PZ046", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_BURST,
                             1, 0, 0, true) {}
};

class ScaledSnapper final : public Card {
public:
  ScaledSnapper() : Card(123, "Scaled Snapper",
                         "Play: Grant me +3|+0 or +0|+3.",
                         "",
                         "01IO028", CardRegion::IONIA, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         3, 2, 2, true) {}
};

class YetiYearling final : public Card {
public:
  YetiYearling() : Card(124, "Yeti Yearling",
                        "Last Breath: Shuffle 2 Enraged Yeti into our deck.",
                        "",
                        "01FR014", CardRegion::FRELJORD, CardRarity::COMMON,
                        CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
                        K_LAST_BREATH,
                        1, 1, 2, true) {}
};

class SinisterPoro final : public Card {
public:
  SinisterPoro() : Card(125, "Sinister Poro",
                        "",
                        "",
                        "01SI037", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                        CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                        K_FEARSOME,
                        1, 1, 1, true) {}
};

class CrowdFavorite final : public Card {
public:
  CrowdFavorite() : Card(126, "Crowd Favorite",
                         "When I'm summoned, grant me +1|+1 for each other ally you have.",
                         "",
                         "01NX009", CardRegion::NOXUS, CardRarity::RARE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_OVERWHELM,
                         4, 2, 1, true) {}
};

class ShadowAssassin final : public Card {
public:
  ShadowAssassin() : Card(127, "Shadow Assassin",
                          "When I'm summoned, draw 1.",
                          "",
                          "01IO057", CardRegion::IONIA, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_ELUSIVE,
                          3, 2, 2, true) {}
};

class ScaledSnapper1 final : public Card {
public:
  ScaledSnapper1() : Card(128, "Scaled Snapper",
                          "",
                          "",
                          "01IO028T2", CardRegion::IONIA, CardRarity::NONE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          3, 5, 2, false) {}
};

class BoomcrewRookie final : public Card {
public:
  BoomcrewRookie() : Card(129, "Boomcrew Rookie",
                          "Attack: Deal 2 to the enemy Nexus.",
                          "",
                          "01PZ054", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          2, 1, 4, true) {}
};

class Draven final : public Card {
public:
  Draven() : Card(130, "Draven",
                  "Play or Strike: Create a Spinning Axe in hand.",
                  "I've struck twice with a Spinning Axe.",
                  "01NX020", CardRegion::NOXUS, CardRarity::CHAMPION,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_QUICK_ATTACK,
                  3, 3, 3, true) {}
};

class MysticShot final : public Card {
public:
  MysticShot() : Card(131, "Mystic Shot",
                      "Deal 2 to anything.",
                      "",
                      "01PZ052", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_FAST,
                      2, 0, 0, true) {}
};

class Anivia_sHarshWinds1 final : public Card {
public:
  Anivia_sHarshWinds1() : Card(132, "Anivia's Harsh Winds",
                               "Frostbite 2 enemies.\nShuffle an Anivia into your deck.",
                               "",
                               "01FR024T1", CardRegion::FRELJORD, CardRarity::NONE,
                               CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                               K_BURST,
                               6, 0, 0, false) {}
};

class WarChefs final : public Card {
public:
  WarChefs() : Card(133, "War Chefs",
                    "Support: Give my supported ally +1|+1 this round.",
                    "",
                    "01DE043", CardRegion::DEMACIA, CardRarity::COMMON,
                    CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                    K_NONE,
                    2, 2, 3, true) {}
};

class Ezreal final : public Card {
public:
  Ezreal() : Card(134, "Ezreal",
                  "Nexus Strike: Create a Fleeting Mystic Shot in hand.",
                  "You've targeted enemy units 8+ times.",
                  "01PZ036", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_ELUSIVE,
                  3, 1, 3, true) {}
};

class ScaledSnapper2 final : public Card {
public:
  ScaledSnapper2() : Card(135, "Scaled Snapper",
                          "",
                          "",
                          "01IO028T1", CardRegion::IONIA, CardRarity::NONE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          3, 2, 5, false) {}
};

class EscapedAbomination1 final : public Card {
public:
  EscapedAbomination1() : Card(136, "Escaped Abomination",
                               "",
                               "",
                               "01SI048T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               2, 4, 4, false) {}
};

class T_hex1 final : public Card {
public:
  T_hex1() : Card(137, "T-Hex",
                  "",
                  "",
                  "01PZ015", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                  CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                  K_NONE,
                  8, 8, 8, false) {}
};

class Reckoning final : public Card {
public:
  Reckoning() : Card(138, "Reckoning",
                     "If you have a 5+ Power ally, kill ALL units with 4 or less Power.",
                     "",
                     "01NX053", CardRegion::NOXUS, CardRarity::EPIC,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_SLOW,
                     6, 0, 0, true) {}
};

class HextechTransmogulator final : public Card {
public:
  HextechTransmogulator() : Card(139, "Hextech Transmogulator",
                                 "Transform a follower into another follower.",
                                 "",
                                 "01PZ005", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                 K_FAST,
                                 6, 0, 0, true) {}
};

class Darius_sDecimate1 final : public Card {
public:
  Darius_sDecimate1() : Card(140, "Darius's Decimate",
                             "Deal 4 to the enemy Nexus.\nShuffle a Darius into your deck.",
                             "",
                             "01NX038T1", CardRegion::NOXUS, CardRarity::NONE,
                             CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                             K_SLOW,
                             5, 0, 0, false) {}
};

class Thresh final : public Card {
public:
  Thresh() : Card(141, "Thresh",
                  "",
                  "I've seen 6+ units die.",
                  "01SI052", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_CHALLENGER,
                  5, 3, 6, true) {}
};

class Lucian1 final : public Card {
public:
  Lucian1() : Card(142, "Lucian",
                   "Each round, the first time an ally dies, Rally.",
                   "",
                   "01DE022T1", CardRegion::DEMACIA, CardRarity::NONE,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_DOUBLE_ATTACK,
                   2, 4, 3, false) {}
};

class PluckyPoro final : public Card {
public:
  PluckyPoro() : Card(143, "Plucky Poro",
                      "",
                      "",
                      "01DE049", CardRegion::DEMACIA, CardRarity::COMMON,
                      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                      K_TOUGH,
                      1, 1, 1, true) {}
};

class Garen_sJudgment1 final : public Card {
public:
  Garen_sJudgment1() : Card(144, "Garen's Judgment",
                            "A battling ally strikes all battling enemies.\nShuffle a Garen into your deck.",
                            "",
                            "01DE012T2", CardRegion::DEMACIA, CardRarity::NONE,
                            CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                            K_FAST,
                            8, 0, 0, false) {}
};

class CommanderLedros final : public Card {
public:
  CommanderLedros() : Card(145, "Commander Ledros",
                           "Play: Deal damage to the enemy Nexus equal to half its Health, rounded up.\nLast Breath: Return me to hand.",
                           "",
                           "01SI033", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_FEARSOME | K_LAST_BREATH,
                           9, 9, 6, true) {}
};

class MidenstokkeHenchmen final : public Card {
public:
  MidenstokkeHenchmen() : Card(146, "Midenstokke Henchmen",
                               "Nexus Strike: Summon an exact copy of me.",
                               "",
                               "01PZ021", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               5, 5, 3, true) {}
};

class TheHarrowing final : public Card {
public:
  TheHarrowing() : Card(147, "The Harrowing",
                        "Revive the 6 Strongest allies that died this game and grant them Ephemeral.",
                        "",
                        "01SI003", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_SLOW,
                        10, 0, 0, true) {}
};

class TheUndying final : public Card {
public:
  TheUndying() : Card(148, "The Undying",
                      "Last Breath: Revive me next Round Start and grant me +1|+1 for each time I've died. ",
                      "",
                      "01SI041", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_CANT_BLOCK | K_LAST_BREATH,
                      3, 2, 2, true) {}
};

class Sabotage1 final : public Card {
public:
  Sabotage1() : Card(149, "Sabotage",
                     "Deal 1 to the enemy Nexus.",
                     "",
                     "01NX040T1", CardRegion::NOXUS, CardRarity::NONE,
                     CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                     K_SKILL,
                     0, 0, 0, false) {}
};

class StalkingWolf final : public Card {
public:
  StalkingWolf() : Card(150, "Stalking Wolf",
                        "When I'm summoned, the enemy summons a Snow Hare.",
                        "",
                        "01FR049", CardRegion::FRELJORD, CardRarity::COMMON,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_CHALLENGER,
                        2, 3, 2, true) {}
};

class Shen1 final : public Card {
public:
  Shen1() : Card(151, "Shen",
                 "Support: Give my supported ally Barrier.\nWhen an ally gets Barrier, give it +3|+0 this round.",
                 "",
                 "01IO032T1", CardRegion::IONIA, CardRarity::NONE,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                 K_NONE,
                 4, 3, 6, false) {}
};

class LaurentChevalier final : public Card {
public:
  LaurentChevalier() : Card(152, "Laurent Chevalier",
                            "Strike: Create another random Challenger follower in hand.",
                            "",
                            "01DE053", CardRegion::DEMACIA, CardRarity::EPIC,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_CHALLENGER,
                            4, 3, 1, true) {}
};

class AbsorbSoul final : public Card {
public:
  AbsorbSoul() : Card(153, "Absorb Soul",
                      "Drain 4 from an ally unit.",
                      "",
                      "01SI045", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_FAST,
                      1, 0, 0, true) {}
};

class AvarosanOutriders final : public Card {
public:
  AvarosanOutriders() : Card(154, "Avarosan Outriders",
                             "Allegiance: Grant the top unit in our deck +3|+3 and Overwhelm.",
                             "",
                             "01FR037", CardRegion::FRELJORD, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_OVERWHELM,
                             4, 3, 3, true) {}
};

class CrawlingSensation final : public Card {
public:
  CrawlingSensation() : Card(155, "Crawling Sensation",
                             "If an ally died this round, summon 2 Spiderling.",
                             "",
                             "01SI036", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_SLOW,
                             1, 0, 0, true) {}
};

class Braum1 final : public Card {
public:
  Braum1() : Card(156, "Braum",
                  "When I survive damage, summon a Mighty Poro.",
                  "",
                  "01FR009T1", CardRegion::FRELJORD, CardRarity::NONE,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_CHALLENGER | K_REGENERATION,
                  3, 0, 7, false) {}
};

class ShadowFiend final : public Card {
public:
  ShadowFiend() : Card(157, "Shadow Fiend",
                       "",
                       "",
                       "01IO013", CardRegion::IONIA, CardRarity::COMMON,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_EPHEMERAL,
                       1, 4, 3, true) {}
};

class StatikkShock final : public Card {
public:
  StatikkShock() : Card(158, "Statikk Shock",
                        "Deal 1 to an enemy or the enemy Nexus, and 1 to another.\nDraw 1.",
                        "",
                        "01PZ031", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_FAST,
                        4, 0, 0, true) {}
};

class SpectralRider1 final : public Card {
public:
  SpectralRider1() : Card(159, "Spectral Rider",
                          "",
                          "",
                          "01SI024", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_EPHEMERAL,
                          2, 2, 2, false) {}
};

class TorturedProdigy final : public Card {
public:
  TorturedProdigy() : Card(160, "Tortured Prodigy",
                           "When an ally dies, refill your spell mana.",
                           "",
                           "01SI051", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           5, 4, 4, true) {}
};

class AlphaWildclaw final : public Card {
public:
  AlphaWildclaw() : Card(161, "Alpha Wildclaw",
                         "",
                         "",
                         "01FR026", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_OVERWHELM,
                         6, 7, 6, true) {}
};

class IntimidatingRoar final : public Card {
public:
  IntimidatingRoar() : Card(162, "Intimidating Roar",
                            "Stun all enemies with 4 or less Power.",
                            "",
                            "01NX054", CardRegion::NOXUS, CardRarity::RARE,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_SLOW,
                            5, 0, 0, true) {}
};

class CrimsonPact1 final : public Card {
public:
  CrimsonPact1() : Card(163, "Crimson Pact",
                        "For each attacking ally other than Vladimir, deal 1 to it and 1 to the enemy Nexus.",
                        "",
                        "01NX006T2", CardRegion::NOXUS, CardRarity::NONE,
                        CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                        K_SKILL,
                        0, 0, 0, false) {}
};

class GoldenCrushbot final : public Card {
public:
  GoldenCrushbot() : Card(164, "Golden Crushbot",
                          "",
                          "",
                          "01PZ059", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          3, 2, 5, true) {}
};

class LegionVeteran final : public Card {
public:
  LegionVeteran() : Card(165, "Legion Veteran",
                         "When another ally survives damage, grant it +1|+0.",
                         "",
                         "01NX029", CardRegion::NOXUS, CardRarity::EPIC,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         4, 4, 5, true) {}
};

class BrittleSteel final : public Card {
public:
  BrittleSteel() : Card(166, "Brittle Steel",
                        "Frostbite an enemy with 3 or less Health.",
                        "",
                        "01FR030", CardRegion::FRELJORD, CardRarity::COMMON,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_BURST,
                        1, 0, 0, true) {}
};

class ShirazaTheBlade final : public Card {
public:
  ShirazaTheBlade() : Card(167, "Shiraza the Blade",
                           "I deal double damage to the Nexus.",
                           "",
                           "01NX014", CardRegion::NOXUS, CardRarity::EPIC,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           4, 3, 3, true) {}
};

class ObliviousIslander final : public Card {
public:
  ObliviousIslander() : Card(168, "Oblivious Islander",
                             "Play: Grant an ally in hand Ephemeral and reduce its cost by 1.",
                             "",
                             "01SI012", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             1, 2, 1, true) {}
};

class Thresh_sTheBox1 final : public Card {
public:
  Thresh_sTheBox1() : Card(169, "Thresh's The Box",
                           "Deal 3 to each enemy that was summoned this round.\nShuffle a Thresh into deck.",
                           "",
                           "01SI052T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                           CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                           K_FAST,
                           4, 0, 0, false) {}
};

class Rummage final : public Card {
public:
  Rummage() : Card(170, "Rummage",
                   "Discard 2 to draw 2.\nIf you have exactly 1 other card in hand, discard 1 to draw 1.",
                   "",
                   "01PZ001", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                   CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                   K_BURST,
                   1, 0, 0, true) {}
};

class Katarina1 final : public Card {
public:
  Katarina1() : Card(171, "Katarina",
                     "Play: Rally.\nStrike: Recall me.",
                     "",
                     "01NX042T2", CardRegion::NOXUS, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_QUICK_ATTACK,
                     4, 4, 3, false) {}
};

class ScarmotherVrynna final : public Card {
public:
  ScarmotherVrynna() : Card(172, "Scarmother Vrynna",
                            "When I survive damage, grant me +3|+0.",
                            "",
                            "01FR013", CardRegion::FRELJORD, CardRarity::EPIC,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_OVERWHELM,
                            6, 3, 8, true) {}
};

class ScrapdashAssembly final : public Card {
public:
  ScrapdashAssembly() : Card(173, "Scrapdash Assembly",
                             "Summon 2 Scrap Scuttler.",
                             "",
                             "01PZ057", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_SLOW,
                             2, 0, 0, true) {}
};

class IronHarbinger final : public Card {
public:
  IronHarbinger() : Card(174, "Iron Harbinger",
                         "Attack: Grant me +1|+0 for each Ephemeral ally in play.",
                         "",
                         "01SI031", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_FEARSOME,
                         3, 2, 4, true) {}
};

class BlackSpear final : public Card {
public:
  BlackSpear() : Card(175, "Black Spear",
                      "If an ally died this round, deal 3 to a unit.",
                      "",
                      "01SI034", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_FAST,
                      3, 0, 0, true) {}
};

class HaplessAristocrat final : public Card {
public:
  HaplessAristocrat() : Card(176, "Hapless Aristocrat",
                             "Last Breath: Summon a Spiderling.",
                             "",
                             "01SI043", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_LAST_BREATH,
                             1, 1, 1, true) {}
};

class Rush final : public Card {
public:
  Rush() : Card(177, "Rush",
                "Give an ally +1|+0 and Quick Attack this round.",
                "",
                "01IO018", CardRegion::IONIA, CardRarity::COMMON,
                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                K_BURST,
                1, 0, 0, true) {}
};

class Heimerdinger_sProgressDay_1 final : public Card {
public:
  Heimerdinger_sProgressDay_1() : Card(178, "Heimerdinger's Progress Day!",
                                       "Draw 3, then reduce those cards' costs by 1.\nShuffle a Heimerdinger into your deck.",
                                       "",
                                       "01PZ056T3", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                       CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                       K_BURST,
                                       8, 0, 0, false) {}
};

class Winter_sBreath final : public Card {
public:
  Winter_sBreath() : Card(179, "Winter's Breath",
                          "Kill all enemies with 0 Power, then Frostbite all enemies.",
                          "",
                          "01FR019", CardRegion::FRELJORD, CardRarity::EPIC,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW,
                          7, 0, 0, true) {}
};

class Remembrance final : public Card {
public:
  Remembrance() : Card(180, "Remembrance",
                       "Costs 1 less for each ally that died this round. Summon a random 5 cost follower from Demacia.",
                       "",
                       "01DE033", CardRegion::DEMACIA, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_SLOW,
                       6, 0, 0, true) {}
};

class StirredSpirits final : public Card {
public:
  StirredSpirits() : Card(181, "Stirred Spirits",
                          "Support: Grant my supported ally +2|+0 and Ephemeral.",
                          "",
                          "01SI009", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          2, 3, 2, true) {}
};

class ThermogenicBeam final : public Card {
public:
  ThermogenicBeam() : Card(182, "Thermogenic Beam",
                           "To play, spend all your mana.\nDeal that much to a unit.",
                           "",
                           "01PZ027", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_SLOW,
                           0, 0, 0, true) {}
};

class Fiora1 final : public Card {
public:
  Fiora1() : Card(183, "Fiora",
                  "When I've killed 4 enemies and survived, you win the game. ",
                  "",
                  "01DE045T1", CardRegion::DEMACIA, CardRarity::NONE,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_CHALLENGER,
                  3, 4, 4, false) {}
};

class AvarosanHearthguard final : public Card {
public:
  AvarosanHearthguard() : Card(184, "Avarosan Hearthguard",
                               "When I'm summoned, grant allies in your deck +1|+1.",
                               "",
                               "01FR041", CardRegion::FRELJORD, CardRarity::EPIC,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               5, 5, 5, true) {}
};

class CaptainFarron final : public Card {
public:
  CaptainFarron() : Card(185, "Captain Farron",
                         "Play: Replace your hand with Decimates.",
                         "",
                         "01NX051", CardRegion::NOXUS, CardRarity::EPIC,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_OVERWHELM,
                         8, 8, 8, true) {}
};

class PoroHerder final : public Card {
public:
  PoroHerder() : Card(186, "Poro Herder",
                      "When I'm summoned, draw 2 Poros if you have a Poro ally.",
                      "",
                      "01FR025", CardRegion::FRELJORD, CardRarity::RARE,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_NONE,
                      4, 3, 4, true) {}
};

class Lux1 final : public Card {
public:
  Lux1() : Card(187, "Lux",
                "When I see you spend 6+ mana on spells, create a Final Spark in hand. ",
                "",
                "01DE042T2", CardRegion::DEMACIA, CardRarity::NONE,
                CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                K_BARRIER,
                6, 5, 6, false) {}
};

class LegionRearguard final : public Card {
public:
  LegionRearguard() : Card(188, "Legion Rearguard",
                           "",
                           "",
                           "01NX012", CardRegion::NOXUS, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_CANT_BLOCK,
                           1, 3, 2, true) {}
};

class MageseekerConservator final : public Card {
public:
  MageseekerConservator() : Card(189, "Mageseeker Conservator",
                                 "Last Breath: Create in hand a 6+ cost spell from a region other than Demacia.",
                                 "",
                                 "01DE024", CardRegion::DEMACIA, CardRarity::COMMON,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_LAST_BREATH,
                                 1, 1, 1, true) {}
};

class UnleashedSpirit1 final : public Card {
public:
  UnleashedSpirit1() : Card(190, "Unleashed Spirit",
                            "",
                            "",
                            "01SI007T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_EPHEMERAL,
                            1, 1, 1, false) {}
};

class VanguardFirstblade final : public Card {
public:
  VanguardFirstblade() : Card(191, "Vanguard Firstblade",
                              "Attack: Grant me +2|+2.",
                              "",
                              "01DE056", CardRegion::DEMACIA, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                              K_NONE,
                              4, 2, 2, true) {}
};

class Blade_sEdge final : public Card {
public:
  Blade_sEdge() : Card(192, "Blade's Edge",
                       "Deal 1 to anything.",
                       "",
                       "01NX043", CardRegion::NOXUS, CardRarity::COMMON,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_FAST,
                       1, 0, 0, true) {}
};

class SilverwingScout final : public Card {
public:
  SilverwingScout() : Card(193, "Silverwing Scout",
                           "",
                           "",
                           "01DE030", CardRegion::DEMACIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_ELUSIVE | K_TOUGH,
                           4, 2, 3, true) {}
};

class StaggeringStrikes1 final : public Card {
public:
  StaggeringStrikes1() : Card(194, "Staggering Strikes",
                              "Stun 2 enemies.",
                              "",
                              "01IO056T1", CardRegion::IONIA, CardRarity::NONE,
                              CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                              K_SKILL,
                              0, 0, 0, false) {}
};

class Kalista_sBlackSpear1 final : public Card {
public:
  Kalista_sBlackSpear1() : Card(195, "Kalista's Black Spear",
                                "If an ally died this round, deal 3 to a unit.\nShuffle a Kalista into your deck.",
                                "",
                                "01SI030T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                                CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                K_FAST,
                                3, 0, 0, false) {}
};

class LegionGrenadier final : public Card {
public:
  LegionGrenadier() : Card(196, "Legion Grenadier",
                           "Last Breath: Deal 2 to the enemy Nexus.",
                           "",
                           "01NX037", CardRegion::NOXUS, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_LAST_BREATH,
                           2, 3, 1, true) {}
};

class Decimate final : public Card {
public:
  Decimate() : Card(197, "Decimate",
                    "Deal 4 to the enemy Nexus.",
                    "",
                    "01NX002", CardRegion::NOXUS, CardRarity::RARE,
                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                    K_SLOW,
                    5, 0, 0, true) {}
};

class ZephyrSage final : public Card {
public:
  ZephyrSage() : Card(198, "Zephyr Sage",
                      "Play: Create an exact copy of a card in hand.",
                      "",
                      "01IO016", CardRegion::IONIA, CardRarity::RARE,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_NONE,
                      6, 4, 4, true) {}
};

class FrenziedSkitterer final : public Card {
public:
  FrenziedSkitterer() : Card(199, "Frenzied Skitterer",
                             "When I'm summoned, give other allied Spiders +1|+0 and enemies -1|-0 this round.",
                             "",
                             "01SI056", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                             K_FEARSOME,
                             3, 3, 3, true) {}
};

class LegionGeneral final : public Card {
public:
  LegionGeneral() : Card(200, "Legion General",
                         "When I'm summoned, grant me +1|+1 for each unit you've Stunned or Recalled this game. ",
                         "",
                         "01NX010", CardRegion::NOXUS, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_FEARSOME,
                         5, 4, 4, true) {}
};

class LegionDrummer final : public Card {
public:
  LegionDrummer() : Card(201, "Legion Drummer",
                         "Support: Give my supported ally Quick Attack this round.",
                         "",
                         "01NX017", CardRegion::NOXUS, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         2, 3, 2, true) {}
};

class SilverwingVanguard final : public Card {
public:
  SilverwingVanguard() : Card(202, "Silverwing Vanguard",
                              "When I'm summoned, summon an exact copy of me.",
                              "",
                              "01DE004", CardRegion::DEMACIA, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                              K_CHALLENGER,
                              4, 2, 1, true) {}
};

class Vengeance final : public Card {
public:
  Vengeance() : Card(203, "Vengeance",
                     "Kill a unit.",
                     "",
                     "01SI001", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_FAST,
                     7, 0, 0, true) {}
};

class LaurentProtege final : public Card {
public:
  LaurentProtege() : Card(204, "Laurent Protege",
                          "",
                          "",
                          "01DE011", CardRegion::DEMACIA, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_CHALLENGER,
                          3, 2, 4, true) {}
};

class GreengladeLookout final : public Card {
public:
  GreengladeLookout() : Card(205, "Greenglade Lookout",
                             "Strike: Reduce the cost of the most expensive unit in your hand by 1.",
                             "",
                             "01IO036", CardRegion::IONIA, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             2, 2, 1, true) {}
};

class AstuteAcademic final : public Card {
public:
  AstuteAcademic() : Card(206, "Astute Academic",
                          "When you draw a card, give me +1|+0 this round.",
                          "",
                          "01PZ055", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          1, 1, 2, true) {}
};

class Teemo final : public Card {
public:
  Teemo() : Card(207, "Teemo",
                 "Nexus Strike: Plant 5 Poison Puffcaps on random cards in the enemy deck.",
                 "You've planted 15+ Poison Puffcaps.",
                 "01PZ008", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                 K_ELUSIVE,
                 1, 1, 1, true) {}
};

class Mk5_RocketBlaster1 final : public Card {
public:
  Mk5_RocketBlaster1() : Card(208, "Mk5: Rocket Blaster",
                              "",
                              "",
                              "01PZ056T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                              K_QUICK_ATTACK,
                              5, 5, 1, false) {}
};

class UnlicensedInnovation final : public Card {
public:
  UnlicensedInnovation() : Card(209, "Unlicensed Innovation",
                                "Summon an Illegal Contraption.",
                                "",
                                "01PZ014", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_SLOW,
                                6, 0, 0, true) {}
};

class Succession final : public Card {
public:
  Succession() : Card(210, "Succession",
                      "Summon a Dauntless Vanguard.",
                      "",
                      "01DE047", CardRegion::DEMACIA, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_SLOW,
                      3, 0, 0, true) {}
};

class ArenaBookie final : public Card {
public:
  ArenaBookie() : Card(211, "Arena Bookie",
                       "Round Start: Discard your lowest cost card to draw 1.",
                       "",
                       "01NX003", CardRegion::NOXUS, CardRarity::RARE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_NONE,
                       3, 2, 1, true) {}
};

class WhirlingDeath final : public Card {
public:
  WhirlingDeath() : Card(212, "Whirling Death",
                         "A battling ally strikes a battling enemy.",
                         "",
                         "01NX011", CardRegion::NOXUS, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         3, 0, 0, true) {}
};

class VanguardLookout final : public Card {
public:
  VanguardLookout() : Card(213, "Vanguard Lookout",
                           "",
                           "",
                           "01DE046", CardRegion::DEMACIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                           K_NONE,
                           2, 1, 4, true) {}
};

class ScarmaidenReaver final : public Card {
public:
  ScarmaidenReaver() : Card(214, "Scarmaiden Reaver",
                            "",
                            "",
                            "01FR054", CardRegion::FRELJORD, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_OVERWHELM | K_REGENERATION,
                            5, 4, 5, true) {}
};

class Purify final : public Card {
public:
  Purify() : Card(215, "Purify",
                  "Silence a follower.",
                  "",
                  "01DE050", CardRegion::DEMACIA, CardRarity::COMMON,
                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                  K_BURST,
                  2, 0, 0, true) {}
};

class Tarkaz_sFury1 final : public Card {
public:
  Tarkaz_sFury1() : Card(216, "Tarkaz's Fury",
                         "Deal 1 to ALL battling units.",
                         "",
                         "01FR021T1", CardRegion::FRELJORD, CardRarity::NONE,
                         CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                         K_SKILL,
                         0, 0, 0, false) {}
};

class HeartOfTheFluft final : public Card {
public:
  HeartOfTheFluft() : Card(217, "Heart of the Fluft",
                           "Play: Combine all of our Poros into a Fluft of Poros, it gains their stats and keywords.",
                           "",
                           "01FR043", CardRegion::FRELJORD, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                           K_NONE,
                           6, 4, 4, true) {}
};

class SnowHare1 final : public Card {
public:
  SnowHare1() : Card(218, "Snow Hare",
                     "",
                     "",
                     "01FR049T1", CardRegion::FRELJORD, CardRarity::NONE,
                     CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                     K_NONE,
                     1, 1, 1, false) {}
};

class WyrdingStones final : public Card {
public:
  WyrdingStones() : Card(219, "Wyrding Stones",
                         "Round Start: Get an extra mana gem this round.",
                         "",
                         "01FR033", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         3, 0, 3, true) {}
};

class TheBox final : public Card {
public:
  TheBox() : Card(220, "The Box",
                  "Deal 3 to each enemy that was summoned this round.",
                  "",
                  "01SI019", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                  K_FAST,
                  4, 0, 0, true) {}
};

class FinalSpark1 final : public Card {
public:
  FinalSpark1() : Card(221, "Final Spark",
                       "Deal 4 to an enemy unit. Fleeting.",
                       "",
                       "01DE042T3", CardRegion::DEMACIA, CardRarity::NONE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_SLOW | K_OVERWHELM | K_FLEETING,
                       0, 0, 0, false) {}
};

class MinahSwiftfoot final : public Card {
public:
  MinahSwiftfoot() : Card(222, "Minah Swiftfoot",
                          "Play: Recall 3 enemies.",
                          "",
                          "01IO033", CardRegion::IONIA, CardRarity::EPIC,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          9, 6, 5, true) {}
};

class Vision final : public Card {
public:
  Vision() : Card(223, "Vision",
                  "When cast or discarded, grant allies +1|+0.",
                  "",
                  "01NX039", CardRegion::NOXUS, CardRarity::RARE,
                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                  K_BURST,
                  3, 0, 0, true) {}
};

class IcevaleArcher final : public Card {
public:
  IcevaleArcher() : Card(224, "Icevale Archer",
                         "Play: Frostbite an enemy.",
                         "",
                         "01FR011", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         2, 3, 1, true) {}
};

class SumpsnipeScavenger final : public Card {
public:
  SumpsnipeScavenger() : Card(225, "Sumpsnipe Scavenger",
                              "Allegiance: Create a Sumpworks Map in hand. It costs 0 this round.",
                              "",
                              "01PZ034", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              4, 4, 3, true) {}
};

class ElixirOfIron final : public Card {
public:
  ElixirOfIron() : Card(226, "Elixir of Iron",
                        "Give an ally +0|+2 this round.",
                        "",
                        "01FR004", CardRegion::FRELJORD, CardRarity::COMMON,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_BURST,
                        1, 0, 0, true) {}
};

class KindlyTavernkeeper final : public Card {
public:
  KindlyTavernkeeper() : Card(227, "Kindly Tavernkeeper",
                              "Play: Heal an ally or your Nexus 3.",
                              "",
                              "01FR050", CardRegion::FRELJORD, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              3, 2, 3, true) {}
};

class IllegalContraption1 final : public Card {
public:
  IllegalContraption1() : Card(228, "Illegal Contraption",
                               "",
                               "",
                               "01PZ014T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               6, 5, 5, false) {}
};

class TrifarianShieldbreaker final : public Card {
public:
  TrifarianShieldbreaker() : Card(229, "Trifarian Shieldbreaker",
                                  "",
                                  "",
                                  "01NX041", CardRegion::NOXUS, CardRarity::COMMON,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_FEARSOME,
                                  5, 6, 5, true) {}
};

class Tryndamere1 final : public Card {
public:
  Tryndamere1() : Card(230, "Tryndamere",
                       "",
                       "",
                       "01FR039T2", CardRegion::FRELJORD, CardRarity::NONE,
                       CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                       K_OVERWHELM | K_FEARSOME,
                       8, 9, 9, false) {}
};

class Ashe1 final : public Card {
public:
  Ashe1() : Card(231, "Ashe",
                 "Attack: Frostbite the Strongest enemy.\nEnemies with 0 Power can't block.",
                 "",
                 "01FR038T2", CardRegion::FRELJORD, CardRarity::NONE,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                 K_NONE,
                 4, 6, 4, false) {}
};

class AcceleratedPurrsuit1 final : public Card {
public:
  AcceleratedPurrsuit1() : Card(232, "Accelerated Purrsuit",
                                "If you've played 15 cards with different names this game, summon Catastrophe. ",
                                "",
                                "01PZ060", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_SLOW,
                                5, 0, 0, false) {}
};

class Yasuo final : public Card {
public:
  Yasuo() : Card(233, "Yasuo",
                 "When you Stun or Recall an enemy, I deal 2 to it.",
                 "You Stun or Recall 5+ units.",
                 "01IO015", CardRegion::IONIA, CardRarity::CHAMPION,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                 K_QUICK_ATTACK,
                 4, 4, 3, true) {}
};

class RitualOfRenewal final : public Card {
public:
  RitualOfRenewal() : Card(234, "Ritual of Renewal",
                           "Heal an ally or your Nexus 7. Draw 1.",
                           "",
                           "01IO001", CardRegion::IONIA, CardRarity::RARE,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_SLOW,
                           7, 0, 0, true) {}
};

class DauntlessVanguard1 final : public Card {
public:
  DauntlessVanguard1() : Card(235, "Dauntless Vanguard",
                              "",
                              "",
                              "01DE016", CardRegion::DEMACIA, CardRarity::NONE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                              K_NONE,
                              3, 3, 3, false) {}
};

class StandUnited final : public Card {
public:
  StandUnited() : Card(236, "Stand United",
                       "Swap two allies. Give them Barrier.",
                       "",
                       "01IO010", CardRegion::IONIA, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_BURST,
                       6, 0, 0, true) {}
};

class TwinDisciplines final : public Card {
public:
  TwinDisciplines() : Card(237, "Twin Disciplines",
                           "Give an ally +3|+0 or +0|+3 this round.",
                           "",
                           "01IO012", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_BURST,
                           3, 0, 0, true) {}
};

class Balesight1 final : public Card {
public:
  Balesight1() : Card(238, "Balesight",
                      "Obliterate ALL followers with 4 or less Power in play and in hands.",
                      "",
                      "01FR052T1", CardRegion::FRELJORD, CardRarity::NONE,
                      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                      K_SKILL,
                      0, 0, 0, false) {}
};

class MageseekerPersuader final : public Card {
public:
  MageseekerPersuader() : Card(239, "Mageseeker Persuader",
                               "Grant me +1|+1 and Challenger once you've cast a 6+ cost spell this game.",
                               "",
                               "01DE040", CardRegion::DEMACIA, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               2, 3, 2, true) {}
};

class MinotaurReckoner final : public Card {
public:
  MinotaurReckoner() : Card(240, "Minotaur Reckoner",
                            "Round Start: Stun the Weakest enemy.",
                            "",
                            "01NX036", CardRegion::NOXUS, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            6, 6, 6, true) {}
};

class BatteringRam final : public Card {
public:
  BatteringRam() : Card(241, "Battering Ram",
                        "Attack: Grant me +4|+0.",
                        "",
                        "01NX044", CardRegion::NOXUS, CardRarity::EPIC,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_OVERWHELM,
                        6, 0, 12, true) {}
};

class VanguardSquire final : public Card {
public:
  VanguardSquire() : Card(242, "Vanguard Squire",
                          "When you summon an Elite, reduce my cost by 1.",
                          "",
                          "01DE036", CardRegion::DEMACIA, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                          K_NONE,
                          4, 3, 3, true) {}
};

class RavenousButcher final : public Card {
public:
  RavenousButcher() : Card(243, "Ravenous Butcher",
                           "To play me, kill an ally.",
                           "",
                           "01SI011", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           0, 3, 2, true) {}
};

class Zed_sShadowshift1 final : public Card {
public:
  Zed_sShadowshift1() : Card(244, "Zed's Shadowshift",
                             "Recall an ally to summon a Living Shadow in its place.\nShuffle a Zed into your deck.",
                             "",
                             "01IO009T3", CardRegion::IONIA, CardRarity::NONE,
                             CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                             K_FAST,
                             3, 0, 0, false) {}
};

class Hecarim_sOnslaughtOfShadows1 final : public Card {
public:
  Hecarim_sOnslaughtOfShadows1() : Card(245, "Hecarim's Onslaught of Shadows",
                                        "Summon 2 Spectral Rider.\nShuffle a Hecarim into deck.",
                                        "",
                                        "01SI042T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                                        CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                        K_SLOW,
                                        2, 0, 0, false) {}
};

class Riposte final : public Card {
public:
  Riposte() : Card(246, "Riposte",
                   "Give an ally +3|+0 and Barrier this round.",
                   "",
                   "01DE037", CardRegion::DEMACIA, CardRarity::RARE,
                   CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                   K_BURST,
                   4, 0, 0, true) {}
};

class Mk7_ArmoredStomper1 final : public Card {
public:
  Mk7_ArmoredStomper1() : Card(247, "Mk7: Armored Stomper",
                               "",
                               "",
                               "01PZ056T5", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                               K_BARRIER,
                               7, 7, 1, false) {}
};

class FreshOfferings final : public Card {
public:
  FreshOfferings() : Card(248, "Fresh Offerings",
                          "If 3+ allies have died this round, summon Vilemaw.\n",
                          "",
                          "01SI027", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW,
                          3, 0, 0, true) {}
};

class AssemblyBot final : public Card {
public:
  AssemblyBot() : Card(249, "Assembly Bot",
                       "When you cast a spell, grant me +1|+1.",
                       "",
                       "01PZ003", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_IMBUE,
                       3, 1, 1, true) {}
};

class WindfarerHatchling final : public Card {
public:
  WindfarerHatchling() : Card(250, "Windfarer Hatchling",
                              "When I'm summoned, give other allies +2|+2 this round.",
                              "",
                              "01IO021", CardRegion::IONIA, CardRarity::EPIC,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_ELUSIVE,
                              7, 4, 2, true) {}
};

class PoroSnax final : public Card {
public:
  PoroSnax() : Card(251, "Poro Snax",
                    "Grant Poro allies everywhere +1|+1.",
                    "",
                    "01FR016", CardRegion::FRELJORD, CardRarity::COMMON,
                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                    K_BURST,
                    3, 0, 0, true) {}
};

class CrimsonAristocrat final : public Card {
public:
  CrimsonAristocrat() : Card(252, "Crimson Aristocrat",
                             "Play: Deal 1 to an ally and grant it +2|+0.",
                             "",
                             "01NX005", CardRegion::NOXUS, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             2, 2, 2, true) {}
};

class Jinx1 final : public Card {
public:
  Jinx1() : Card(253, "Jinx",
                 "Start of Round: Draw 1.\nEach round, the first time you empty your hand, create in hand a Super Mega Death Rocket!.",
                 "",
                 "01PZ040T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                 K_QUICK_ATTACK,
                 4, 5, 4, false) {}
};

class BattleFury final : public Card {
public:
  BattleFury() : Card(254, "Battle Fury",
                      "Grant an ally +8|+4.",
                      "",
                      "01FR005", CardRegion::FRELJORD, CardRarity::RARE,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_BURST,
                      8, 0, 0, true) {}
};

class Reinforcements final : public Card {
public:
  Reinforcements() : Card(255, "Reinforcements",
                          "Summon 2 Dauntless Vanguard, then grant Elite allies +1|+1.",
                          "",
                          "01DE014", CardRegion::DEMACIA, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW,
                          8, 0, 0, true) {}
};

class ChainVest final : public Card {
public:
  ChainVest() : Card(256, "Chain Vest",
                     "Grant an ally Tough.",
                     "",
                     "01DE013", CardRegion::DEMACIA, CardRarity::COMMON,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_BURST,
                     1, 0, 0, true) {}
};

class Zed final : public Card {
public:
  Zed() : Card(257, "Zed",
               "Attack: Create an attacking Living Shadow with my stats.",
               "My shadows and I have struck the enemy Nexus twice.",
               "01IO009", CardRegion::IONIA, CardRarity::CHAMPION,
               CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
               K_QUICK_ATTACK,
               3, 3, 2, true) {}
};

class Katarina_sDeathLotus1 final : public Card {
public:
  Katarina_sDeathLotus1() : Card(258, "Katarina's Death Lotus",
                                 "Deal 1 to ALL battling units.\nShuffle a Katarina into your deck.",
                                 "",
                                 "01NX042T1", CardRegion::NOXUS, CardRarity::NONE,
                                 CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                 K_FAST,
                                 2, 0, 0, false) {}
};

class TrifarianHopeful final : public Card {
public:
  TrifarianHopeful() : Card(259, "Trifarian Hopeful",
                            "When I'm summoned, grant me +2|+0 if you have another Noxus ally.",
                            "",
                            "01NX016", CardRegion::NOXUS, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            2, 3, 2, true) {}
};

class Braum_sTakeHeart1 final : public Card {
public:
  Braum_sTakeHeart1() : Card(260, "Braum's Take Heart",
                             "Grant a damaged ally +3|+3.\nShuffle a Braum into your deck.",
                             "",
                             "01FR009T2", CardRegion::FRELJORD, CardRarity::NONE,
                             CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                             K_BURST,
                             3, 0, 0, false) {}
};

class Mistwraith final : public Card {
public:
  Mistwraith() : Card(261, "Mistwraith",
                      "When I'm summoned, grant other allied Mistwraiths everywhere +1|+0.",
                      "",
                      "01SI014", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_FEARSOME,
                      2, 2, 2, true) {}
};

class ElixirOfWrath final : public Card {
public:
  ElixirOfWrath() : Card(262, "Elixir of Wrath",
                         "Give an ally +3|+0 this round.",
                         "",
                         "01NX027", CardRegion::NOXUS, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_BURST,
                         1, 0, 0, true) {}
};

class SilentShadowseer final : public Card {
public:
  SilentShadowseer() : Card(263, "Silent Shadowseer",
                            "Nexus Strike: Create a copy of me in hand.",
                            "",
                            "01IO027", CardRegion::IONIA, CardRarity::EPIC,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_ELUSIVE | K_EPHEMERAL,
                            2, 3, 1, true) {}
};

class HauntedRelic final : public Card {
public:
  HauntedRelic() : Card(264, "Haunted Relic",
                        "Summon 3 Unleashed Spirit.",
                        "",
                        "01SI007", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_SLOW,
                        2, 0, 0, true) {}
};

class MarkOfTheIsles final : public Card {
public:
  MarkOfTheIsles() : Card(265, "Mark of the Isles",
                          "Grant an ally +2|+2 and Ephemeral.",
                          "",
                          "01SI022", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_BURST,
                          1, 0, 0, true) {}
};

class Shen final : public Card {
public:
  Shen() : Card(266, "Shen",
                "Support: Give my supported ally Barrier.",
                "I've seen allies gain Barrier 4+ times.",
                "01IO032", CardRegion::IONIA, CardRarity::CHAMPION,
                CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                K_NONE,
                4, 2, 5, true) {}
};

class PreciousPet final : public Card {
public:
  PreciousPet() : Card(267, "Precious Pet",
                       "",
                       "",
                       "01NX015", CardRegion::NOXUS, CardRarity::COMMON,
                       CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                       K_FEARSOME,
                       1, 2, 1, true) {}
};

class GraspOfTheUndying final : public Card {
public:
  GraspOfTheUndying() : Card(268, "Grasp of the Undying",
                             "Drain 3 from a unit.",
                             "",
                             "01SI054", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_FAST,
                             5, 0, 0, true) {}
};

class ChempunkShredder final : public Card {
public:
  ChempunkShredder() : Card(269, "Chempunk Shredder",
                            "Play: Deal 1 to all enemy units.",
                            "",
                            "01PZ044", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            5, 5, 2, true) {}
};

class LonelyPoro final : public Card {
public:
  LonelyPoro() : Card(270, "Lonely Poro",
                      "When I'm summoned, create in hand another random 1 cost Poro from any region.",
                      "",
                      "01FR008", CardRegion::FRELJORD, CardRarity::COMMON,
                      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                      K_NONE,
                      1, 1, 1, true) {}
};

class Karma final : public Card {
public:
  Karma() : Card(271, "Karma",
                 "Round End: Create a random spell in hand.",
                 "You're Enlightened.",
                 "01IO041", CardRegion::IONIA, CardRarity::CHAMPION,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                 K_NONE,
                 5, 4, 3, true) {}
};

class Possession final : public Card {
public:
  Possession() : Card(272, "Possession",
                      "Steal an enemy follower this round. (Can't play if you have 6 allies already.)",
                      "",
                      "01SI006", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_SLOW,
                      5, 0, 0, true) {}
};

class RadiantGuardian final : public Card {
public:
  RadiantGuardian() : Card(273, "Radiant Guardian",
                           "When I'm summoned, grant me Lifesteal and Tough if an ally died this round.",
                           "",
                           "01DE015", CardRegion::DEMACIA, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           5, 5, 5, true) {}
};

class EminentBenefactor final : public Card {
public:
  EminentBenefactor() : Card(274, "Eminent Benefactor",
                             "Last Breath: Create a random Epic card in hand.",
                             "",
                             "01PZ029", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_LAST_BREATH,
                             4, 3, 3, true) {}
};

class DeathLotus final : public Card {
public:
  DeathLotus() : Card(275, "Death Lotus",
                      "Deal 1 to ALL battling units.",
                      "",
                      "01NX050", CardRegion::NOXUS, CardRarity::RARE,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_FAST,
                      2, 0, 0, true) {}
};

class Mk0_WindupShredder1 final : public Card {
public:
  Mk0_WindupShredder1() : Card(276, "Mk0: Windup Shredder",
                               "",
                               "",
                               "01PZ056T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                               K_CHALLENGER,
                               0, 0, 1, false) {}
};

class CloudDrinker final : public Card {
public:
  CloudDrinker() : Card(277, "Cloud Drinker",
                        "Your Burst spells cost 1 less.",
                        "",
                        "01IO031", CardRegion::IONIA, CardRarity::RARE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        6, 3, 5, true) {}
};

class LaurentBladekeeper final : public Card {
public:
  LaurentBladekeeper() : Card(278, "Laurent Bladekeeper",
                              "Play: Grant an ally +2|+2.",
                              "",
                              "01DE003", CardRegion::DEMACIA, CardRarity::RARE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              4, 2, 3, true) {}
};

class Warmother_sCall final : public Card {
public:
  Warmother_sCall() : Card(279, "Warmother's Call",
                           "Summon the top unit from our deck now and EACH Round Start.",
                           "",
                           "01FR023", CardRegion::FRELJORD, CardRarity::EPIC,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_SLOW,
                           12, 0, 0, true) {}
};

class PurrsuitOfPerfection final : public Card {
public:
  PurrsuitOfPerfection() : Card(280, "Purrsuit of Perfection",
                                "If you've played 20 cards with different names this game, summon Catastrophe. ",
                                "",
                                "01PZ033", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_SLOW,
                                5, 0, 0, true) {}
};

class BladeOfLedros1 final : public Card {
public:
  BladeOfLedros1() : Card(281, "Blade of Ledros",
                          "Deal damage to the enemy Nexus equal to half its Health, rounded up.",
                          "",
                          "01SI033T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                          CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                          K_SKILL,
                          0, 0, 0, false) {}
};

class Funsmith final : public Card {
public:
  Funsmith() : Card(282, "Funsmith",
                    "All of your spells and Skills deal 1 extra damage.",
                    "",
                    "01PZ051", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                    CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                    K_NONE,
                    5, 2, 3, true) {}
};

class SplinterSoul final : public Card {
public:
  SplinterSoul() : Card(283, "Splinter Soul",
                        "Summon an exact copy of an ally. It's Ephemeral and 1|1.",
                        "",
                        "01SI028", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_SLOW,
                        3, 0, 0, true) {}
};

class Atrocity final : public Card {
public:
  Atrocity() : Card(284, "Atrocity",
                    "Kill an ally to deal damage equal to its Power to anything.",
                    "",
                    "01SI025", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                    K_FAST,
                    6, 0, 0, true) {}
};

class Yasuo_sSteelTempest1 final : public Card {
public:
  Yasuo_sSteelTempest1() : Card(285, "Yasuo's Steel Tempest",
                                "Stun an attacking enemy.\nShuffle a Yasuo into your deck.",
                                "",
                                "01IO015T2", CardRegion::IONIA, CardRarity::NONE,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_FAST,
                                3, 0, 0, false) {}
};

class Recall final : public Card {
public:
  Recall() : Card(286, "Recall",
                  "Recall an ally.",
                  "",
                  "01IO011", CardRegion::IONIA, CardRarity::COMMON,
                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                  K_FAST,
                  1, 0, 0, true) {}
};

class LivingShadow1 final : public Card {
public:
  LivingShadow1() : Card(287, "Living Shadow",
                         "",
                         "",
                         "01IO009T1", CardRegion::IONIA, CardRarity::NONE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_EPHEMERAL,
                         3, 3, 2, false) {}
};

class WillOfIonia final : public Card {
public:
  WillOfIonia() : Card(288, "Will of Ionia",
                       "Recall a unit.",
                       "",
                       "01IO002", CardRegion::IONIA, CardRarity::COMMON,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_FAST,
                       4, 0, 0, true) {}
};

class FatalStrike1 final : public Card {
public:
  FatalStrike1() : Card(289, "Fatal Strike",
                        "If you have an attacking Ephemeral ally, kill Ren Shadowblade's blocker.",
                        "",
                        "01IO007T1", CardRegion::IONIA, CardRarity::NONE,
                        CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                        K_SKILL,
                        0, 0, 0, false) {}
};

class FeralMystic final : public Card {
public:
  FeralMystic() : Card(290, "Feral Mystic",
                       "Enlightened: I have +4|+4.",
                       "",
                       "01FR047", CardRegion::FRELJORD, CardRarity::COMMON,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_OVERWHELM,
                       2, 2, 2, true) {}
};

class SkywardStrikes1 final : public Card {
public:
  SkywardStrikes1() : Card(291, "Skyward Strikes",
                           "Recall 3 enemies.",
                           "",
                           "01IO033T1", CardRegion::IONIA, CardRarity::NONE,
                           CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                           K_SKILL,
                           0, 0, 0, false) {}
};

class NavoriBladescout final : public Card {
public:
  NavoriBladescout() : Card(292, "Navori Bladescout",
                            "When I'm summoned, give me Elusive this round.",
                            "",
                            "01IO017", CardRegion::IONIA, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            1, 2, 1, true) {}
};

class IcyYeti final : public Card {
public:
  IcyYeti() : Card(293, "Icy Yeti",
                   "When I'm summoned, Frostbite enemies with 3 or less Health.",
                   "",
                   "01FR056", CardRegion::FRELJORD, CardRarity::RARE,
                   CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
                   K_NONE,
                   7, 5, 5, true) {}
};

class Shunpo final : public Card {
public:
  Shunpo() : Card(294, "Shunpo",
                  "Deal 2 to an enemy unit, then Rally.",
                  "",
                  "01NX056", CardRegion::NOXUS, CardRarity::COMMON,
                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                  K_SLOW,
                  5, 0, 0, true) {}
};

class PoisonPuffcap1 final : public Card {
public:
  PoisonPuffcap1() : Card(295, "Poison Puffcap",
                          "Deal 1 to your Nexus.",
                          "",
                          "01PZ022", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                          CardType::TRAP, CardSupType::NONE, CardSubType::NONE,
                          K_TRAP,
                          0, 0, 0, false) {}
};

class Face_melter1 final : public Card {
public:
  Face_melter1() : Card(296, "Face-Melter",
                        "Deal 1 to all enemy units.",
                        "",
                        "01PZ044T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                        CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                        K_SKILL,
                        0, 0, 0, false) {}
};

class Mist_sCall final : public Card {
public:
  Mist_sCall() : Card(297, "Mist's Call",
                      "Revive a random ally that died this round.",
                      "",
                      "01SI046", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_FAST,
                      3, 0, 0, true) {}
};

class Catastrophe1 final : public Card {
public:
  Catastrophe1() : Card(298, "Catastrophe",
                        "",
                        "",
                        "01PZ033T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_OVERWHELM,
                        1, 30, 30, false) {}
};

class TrifarianAssessor final : public Card {
public:
  TrifarianAssessor() : Card(299, "Trifarian Assessor",
                             "Play: Draw 1 for each 5+ Power ally you have.",
                             "",
                             "01NX033", CardRegion::NOXUS, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             4, 4, 3, true) {}
};

class PrismaticBarrier final : public Card {
public:
  PrismaticBarrier() : Card(300, "Prismatic Barrier",
                            "Give an ally Barrier this round.",
                            "",
                            "01DE032", CardRegion::DEMACIA, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_BURST,
                            3, 0, 0, true) {}
};

class Vladimir1 final : public Card {
public:
  Vladimir1() : Card(301, "Vladimir",
                     "Attack: For each other attacking ally, deal 1 to it and 1 to the enemy Nexus.",
                     "",
                     "01NX006T1", CardRegion::NOXUS, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_REGENERATION,
                     5, 6, 6, false) {}
};

class ProfessorVonYipp final : public Card {
public:
  ProfessorVonYipp() : Card(302, "Professor von Yipp",
                            "When you summon a 1 cost ally, grant it +2|+2.",
                            "",
                            "01PZ023", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            4, 2, 3, true) {}
};

class Mk1_Wrenchbot1 final : public Card {
public:
  Mk1_Wrenchbot1() : Card(303, "Mk1: Wrenchbot",
                          "",
                          "",
                          "01PZ056T4", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                          K_NONE,
                          1, 1, 1, false) {}
};

class Tryndamere final : public Card {
public:
  Tryndamere() : Card(304, "Tryndamere",
                      "",
                      "If I would die, I Level Up instead.",
                      "01FR039", CardRegion::FRELJORD, CardRarity::CHAMPION,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_OVERWHELM,
                      8, 8, 4, true) {}
};

class BullElnuk final : public Card {
public:
  BullElnuk() : Card(305, "Bull Elnuk",
                     "",
                     "",
                     "01FR027", CardRegion::FRELJORD, CardRarity::COMMON,
                     CardType::UNIT, CardSupType::NONE, CardSubType::ELNUK,
                     K_NONE,
                     4, 4, 5, true) {}
};

class BroodAwakening final : public Card {
public:
  BroodAwakening() : Card(306, "Brood Awakening",
                          "Summon 3 Spiderling, then grant Spider allies +1|+0. ",
                          "",
                          "01SI050", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW,
                          5, 0, 0, true) {}
};

class PackMentality final : public Card {
public:
  PackMentality() : Card(307, "Pack Mentality",
                         "Give allies +2|+2 and Overwhelm this round.",
                         "",
                         "01FR057", CardRegion::FRELJORD, CardRarity::RARE,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_SLOW,
                         7, 0, 0, true) {}
};

class UnstableVoltician final : public Card {
public:
  UnstableVoltician() : Card(308, "Unstable Voltician",
                             "Grant me +4|+0 and Quick Attack once you've cast a 6+ cost spell this game.",
                             "",
                             "01PZ024", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             5, 4, 4, true) {}
};

class Wraithcaller final : public Card {
public:
  Wraithcaller() : Card(309, "Wraithcaller",
                        "Allegiance: Summon a Mistwraith.",
                        "",
                        "01SI016", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        4, 4, 3, true) {}
};

class SparringStudent final : public Card {
public:
  SparringStudent() : Card(310, "Sparring Student",
                           "When you summon an ally, give me +1|+1 this round.",
                           "",
                           "01IO042", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           1, 1, 1, true) {}
};

class Ashe_sFlashFreeze1 final : public Card {
public:
  Ashe_sFlashFreeze1() : Card(311, "Ashe's Flash Freeze",
                              "Frostbite an enemy.\nShuffle an Ashe into your deck.",
                              "",
                              "01FR038T1", CardRegion::FRELJORD, CardRarity::NONE,
                              CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                              K_BURST,
                              3, 0, 0, false) {}
};

class TarkazTheTribeless final : public Card {
public:
  TarkazTheTribeless() : Card(312, "Tarkaz the Tribeless",
                              "Attack: Deal 1 to ALL battling units.",
                              "",
                              "01FR021", CardRegion::FRELJORD, CardRarity::EPIC,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              5, 5, 8, true) {}
};

class GreengladeDuo final : public Card {
public:
  GreengladeDuo() : Card(313, "Greenglade Duo",
                         "When you summon an ally, give me +1|+0 this round.",
                         "",
                         "01IO006", CardRegion::IONIA, CardRarity::RARE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_ELUSIVE,
                         2, 2, 1, true) {}
};

class BloodForBlood final : public Card {
public:
  BloodForBlood() : Card(314, "Blood for Blood",
                         "Deal 1 to an allied follower. If it survives, create a copy of it in hand.",
                         "",
                         "01NX052", CardRegion::NOXUS, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         3, 0, 0, true) {}
};

class KinkouWayfinder final : public Card {
public:
  KinkouWayfinder() : Card(315, "Kinkou Wayfinder",
                           "Allegiance: Summon two 1 cost allies from our deck.",
                           "",
                           "01IO050", CardRegion::IONIA, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           4, 2, 3, true) {}
};

class SingleCombat final : public Card {
public:
  SingleCombat() : Card(316, "Single Combat",
                        "An ally and an enemy strike each other.",
                        "",
                        "01DE026", CardRegion::DEMACIA, CardRarity::COMMON,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_FAST,
                        2, 0, 0, true) {}
};

class Katarina final : public Card {
public:
  Katarina() : Card(317, "Katarina",
                    "",
                    "I've struck once. When I level up, Recall me.",
                    "01NX042", CardRegion::NOXUS, CardRarity::CHAMPION,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_QUICK_ATTACK,
                    3, 3, 2, true) {}
};

class SharkChariot final : public Card {
public:
  SharkChariot() : Card(318, "Shark Chariot",
                        "When an Ephemeral ally attacks and I'm dead, return me to play attacking.",
                        "",
                        "01SI021", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_CANT_BLOCK | K_EPHEMERAL,
                        2, 3, 1, true) {}
};

class AvarosanTrapper final : public Card {
public:
  AvarosanTrapper() : Card(319, "Avarosan Trapper",
                           "When I'm summoned, create an Enraged Yeti in the top 3 cards of your deck.",
                           "",
                           "01FR048", CardRegion::FRELJORD, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           3, 2, 2, true) {}
};

class ProgressDay_ final : public Card {
public:
  ProgressDay_() : Card(320, "Progress Day!",
                        "Draw 3, then reduce those cards' costs by 1.",
                        "",
                        "01PZ049", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_BURST,
                        8, 0, 0, true) {}
};

class Yusari final : public Card {
public:
  Yusari() : Card(321, "Yusari",
                  "",
                  "",
                  "01IO048", CardRegion::IONIA, CardRarity::RARE,
                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                  K_CHALLENGER | K_ELUSIVE,
                  5, 4, 3, true) {}
};

class TroopOfElnuks final : public Card {
public:
  TroopOfElnuks() : Card(322, "Troop of Elnuks",
                         "Play: For the top 6 cards in your deck, summon each Elnuk and shuffle the rest into your deck.",
                         "",
                         "01FR017", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::ELNUK,
                         K_NONE,
                         5, 3, 3, true) {}
};

class HealthPotion final : public Card {
public:
  HealthPotion() : Card(323, "Health Potion",
                        "Heal an ally or your Nexus 3.",
                        "",
                        "01IO004", CardRegion::IONIA, CardRarity::COMMON,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_BURST,
                        1, 0, 0, true) {}
};

class ChroniclerOfRuin final : public Card {
public:
  ChroniclerOfRuin() : Card(324, "Chronicler of Ruin",
                            "Play: Kill an ally, then revive it.",
                            "",
                            "01SI032", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            4, 3, 3, true) {}
};

class PlazaGuardian final : public Card {
public:
  PlazaGuardian() : Card(325, "Plaza Guardian",
                         "Reduce my cost by 1 for each spell you've cast this game.",
                         "",
                         "01PZ006", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_QUICK_ATTACK,
                         10, 6, 6, true) {}
};

class RenShadowblade final : public Card {
public:
  RenShadowblade() : Card(326, "Ren Shadowblade",
                          "When the enemy summons a follower, grant it Ephemeral.",
                          "",
                          "01IO007", CardRegion::IONIA, CardRarity::EPIC,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          8, 6, 4, true) {}
};

class Anivia1 final : public Card {
public:
  Anivia1() : Card(327, "Anivia",
                   "Attack: Deal 2 to all enemies.\nLast Breath: Revive me transformed into Eggnivia.",
                   "",
                   "01FR024T3", CardRegion::FRELJORD, CardRarity::NONE,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_LAST_BREATH,
                   7, 3, 5, false) {}
};

class EtherealRemitter final : public Card {
public:
  EtherealRemitter() : Card(328, "Ethereal Remitter",
                            "Play: Kill an ally to summon a random follower from any region that costs 2 more.",
                            "",
                            "01SI058", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            5, 4, 3, true) {}
};

class ClumpOfWhumps final : public Card {
public:
  ClumpOfWhumps() : Card(329, "Clump of Whumps",
                         "When I'm summoned, create a Mushroom Cloud in hand.",
                         "",
                         "01PZ053", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         2, 2, 2, true) {}
};

class EmeraldAwakener final : public Card {
public:
  EmeraldAwakener() : Card(330, "Emerald Awakener",
                           "Enlightened: I have +4|+4.",
                           "",
                           "01IO053", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_LIFESTEAL,
                           3, 2, 2, true) {}
};

class TakeHeart final : public Card {
public:
  TakeHeart() : Card(331, "Take Heart",
                     "Grant a damaged ally +3|+3.",
                     "",
                     "01FR046", CardRegion::FRELJORD, CardRarity::RARE,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_BURST,
                     3, 0, 0, true) {}
};

class SavageReckoner final : public Card {
public:
  SavageReckoner() : Card(332, "Savage Reckoner",
                          "",
                          "",
                          "01NX045", CardRegion::NOXUS, CardRarity::RARE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_OVERWHELM | K_CHALLENGER,
                          7, 7, 4, true) {}
};

class EnGarde final : public Card {
public:
  EnGarde() : Card(333, "En Garde",
                   "Give allies Challenger this round.",
                   "",
                   "01DE027", CardRegion::DEMACIA, CardRarity::RARE,
                   CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                   K_BURST,
                   3, 0, 0, true) {}
};

class SpectralMatron final : public Card {
public:
  SpectralMatron() : Card(334, "Spectral Matron",
                          "Play: Pick an ally in hand. Summon an exact copy of it. It's Ephemeral.",
                          "",
                          "01SI044", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_FEARSOME,
                          8, 6, 6, true) {}
};

class RimetuskShaman final : public Card {
public:
  RimetuskShaman() : Card(335, "Rimetusk Shaman",
                          "Round Start: Frostbite the Strongest enemy.",
                          "",
                          "01FR040", CardRegion::FRELJORD, CardRarity::RARE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          5, 3, 3, true) {}
};

class Deny final : public Card {
public:
  Deny() : Card(336, "Deny",
                "Stop a fast spell, slow spell, or Skill.",
                "",
                "01IO049", CardRegion::IONIA, CardRarity::RARE,
                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                K_FAST,
                4, 0, 0, true) {}
};

class TrifarianGloryseeker final : public Card {
public:
  TrifarianGloryseeker() : Card(337, "Trifarian Gloryseeker",
                                "",
                                "",
                                "01NX031", CardRegion::NOXUS, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_CHALLENGER | K_CANT_BLOCK,
                                2, 5, 1, true) {}
};

class FlameChompers_ final : public Card {
public:
  FlameChompers_() : Card(338, "Flame Chompers!",
                          "When I'm discarded, summon me.",
                          "",
                          "01PZ012", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_CHALLENGER,
                          2, 0, 2, true) {}
};

class AncientYeti final : public Card {
public:
  AncientYeti() : Card(339, "Ancient Yeti",
                       "Round End: If I'm in hand, reduce my cost by 1.",
                       "",
                       "01FR031", CardRegion::FRELJORD, CardRarity::RARE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
                       K_OVERWHELM,
                       7, 5, 5, true) {}
};

class VanguardSergeant final : public Card {
public:
  VanguardSergeant() : Card(340, "Vanguard Sergeant",
                            "When I'm summoned, create a For Demacia! in hand.",
                            "",
                            "01DE006", CardRegion::DEMACIA, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                            K_NONE,
                            3, 3, 3, true) {}
};

class Bullseye1 final : public Card {
public:
  Bullseye1() : Card(341, "Bullseye",
                     "Deal 1 to an enemy unit.",
                     "",
                     "01FR036T1", CardRegion::FRELJORD, CardRarity::NONE,
                     CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                     K_SKILL,
                     0, 0, 0, false) {}
};

class MightyPoro final : public Card {
public:
  MightyPoro() : Card(342, "Mighty Poro",
                      "",
                      "",
                      "01FR053", CardRegion::FRELJORD, CardRarity::COMMON,
                      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                      K_OVERWHELM,
                      3, 3, 3, true) {}
};

class NavoriBrigand1 final : public Card {
public:
  NavoriBrigand1() : Card(343, "Navori Brigand",
                          "",
                          "",
                          "01IO052T1", CardRegion::IONIA, CardRarity::NONE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          2, 1, 2, false) {}
};

class ArachnoidHorror final : public Card {
public:
  ArachnoidHorror() : Card(344, "Arachnoid Horror",
                           "",
                           "",
                           "01SI039", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                           K_FEARSOME,
                           2, 3, 2, true) {}
};

class GetExcited_ final : public Card {
public:
  GetExcited_() : Card(345, "Get Excited!",
                       "To play, discard 1.\nDeal 3 to anything.",
                       "",
                       "01PZ039", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_FAST,
                       3, 0, 0, true) {}
};

class Mk6_Stormlobber1 final : public Card {
public:
  Mk6_Stormlobber1() : Card(346, "Mk6: Stormlobber",
                            "",
                            "",
                            "01PZ056T9", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                            K_OVERWHELM,
                            6, 6, 1, false) {}
};

class Senna_SentinelOfLight final : public Card {
public:
  Senna_SentinelOfLight() : Card(347, "Senna, Sentinel of Light",
                                 "The first time I see an allied Lucian die, grant me +1|+1 and Double Attack.",
                                 "",
                                 "01DE038", CardRegion::DEMACIA, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_QUICK_ATTACK,
                                 3, 4, 2, true) {}
};

class BloodswornPledge final : public Card {
public:
  BloodswornPledge() : Card(348, "Bloodsworn Pledge",
                            "Grant two allies +0|+3.",
                            "",
                            "01FR010", CardRegion::FRELJORD, CardRarity::RARE,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_BURST,
                            4, 0, 0, true) {}
};

class NavoriHighwayman final : public Card {
public:
  NavoriHighwayman() : Card(349, "Navori Highwayman",
                            "When I'm summoned, summon a Navori Brigand with my stats.",
                            "",
                            "01IO052", CardRegion::IONIA, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            2, 1, 2, true) {}
};

class TheEmpyrean final : public Card {
public:
  TheEmpyrean() : Card(350, "The Empyrean",
                       "",
                       "",
                       "01IO030", CardRegion::IONIA, CardRarity::EPIC,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_ELUSIVE,
                       7, 6, 5, true) {}
};

class BackToBack final : public Card {
public:
  BackToBack() : Card(351, "Back to Back",
                      "Give two allies +3|+3 this round.",
                      "",
                      "01DE041", CardRegion::DEMACIA, CardRarity::RARE,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_BURST,
                      6, 0, 0, true) {}
};

class Vladimir final : public Card {
public:
  Vladimir() : Card(352, "Vladimir",
                    "Attack: For each other attacking ally, deal 1 to it and 1 to the enemy Nexus.",
                    "You've had 6+ allies survive damage.",
                    "01NX006", CardRegion::NOXUS, CardRarity::CHAMPION,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_NONE,
                    5, 5, 5, true) {}
};

class FlashOfBrilliance final : public Card {
public:
  FlashOfBrilliance() : Card(353, "Flash of Brilliance",
                             "Create a random spell that costs 6+ in hand.\nRefill your spell mana.",
                             "",
                             "01PZ016", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_BURST,
                             3, 0, 0, true) {}
};

class Ezreal_sMysticShot1 final : public Card {
public:
  Ezreal_sMysticShot1() : Card(354, "Ezreal's Mystic Shot",
                               "Deal 2 to anything.\nShuffle an Ezreal into your deck.",
                               "",
                               "01PZ036T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                               CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                               K_FAST,
                               2, 0, 0, false) {}
};

class ForDemacia_ final : public Card {
public:
  ForDemacia_() : Card(355, "For Demacia!",
                       "Give allies +3|+3 this round.",
                       "",
                       "01DE035", CardRegion::DEMACIA, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_SLOW,
                       6, 0, 0, true) {}
};

class BasiliskRider final : public Card {
public:
  BasiliskRider() : Card(356, "Basilisk Rider",
                         "Allegiance: Grant me +1|+1 and Overwhelm.",
                         "",
                         "01NX008", CardRegion::NOXUS, CardRarity::RARE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         4, 5, 2, true) {}
};

class GreengladeCaretaker final : public Card {
public:
  GreengladeCaretaker() : Card(357, "Greenglade Caretaker",
                               "When an ally gets Barrier, grant me +2|+0.",
                               "",
                               "01IO019", CardRegion::IONIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               1, 1, 2, true) {}
};

class RadiantStrike final : public Card {
public:
  RadiantStrike() : Card(358, "Radiant Strike",
                         "Give an ally +1|+1 this round.",
                         "",
                         "01DE018", CardRegion::DEMACIA, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_BURST,
                         1, 0, 0, true) {}
};

class InsightOfAges final : public Card {
public:
  InsightOfAges() : Card(359, "Insight of Ages",
                         "Create another random spell in hand.\nEnlightened: Create 2 instead.",
                         "",
                         "01IO054", CardRegion::IONIA, CardRarity::RARE,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_BURST,
                         2, 0, 0, true) {}
};

class TheRekindler final : public Card {
public:
  TheRekindler() : Card(360, "The Rekindler",
                        "When I'm summoned, revive the Strongest dead allied champion.",
                        "",
                        "01SI020", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        7, 4, 4, true) {}
};

class FlashFreeze final : public Card {
public:
  FlashFreeze() : Card(361, "Flash Freeze",
                       "Frostbite an enemy.",
                       "",
                       "01FR001", CardRegion::FRELJORD, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_BURST,
                       3, 0, 0, true) {}
};

class ChumpWhump final : public Card {
public:
  ChumpWhump() : Card(362, "Chump Whump",
                      "When I'm summoned, create two Mushroom Cloud in hand.",
                      "",
                      "01PZ058", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_NONE,
                      4, 4, 3, true) {}
};

class Hecarim final : public Card {
public:
  Hecarim() : Card(363, "Hecarim",
                   "Attack: Summon 2 attacking Spectral Rider.",
                   "You've attacked with 7+ Ephemeral allies.",
                   "01SI042", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_OVERWHELM,
                   6, 4, 5, true) {}
};

class BrightsteelProtector final : public Card {
public:
  BrightsteelProtector() : Card(364, "Brightsteel Protector",
                                "Play: Give an ally Barrier.",
                                "",
                                "01DE009", CardRegion::DEMACIA, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                2, 3, 2, true) {}
};

class WitheringWail final : public Card {
public:
  WitheringWail() : Card(365, "Withering Wail",
                         "Deal 1 to all enemy units. Heal your Nexus 3.",
                         "",
                         "01SI029", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         5, 0, 0, true) {}
};

class AmateurAeronaut final : public Card {
public:
  AmateurAeronaut() : Card(366, "Amateur Aeronaut",
                           "",
                           "",
                           "01PZ009", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_ELUSIVE,
                           3, 2, 3, true) {}
};

class Shen_sStandUnited1 final : public Card {
public:
  Shen_sStandUnited1() : Card(367, "Shen's Stand United",
                              "Swap two allies. Give them Barrier.\nShuffle a Shen into your deck.",
                              "",
                              "01IO032T2", CardRegion::IONIA, CardRarity::NONE,
                              CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                              K_BURST,
                              6, 0, 0, false) {}
};

class RhasaTheSunderer final : public Card {
public:
  RhasaTheSunderer() : Card(368, "Rhasa the Sunderer",
                            "Play: Kill the 2 Weakest enemies if an ally died this round.",
                            "",
                            "01SI035", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_FEARSOME,
                            8, 7, 5, true) {}
};

class Anivia final : public Card {
public:
  Anivia() : Card(369, "Anivia",
                  "Attack: Deal 1 to all enemies.\nLast Breath: Revive me transformed into Eggnivia.",
                  "You're Enlightened.",
                  "01FR024", CardRegion::FRELJORD, CardRarity::CHAMPION,
                  CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                  K_LAST_BREATH,
                  7, 2, 4, true) {}
};

class AffectionatePoro final : public Card {
public:
  AffectionatePoro() : Card(370, "Affectionate Poro",
                            "",
                            "",
                            "01NX034", CardRegion::NOXUS, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                            K_CHALLENGER,
                            1, 1, 1, true) {}
};

class IntrepidMariner final : public Card {
public:
  IntrepidMariner() : Card(371, "Intrepid Mariner",
                           "Support: Give my supported ally Elusive this round.",
                           "",
                           "01PZ042", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           2, 1, 3, true) {}
};

class Lux final : public Card {
public:
  Lux() : Card(372, "Lux",
               "",
               "I've seen you cast 6+ mana of spells. When I level up, create a Final Spark in hand.",
               "01DE042", CardRegion::DEMACIA, CardRarity::CHAMPION,
               CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
               K_BARRIER,
               6, 4, 5, true) {}
};

class Fiora_sRiposte1 final : public Card {
public:
  Fiora_sRiposte1() : Card(373, "Fiora's Riposte",
                           "Give an ally +3|+0 and Barrier this round.\nShuffle a Fiora into your deck.",
                           "",
                           "01DE045T2", CardRegion::DEMACIA, CardRarity::NONE,
                           CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                           K_BURST,
                           4, 0, 0, false) {}
};

class Draven_sBiggestFan final : public Card {
public:
  Draven_sBiggestFan() : Card(374, "Draven's Biggest Fan",
                              "When I'm summoned, move Draven to the top of your deck if you don't have him in hand or in play.",
                              "",
                              "01NX035", CardRegion::NOXUS, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              1, 2, 1, true) {}
};

class GlacialStorm2 final : public Card {
public:
  GlacialStorm2() : Card(375, "Glacial Storm",
                         "Deal 2 to all enemies.",
                         "",
                         "01FR024T5", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                         K_SKILL,
                         0, 0, 0, false) {}
};

class RecklessTrifarian final : public Card {
public:
  RecklessTrifarian() : Card(376, "Reckless Trifarian",
                             "",
                             "",
                             "01NX026", CardRegion::NOXUS, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_CANT_BLOCK,
                             3, 5, 4, true) {}
};

class DarkwaterScourge final : public Card {
public:
  DarkwaterScourge() : Card(377, "Darkwater Scourge",
                            "",
                            "",
                            "01SI004", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_EPHEMERAL | K_LIFESTEAL,
                            3, 5, 5, true) {}
};

class SteelTempest final : public Card {
public:
  SteelTempest() : Card(378, "Steel Tempest",
                        "Stun an attacking enemy.",
                        "",
                        "01IO046", CardRegion::IONIA, CardRarity::RARE,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_FAST,
                        3, 0, 0, true) {}
};

class CithriaOfCloudfield final : public Card {
public:
  CithriaOfCloudfield() : Card(379, "Cithria of Cloudfield",
                               "",
                               "",
                               "01DE039", CardRegion::DEMACIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                               K_NONE,
                               1, 2, 2, true) {}
};

class Vladimir_sTransfusion1 final : public Card {
public:
  Vladimir_sTransfusion1() : Card(380, "Vladimir's Transfusion",
                                  "Deal 1 to an ally and give another ally +2|+2 this round.\nShuffle a Vladimir into deck.",
                                  "",
                                  "01NX006T3", CardRegion::NOXUS, CardRarity::NONE,
                                  CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                  K_BURST,
                                  2, 0, 0, false) {}
};

class FluftOfPoros1 final : public Card {
public:
  FluftOfPoros1() : Card(381, "Fluft of Poros",
                         "Last Breath: Summon a Heart of the Fluft.",
                         "",
                         "01FR043T1", CardRegion::FRELJORD, CardRarity::NONE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                         K_LAST_BREATH,
                         6, 4, 4, false) {}
};

class FleetfeatherTracker final : public Card {
public:
  FleetfeatherTracker() : Card(382, "Fleetfeather Tracker",
                               "When you summon another ally, grant me Challenger.",
                               "",
                               "01DE029", CardRegion::DEMACIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               1, 2, 1, true) {}
};

class Spirit_sRefuge final : public Card {
public:
  Spirit_sRefuge() : Card(383, "Spirit's Refuge",
                          "Give an ally Barrier and Lifesteal this round.",
                          "",
                          "01IO037", CardRegion::IONIA, CardRarity::COMMON,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_BURST,
                          4, 0, 0, true) {}
};

class Mk4_ApexTurret1 final : public Card {
public:
  Mk4_ApexTurret1() : Card(384, "Mk4: Apex Turret",
                           "",
                           "",
                           "01PZ056T8", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                           K_FEARSOME,
                           4, 4, 1, false) {}
};

class Eggnivia1 final : public Card {
public:
  Eggnivia1() : Card(385, "Eggnivia",
                     "",
                     "Round Start: If you're Enlightened, transform me back into Anivia and Level Up.",
                     "01FR024T4", CardRegion::FRELJORD, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_NONE,
                     1, 0, 2, false) {}
};

class SumpworksMap final : public Card {
public:
  SumpworksMap() : Card(386, "Sumpworks Map",
                        "Grant an ally Elusive.",
                        "",
                        "01PZ026", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_BURST,
                        2, 0, 0, true) {}
};

class Might final : public Card {
public:
  Might() : Card(387, "Might",
                 "Give an ally +3|+0 and Overwhelm this round.",
                 "",
                 "01NX019", CardRegion::NOXUS, CardRarity::COMMON,
                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                 K_BURST,
                 3, 0, 0, true) {}
};

class VanguardCavalry final : public Card {
public:
  VanguardCavalry() : Card(388, "Vanguard Cavalry",
                           "",
                           "",
                           "01DE028", CardRegion::DEMACIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                           K_TOUGH,
                           5, 5, 5, true) {}
};

class Rivershaper final : public Card {
public:
  Rivershaper() : Card(389, "Rivershaper",
                       "Strike: Draw a spell.",
                       "",
                       "01IO043", CardRegion::IONIA, CardRarity::RARE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_NONE,
                       3, 2, 1, true) {}
};

class ChempunkPickpocket final : public Card {
public:
  ChempunkPickpocket() : Card(390, "Chempunk Pickpocket",
                              "Nexus Strike: Create in hand an exact copy of a random spell from the enemy's deck.",
                              "",
                              "01PZ043", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              2, 3, 2, true) {}
};

class StarlitSeer final : public Card {
public:
  StarlitSeer() : Card(391, "Starlit Seer",
                       "When you cast a spell, grant the top ally in your deck +1|+1.",
                       "",
                       "01FR032", CardRegion::FRELJORD, CardRarity::RARE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_IMBUE,
                       2, 2, 2, true) {}
};

class SolitaryMonk final : public Card {
public:
  SolitaryMonk() : Card(392, "Solitary Monk",
                        "When I'm summoned, Recall all other allies.",
                        "",
                        "01IO038", CardRegion::IONIA, CardRarity::RARE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_ELUSIVE,
                        3, 4, 3, true) {}
};

class SheWhoWanders final : public Card {
public:
  SheWhoWanders() : Card(393, "She Who Wanders",
                         "Play: Obliterate ALL followers with 4 or less Power in play and in hands.",
                         "",
                         "01FR052", CardRegion::FRELJORD, CardRarity::EPIC,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         10, 10, 10, true) {}
};

class TallTales final : public Card {
public:
  TallTales() : Card(394, "Tall Tales",
                     "If you have a Yeti, summon an Enraged Yeti. Otherwise, create one on top of your deck.",
                     "",
                     "01FR051", CardRegion::FRELJORD, CardRarity::COMMON,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_SLOW,
                     3, 0, 0, true) {}
};

class NoxianGuillotine final : public Card {
public:
  NoxianGuillotine() : Card(395, "Noxian Guillotine",
                            "Kill a damaged unit to create a Fleeting  in hand.",
                            "",
                            "01NX022", CardRegion::NOXUS, CardRarity::RARE,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_FAST,
                            3, 0, 0, true) {}
};

class CausticCask final : public Card {
public:
  CausticCask() : Card(396, "Caustic Cask",
                       "Last Breath: Deal 1 to EACH Nexus.",
                       "",
                       "01PZ047", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                       CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                       K_LAST_BREATH | K_EPHEMERAL,
                       0, 0, 1, true) {}
};

class Warden_sPrey final : public Card {
public:
  Warden_sPrey() : Card(397, "Warden's Prey",
                        "Last Breath: Create in hand another Last Breath follower from any region that costs 3 or less.",
                        "",
                        "01SI026", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_LAST_BREATH,
                        1, 1, 1, true) {}
};

class DisciplineOfForce1 final : public Card {
public:
  DisciplineOfForce1() : Card(398, "Discipline of Force",
                              "Give an ally +3|+0 this round.",
                              "",
                              "01IO012T1", CardRegion::IONIA, CardRarity::NONE,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_BURST,
                              3, 0, 0, false) {}
};

class VanguardRedeemer final : public Card {
public:
  VanguardRedeemer() : Card(399, "Vanguard Redeemer",
                            "When I'm summoned, draw a unit if an ally died this round.",
                            "",
                            "01DE054", CardRegion::DEMACIA, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                            K_NONE,
                            3, 3, 3, true) {}
};

class Karma_sInsightOfAges1 final : public Card {
public:
  Karma_sInsightOfAges1() : Card(400, "Karma's Insight of Ages",
                                 "Create another random spell in hand.\nEnlightened: Create 2 instead.\nShuffle a Karma into your deck.",
                                 "",
                                 "01IO041T2", CardRegion::IONIA, CardRarity::NONE,
                                 CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                 K_BURST,
                                 2, 0, 0, false) {}
};

class Shadowshift final : public Card {
public:
  Shadowshift() : Card(401, "Shadowshift",
                       "Recall an ally to summon a Living Shadow in its place.",
                       "",
                       "01IO039", CardRegion::IONIA, CardRarity::COMMON,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_FAST,
                       3, 0, 0, true) {}
};

class CrimsonAwakener final : public Card {
public:
  CrimsonAwakener() : Card(402, "Crimson Awakener",
                           "When I'm summoned, deal 1 to all other allies.",
                           "",
                           "01NX032", CardRegion::NOXUS, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           4, 5, 5, true) {}
};

class MageseekerInvestigator final : public Card {
public:
  MageseekerInvestigator() : Card(403, "Mageseeker Investigator",
                                  "Create a Detain once you've cast a 6+ cost spell this game.",
                                  "",
                                  "01DE023", CardRegion::DEMACIA, CardRarity::COMMON,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_NONE,
                                  3, 3, 3, true) {}
};

class KatoTheArm final : public Card {
public:
  KatoTheArm() : Card(404, "Kato The Arm",
                      "Support: Give my supported ally +3|+0 and Overwhelm this round.",
                      "",
                      "01NX024", CardRegion::NOXUS, CardRarity::EPIC,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_NONE,
                      5, 5, 3, true) {}
};

class VileFeast final : public Card {
public:
  VileFeast() : Card(405, "Vile Feast",
                     "Drain 1 from a unit to summon a Spiderling.",
                     "",
                     "01SI040", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_FAST,
                     2, 0, 0, true) {}
};

class TheyWhoEndure final : public Card {
public:
  TheyWhoEndure() : Card(406, "They Who Endure",
                         "When I'm summoned, grant me +1|+1 for each ally that has died.",
                         "",
                         "01FR034", CardRegion::FRELJORD, CardRarity::RARE,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_OVERWHELM,
                         6, 1, 1, true) {}
};

class CithriaTheBold final : public Card {
public:
  CithriaTheBold() : Card(407, "Cithria the Bold",
                          "Attack: Give other battling allies +1|+1 and Fearsome this round.",
                          "",
                          "01DE051", CardRegion::DEMACIA, CardRarity::EPIC,
                          CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                          K_NONE,
                          6, 6, 6, true) {}
};

class Yone_Windchaser final : public Card {
public:
  Yone_Windchaser() : Card(408, "Yone, Windchaser",
                           "Play: Stun 2 enemies.",
                           "",
                           "01IO056", CardRegion::IONIA, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           7, 6, 6, true) {}
};

class KiGuardian final : public Card {
public:
  KiGuardian() : Card(409, "Ki Guardian",
                      "Grant Barrier to an ally in hand. \nDraw 1.",
                      "",
                      "01IO055", CardRegion::IONIA, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_BURST,
                      2, 0, 0, true) {}
};

class RedoubledValor final : public Card {
public:
  RedoubledValor() : Card(410, "Redoubled Valor",
                          "Fully heal an ally, then double its Power and Health.",
                          "",
                          "01DE044", CardRegion::DEMACIA, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW,
                          6, 0, 0, true) {}
};

class TheRuination final : public Card {
public:
  TheRuination() : Card(411, "The Ruination",
                        "Kill ALL units.",
                        "",
                        "01SI015", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_SLOW,
                        9, 0, 0, true) {}
};

class Thresh1 final : public Card {
public:
  Thresh1() : Card(412, "Thresh",
                   "The first time I attack this game, summon another attacking champion from your deck or hand.",
                   "",
                   "01SI052T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_CHALLENGER,
                   5, 4, 7, false) {}
};

class Guile final : public Card {
public:
  Guile() : Card(413, "Guile",
                 "Stun an enemy.",
                 "",
                 "01NX049", CardRegion::NOXUS, CardRarity::COMMON,
                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                 K_SLOW,
                 1, 0, 0, true) {}
};

class BabblingBjerg final : public Card {
public:
  BabblingBjerg() : Card(414, "Babbling Bjerg",
                         "When I'm summoned, draw a unit with 5+ Power.",
                         "",
                         "01FR007", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                         K_NONE,
                         4, 3, 3, true) {}
};

class Garen final : public Card {
public:
  Garen() : Card(415, "Garen",
                 "",
                 "I've struck twice.",
                 "01DE012", CardRegion::DEMACIA, CardRarity::CHAMPION,
                 CardType::UNIT, CardSupType::CHAMPION, CardSubType::ELITE,
                 K_REGENERATION,
                 5, 5, 5, true) {}
};

class SpinningAxe1 final : public Card {
public:
  SpinningAxe1() : Card(416, "Spinning Axe",
                        "To play, discard 1.\nGive an ally +1|+0 this round.",
                        "",
                        "01NX020T1", CardRegion::NOXUS, CardRarity::NONE,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_BURST,
                        0, 0, 0, false) {}
};

class AvarosanSentry final : public Card {
public:
  AvarosanSentry() : Card(417, "Avarosan Sentry",
                          "Last Breath: Draw 1.",
                          "",
                          "01FR003", CardRegion::FRELJORD, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_LAST_BREATH,
                          2, 2, 1, true) {}
};

class Soulgorger final : public Card {
public:
  Soulgorger() : Card(418, "Soulgorger",
                      "",
                      "",
                      "01SI055", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_LIFESTEAL,
                      6, 3, 7, true) {}
};

class FadingMemories final : public Card {
public:
  FadingMemories() : Card(419, "Fading Memories",
                          "Pick a follower. Create an Ephemeral copy of it in hand.",
                          "",
                          "01SI047", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_BURST,
                          0, 0, 0, true) {}
};

static umap<rsid, Card *> gallery;
static umap<rsid, Card *> collectible;
void init_gallery();
void clear_gallery();

#endif //RUNESIM_CARD_GALLERY_H
