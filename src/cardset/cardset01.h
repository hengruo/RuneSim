//
// Generate by Python
//
#ifndef RUNESIM_CARDSET01_H
#define RUNESIM_CARDSET01_H

#include "../game/card.h"

class DisciplineOfFortitude0000 final : public Card {
public:
  DisciplineOfFortitude0000() : Card(0, "Discipline of Fortitude",
                                     "Give an ally +0|+3 this round.",
                                     "",
                                     "01IO012T2", CardRegion::IONIA, CardRarity::NONE,
                                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                     K_BURST,
                                     3, 0, 0, false, {}) {}
};
class Draven0001 final : public Card {
public:
  Draven0001() : Card(1, "Draven",
                      "Play or Strike: Create 2 Spinning Axe in hand.",
                      "",
                      "01NX020T3", CardRegion::NOXUS, CardRarity::NONE,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_QUICK_ATTACK | K_OVERWHELM,
                      3, 4, 4, false, {416, 101, 130}) {}
};
class Dawnspeakers0002 final : public Card {
public:
  Dawnspeakers0002() : Card(2, "Dawnspeakers",
                            "Round End: Grant other allies +1|+1 if an ally died this round.",
                            "",
                            "01DE031", CardRegion::DEMACIA, CardRarity::EPIC,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            3, 1, 4, true, {}) {}
};
class YusariTheSlayer0003 final : public Card {
public:
  YusariTheSlayer0003() : Card(3, "Yusari the Slayer",
                               "",
                               "",
                               "01IO048T1", CardRegion::IONIA, CardRarity::NONE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_ELUSIVE,
                               3, 3, 2, false, {}) {}
};
class JinxsGetExcited0004 final : public Card {
public:
  JinxsGetExcited0004() : Card(4, "Jinx's Get Excited!",
                               "To play, discard 1. Deal 3 to anything.\nShuffle a Jinx into your deck.",
                               "",
                               "01PZ040T3", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                               CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                               K_FAST,
                               3, 0, 0, false, {44, 253}) {}
};
class GlacialStorm0005 final : public Card {
public:
  GlacialStorm0005() : Card(5, "Glacial Storm",
                            "Deal 1 to all enemies.",
                            "",
                            "01FR024T2", CardRegion::FRELJORD, CardRarity::NONE,
                            CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                            K_SKILL,
                            0, 0, 0, false, {369, 327}) {}
};
class Teemo0006 final : public Card {
public:
  Teemo0006() : Card(6, "Teemo",
                     "Nexus Strike: Double the Poison Puffcaps in the enemy deck.",
                     "",
                     "01PZ008T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_ELUSIVE,
                     1, 2, 2, false, {295, 207, 87}) {}
};
class Lucian0007 final : public Card {
public:
  Lucian0007() : Card(7, "Lucian",
                      "",
                      "I've seen 4+ allies or an allied Senna, Sentinel of Light die.",
                      "01DE022", CardRegion::DEMACIA, CardRarity::CHAMPION,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_QUICK_ATTACK,
                      2, 3, 2, true, {347, 142, 63}) {}
};
class Yasuo0008 final : public Card {
public:
  Yasuo0008() : Card(8, "Yasuo",
                     "When you Stun or Recall an enemy, I strike it.",
                     "",
                     "01IO015T1", CardRegion::IONIA, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_QUICK_ATTACK,
                     4, 5, 4, false, {285, 233}) {}
};
class Heimerdinger0009 final : public Card {
public:
  Heimerdinger0009() : Card(9,
                            "Heimerdinger",
                            "When you cast a spell, create a Fleeting Turret in hand with equal cost. It costs 0 this round.",
                            "I've seen you summon 12+ Power of Turrets.",
                            "01PZ056",
                            CardRegion::PILTOVER_N_ZAUN,
                            CardRarity::CHAMPION,
                            CardType::UNIT,
                            CardSupType::CHAMPION,
                            CardSubType::NONE,
                            K_IMBUE,
                            5,
                            1,
                            3,
                            true,
                            {16, 178, 276, 303, 85, 75, 384, 208, 346, 247, 137}) {}
};
class KeeperOfMasks0010 final : public Card {
public:
  KeeperOfMasks0010() : Card(10, "Keeper of Masks",
                             "When I'm summoned, give other allies +1|+0 this round.",
                             "",
                             "01IO020", CardRegion::IONIA, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             2, 2, 3, true, {}) {}
};
class TryndameresBattleFury0011 final : public Card {
public:
  TryndameresBattleFury0011() : Card(11, "Tryndamere's Battle Fury",
                                     "Grant an ally +8|+4.\nShuffle a Tryndamere into your deck.",
                                     "",
                                     "01FR039T1", CardRegion::FRELJORD, CardRarity::NONE,
                                     CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                     K_BURST,
                                     8, 0, 0, false, {304, 230}) {}
};
class AugmentedExperimenter0012 final : public Card {
public:
  AugmentedExperimenter0012() : Card(12, "Augmented Experimenter",
                                     "Play: Discard your hand. Draw 3. Deal 3 to an enemy unit.",
                                     "",
                                     "01PZ013", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                                     CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                     K_NONE,
                                     6, 3, 3, true, {108}) {}
};
class Mobilize0013 final : public Card {
public:
  Mobilize0013() : Card(13, "Mobilize",
                        "Reduce the cost of allies in hand by 1.",
                        "",
                        "01DE019", CardRegion::DEMACIA, CardRarity::RARE,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_BURST,
                        3, 0, 0, true, {}) {}
};
class CullingStrike0014 final : public Card {
public:
  CullingStrike0014() : Card(14, "Culling Strike",
                             "Kill a unit with 3 or less Power.",
                             "",
                             "01NX004", CardRegion::NOXUS, CardRarity::RARE,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_FAST,
                             3, 0, 0, true, {}) {}
};
class ParadeElectrorig0015 final : public Card {
public:
  ParadeElectrorig0015() : Card(15, "Parade Electrorig",
                                "Support: Shuffle 4 copies of the supported ally into your deck.",
                                "",
                                "01PZ007", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                3, 2, 4, true, {}) {}
};
class Heimerdinger0016 final : public Card {
public:
  Heimerdinger0016() : Card(16,
                            "Heimerdinger",
                            "When you cast a spell, create a Fleeting Turret in hand with equal cost. Grant it +1|+1 and it costs 0 this round.",
                            "",
                            "01PZ056T10",
                            CardRegion::PILTOVER_N_ZAUN,
                            CardRarity::NONE,
                            CardType::UNIT,
                            CardSupType::CHAMPION,
                            CardSubType::NONE,
                            K_IMBUE,
                            5,
                            2,
                            4,
                            false,
                            {178, 276, 303, 85, 75, 384, 208, 346, 247, 137, 9}) {}
};
class PhantomPrankster0017 final : public Card {
public:
  PhantomPrankster0017() : Card(17, "Phantom Prankster",
                                "When another ally dies, deal 1 to the enemy Nexus.",
                                "",
                                "01SI038", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                3, 0, 3, true, {}) {}
};
class LuxsPrismaticBarrier0018 final : public Card {
public:
  LuxsPrismaticBarrier0018() : Card(18, "Lux's Prismatic Barrier",
                                    "Give an ally Barrier this round.\nShuffle a Lux into your deck.",
                                    "",
                                    "01DE042T1", CardRegion::DEMACIA, CardRarity::NONE,
                                    CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                    K_BURST,
                                    3, 0, 0, false, {372, 187}) {}
};
class AcademyProdigy0019 final : public Card {
public:
  AcademyProdigy0019() : Card(19, "Academy Prodigy",
                              "",
                              "",
                              "01PZ018", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_QUICK_ATTACK,
                              2, 3, 1, true, {}) {}
};
class HeraldOfSpring0020 final : public Card {
public:
  HeraldOfSpring0020() : Card(20, "Herald of Spring",
                              "Support: Give my supported ally Lifesteal this round.",
                              "",
                              "01IO045", CardRegion::IONIA, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              2, 2, 2, true, {}) {}
};
class FaeBladetwirler0021 final : public Card {
public:
  FaeBladetwirler0021() : Card(21, "Fae Bladetwirler",
                               "When you Stun or Recall a unit, grant me +2|+0.",
                               "",
                               "01IO008", CardRegion::IONIA, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_QUICK_ATTACK,
                               2, 1, 3, true, {}) {}
};
class CrimsonCurator0022 final : public Card {
public:
  CrimsonCurator0022() : Card(22, "Crimson Curator",
                              "When I survive damage, create a random Crimson unit in your hand.",
                              "",
                              "01NX048", CardRegion::NOXUS, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              3, 3, 3, true, {102, 252, 22, 402}) {}
};
class IcebornLegacy0023 final : public Card {
public:
  IcebornLegacy0023() : Card(23, "Iceborn Legacy",
                             "Grant an ally and all allied copies of it everywhere +2|+2.",
                             "",
                             "01FR006", CardRegion::FRELJORD, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_SLOW,
                             5, 0, 0, true, {}) {}
};
class Ghost0024 final : public Card {
public:
  Ghost0024() : Card(24, "Ghost",
                     "Give an ally Elusive this round.",
                     "",
                     "01IO022", CardRegion::IONIA, CardRarity::COMMON,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_BURST,
                     1, 0, 0, true, {}) {}
};
class OmenHawk0025 final : public Card {
public:
  OmenHawk0025() : Card(25, "Omen Hawk",
                        "When I'm summoned, grant the top 2 allies in your deck +1|+1.",
                        "",
                        "01FR022", CardRegion::FRELJORD, CardRarity::COMMON,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        1, 1, 1, true, {}) {}
};
class HarshWinds0026 final : public Card {
public:
  HarshWinds0026() : Card(26, "Harsh Winds",
                          "Frostbite 2 enemies. ",
                          "",
                          "01FR042", CardRegion::FRELJORD, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_BURST,
                          6, 0, 0, true, {}) {}
};
class GlimpseBeyond0027 final : public Card {
public:
  GlimpseBeyond0027() : Card(27, "Glimpse Beyond",
                             "Kill an ally to draw 2.",
                             "",
                             "01SI049", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_FAST,
                             2, 0, 0, true, {}) {}
};
class ElisesCrawlingSensation0028 final : public Card {
public:
  ElisesCrawlingSensation0028() : Card(28,
                                       "Elise's Crawling Sensation",
                                       "If an ally died this round, summon 2 Spiderling.\nShuffle a Elise into your deck.",
                                       "",
                                       "01SI053T1",
                                       CardRegion::SHADOW_ISLES,
                                       CardRarity::NONE,
                                       CardType::SPELL,
                                       CardSupType::CHAMPION,
                                       CardSubType::NONE,
                                       K_SLOW,
                                       1,
                                       0,
                                       0,
                                       false,
                                       {110, 50, 117}) {}
};
class Braum0029 final : public Card {
public:
  Braum0029() : Card(29, "Braum",
                     "",
                     "I've survived 10 total damage.",
                     "01FR009", CardRegion::FRELJORD, CardRarity::CHAMPION,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_CHALLENGER | K_REGENERATION,
                     3, 0, 5, true, {156, 260, 342}) {}
};
class AncientCrocolith0030 final : public Card {
public:
  AncientCrocolith0030() : Card(30, "Ancient Crocolith",
                                "To play me, kill 2 allies.",
                                "",
                                "01SI057", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                4, 7, 7, true, {}) {}
};
class SwiftwingLancer0031 final : public Card {
public:
  SwiftwingLancer0031() : Card(31, "Swiftwing Lancer",
                               "Last Breath: Create an Elite in hand.",
                               "",
                               "01DE010", CardRegion::DEMACIA, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_LAST_BREATH | K_CHALLENGER,
                               5, 5, 4, true, {}) {}
};
class SoulShepherd0032 final : public Card {
public:
  SoulShepherd0032() : Card(32, "Soul Shepherd",
                            "When you summon an Ephemeral ally, grant it +1|+1.",
                            "",
                            "01SI023", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            2, 2, 3, true, {}) {}
};
class EagerApprentice0033 final : public Card {
public:
  EagerApprentice0033() : Card(33, "Eager Apprentice",
                               "When I'm summoned, refill 2 spell mana.",
                               "",
                               "01PZ019", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               2, 2, 1, true, {}) {}
};
class Darius0034 final : public Card {
public:
  Darius0034() : Card(34, "Darius",
                      "",
                      "The enemy Nexus has 10 or less Health.",
                      "01NX038", CardRegion::NOXUS, CardRarity::CHAMPION,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_OVERWHELM,
                      6, 6, 5, true, {62, 140}) {}
};
class KinkouLifeblade0035 final : public Card {
public:
  KinkouLifeblade0035() : Card(35, "Kinkou Lifeblade",
                               "",
                               "",
                               "01IO040", CardRegion::IONIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_LIFESTEAL | K_ELUSIVE,
                               4, 2, 2, true, {}) {}
};
class RimefangWolf0036 final : public Card {
public:
  RimefangWolf0036() : Card(36, "Rimefang Wolf",
                            "Strike: If I struck a unit with 0 Power, kill it.",
                            "",
                            "01FR018", CardRegion::FRELJORD, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_CHALLENGER,
                            3, 3, 2, true, {}) {}
};
class VanguardDefender0037 final : public Card {
public:
  VanguardDefender0037() : Card(37, "Vanguard Defender",
                                "",
                                "",
                                "01DE020", CardRegion::DEMACIA, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                                K_TOUGH,
                                2, 2, 2, true, {}) {}
};
class Battlesmith0038 final : public Card {
public:
  Battlesmith0038() : Card(38, "Battlesmith",
                           "When you summon an Elite, grant it +1|+1.",
                           "",
                           "01DE034", CardRegion::DEMACIA, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           2, 2, 2, true, {}) {}
};
class TiannaCrownguard0039 final : public Card {
public:
  TiannaCrownguard0039() : Card(39, "Tianna Crownguard",
                                "When I'm summoned, Rally.",
                                "",
                                "01DE002", CardRegion::DEMACIA, CardRarity::EPIC,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_TOUGH,
                                8, 7, 7, true, {}) {}
};
class ArachnoidHost0040 final : public Card {
public:
  ArachnoidHost0040() : Card(40, "Arachnoid Host",
                             "When I'm summoned, grant other Spider allies +2|+0.",
                             "",
                             "01NX023", CardRegion::NOXUS, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                             K_NONE,
                             5, 5, 3, true, {}) {}
};
class Karma0041 final : public Card {
public:
  Karma0041() : Card(41, "Karma",
                     "When you play a spell, cast it again on the same targets.",
                     "",
                     "01IO041T1", CardRegion::IONIA, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_IMBUE,
                     5, 5, 4, false, {271, 400}) {}
};
class Garen0042 final : public Card {
public:
  Garen0042() : Card(42, "Garen",
                     "Round Start: Rally.",
                     "",
                     "01DE012T1", CardRegion::DEMACIA, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::ELITE,
                     K_REGENERATION,
                     5, 6, 6, false, {415, 144}) {}
};
class StandAlone0043 final : public Card {
public:
  StandAlone0043() : Card(43, "Stand Alone",
                          "If you have exactly 1 ally, grant it +3|+3.",
                          "",
                          "01DE017", CardRegion::DEMACIA, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_BURST,
                          3, 0, 0, true, {}) {}
};
class Jinx0044 final : public Card {
public:
  Jinx0044() : Card(44, "Jinx",
                    "",
                    "Your hand is empty.",
                    "01PZ040", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_QUICK_ATTACK,
                    4, 4, 3, true, {49, 253, 4}) {}
};
class DecisiveManeuver0045 final : public Card {
public:
  DecisiveManeuver0045() : Card(45, "Decisive Maneuver",
                                "Stun an enemy. Give all allies +2|+0 this round.",
                                "",
                                "01NX013", CardRegion::NOXUS, CardRarity::RARE,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_FAST,
                                5, 0, 0, true, {}) {}
};
class Fiora0046 final : public Card {
public:
  Fiora0046() : Card(46, "Fiora",
                     "",
                     "I've killed 2 enemies.",
                     "01DE045", CardRegion::DEMACIA, CardRarity::CHAMPION,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_CHALLENGER,
                     3, 3, 3, true, {183, 373}) {}
};
class PuffcapPeddler0047 final : public Card {
public:
  PuffcapPeddler0047() : Card(47, "Puffcap Peddler",
                              "When you cast a spell, plant 3 Poison Puffcap on random cards in the enemy deck.",
                              "",
                              "01PZ025", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_IMBUE,
                              3, 3, 3, true, {295}) {}
};
class BrightsteelFormation0048 final : public Card {
public:
  BrightsteelFormation0048() : Card(48, "Brightsteel Formation",
                                    "Play or Attack: Give all allies Barrier.",
                                    "",
                                    "01DE052", CardRegion::DEMACIA, CardRarity::EPIC,
                                    CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                    K_BARRIER,
                                    9, 9, 9, true, {}) {}
};
class SuperMegaDeathRocket0049 final : public Card {
public:
  SuperMegaDeathRocket0049() : Card(49, "Super Mega Death Rocket!",
                                    "Deal 4 to the enemy nexus and 1 to all other enemies. Fleeting.",
                                    "",
                                    "01PZ040T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                    K_SLOW | K_FLEETING,
                                    2, 0, 0, false, {253}) {}
};
class Elise0050 final : public Card {
public:
  Elise0050() : Card(50, "Elise",
                     "Attack: Summon an attacking Spiderling.",
                     "Round Start: You have 3+ other Spiders.",
                     "01SI053", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::SPIDER,
                     K_FEARSOME,
                     2, 2, 3, true, {110, 117, 28}) {}
};
class RelentlessPursuit0051 final : public Card {
public:
  RelentlessPursuit0051() : Card(51, "Relentless Pursuit",
                                 "Rally.",
                                 "",
                                 "01DE021", CardRegion::DEMACIA, CardRarity::COMMON,
                                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                 K_FAST,
                                 3, 0, 0, true, {}) {}
};
class MagnumOpus0052 final : public Card {
public:
  MagnumOpus0052() : Card(52, "Magnum Opus",
                          "Obliterate the top 5 cards of your deck to deal 1 to all enemies for each spell obliterated.",
                          "",
                          "01PZ048T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                          CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                          K_SKILL,
                          0, 0, 0, false, {}) {}
};
class ParalyzingBite0053 final : public Card {
public:
  ParalyzingBite0053() : Card(53, "Paralyzing Bite",
                              "Stun an enemy.",
                              "",
                              "01NX046T1", CardRegion::NOXUS, CardRarity::NONE,
                              CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                              K_SKILL,
                              0, 0, 0, false, {}) {}
};
class Transfusion0054 final : public Card {
public:
  Transfusion0054() : Card(54, "Transfusion",
                           "Deal 1 to an ally to give another ally +2|+2 this round.",
                           "",
                           "01NX047", CardRegion::NOXUS, CardRarity::COMMON,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_BURST,
                           2, 0, 0, true, {}) {}
};
class OnslaughtOfShadows0055 final : public Card {
public:
  OnslaughtOfShadows0055() : Card(55, "Onslaught of Shadows",
                                  "Summon 2 Spectral Rider.",
                                  "",
                                  "01SI010", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                  K_SLOW,
                                  2, 0, 0, true, {159}) {}
};
class LegionSaboteur0056 final : public Card {
public:
  LegionSaboteur0056() : Card(56, "Legion Saboteur",
                              "Attack: Deal 1 to the enemy Nexus.",
                              "",
                              "01NX040", CardRegion::NOXUS, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              1, 2, 1, true, {149}) {}

  void onDeclAttack(Action &action) const override;
};
class Hecarim0057 final : public Card {
public:
  Hecarim0057() : Card(57, "Hecarim",
                       "Ephemeral allies have +3|+0.\nAttack: Summon 2 attacking Spectral Rider.",
                       "",
                       "01SI042T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                       CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                       K_OVERWHELM,
                       6, 5, 6, false, {363, 245, 159}) {}
};
class ScrapScuttler0058 final : public Card {
public:
  ScrapScuttler0058() : Card(58, "Scrap Scuttler",
                             "",
                             "",
                             "01PZ032", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             1, 1, 1, false, {}) {}
};
class Zed0059 final : public Card {
public:
  Zed0059() : Card(59, "Zed",
                   "Attack: Create an attacking Living Shadow with my stats and keywords.",
                   "",
                   "01IO009T2", CardRegion::IONIA, CardRarity::NONE,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_QUICK_ATTACK,
                   3, 4, 3, false, {287, 257, 244}) {}
};
class Vilemaw0060 final : public Card {
public:
  Vilemaw0060() : Card(60, "Vilemaw",
                       "",
                       "",
                       "01SI027T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                       K_FEARSOME,
                       3, 6, 6, false, {}) {}
};
class GreengladeElder0061 final : public Card {
public:
  GreengladeElder0061() : Card(61, "Greenglade Elder",
                               "When I'm summoned, grant allies in hand +1|+1.",
                               "",
                               "01IO014", CardRegion::IONIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               3, 1, 1, true, {}) {}
};
class Darius0062 final : public Card {
public:
  Darius0062() : Card(62, "Darius",
                      "",
                      "",
                      "01NX038T2", CardRegion::NOXUS, CardRarity::NONE,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_OVERWHELM,
                      6, 10, 5, false, {34, 140}) {}
};
class LuciansRelentlessPursuit0063 final : public Card {
public:
  LuciansRelentlessPursuit0063() : Card(63, "Lucian's Relentless Pursuit",
                                        "Rally.\nShuffle a Lucian into your deck.",
                                        "",
                                        "01DE022T2", CardRegion::DEMACIA, CardRarity::NONE,
                                        CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                        K_FAST,
                                        3, 0, 0, false, {7, 142}) {}
};
class JuryRig0064 final : public Card {
public:
  JuryRig0064() : Card(64, "Jury-Rig",
                       "When cast or discarded, summon a Scrap Scuttler.",
                       "",
                       "01PZ028", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_BURST,
                       1, 0, 0, true, {58}) {}
};
class Detain0065 final : public Card {
public:
  Detain0065() : Card(65, "Detain",
                      "An ally Captures a unit.",
                      "",
                      "01DE025", CardRegion::DEMACIA, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_FAST,
                      5, 0, 0, true, {}) {}
};
class AvarosanMarksman0066 final : public Card {
public:
  AvarosanMarksman0066() : Card(66, "Avarosan Marksman",
                                "Play: Deal 1 to an enemy unit.",
                                "",
                                "01FR036", CardRegion::FRELJORD, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                3, 3, 1, true, {341}) {}
};
class NimblePoro0067 final : public Card {
public:
  NimblePoro0067() : Card(67, "Nimble Poro",
                          "",
                          "",
                          "01IO005", CardRegion::IONIA, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                          K_QUICK_ATTACK,
                          1, 1, 1, true, {}) {}
};
class ScarthaneSteffen0068 final : public Card {
public:
  ScarthaneSteffen0068() : Card(68, "Scarthane Steffen",
                                "When I survive damage, grant me +3|+0.",
                                "",
                                "01FR045", CardRegion::FRELJORD, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                3, 2, 4, true, {}) {}
};
class NavoriConspirator0069 final : public Card {
public:
  NavoriConspirator0069() : Card(69, "Navori Conspirator",
                                 "To play me, Recall an ally.",
                                 "",
                                 "01IO044", CardRegion::IONIA, CardRarity::COMMON,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_ELUSIVE,
                                 2, 2, 2, true, {}) {}
};
class JubilantPoro0070 final : public Card {
public:
  JubilantPoro0070() : Card(70, "Jubilant Poro",
                            "When I'm summoned, create in hand another random 1 cost Poro from any region.",
                            "",
                            "01FR008T1", CardRegion::FRELJORD, CardRarity::NONE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                            K_NONE,
                            1, 1, 1, false, {270}) {}
};
class Shatter0071 final : public Card {
public:
  Shatter0071() : Card(71, "Shatter",
                       "Deal 4 to an enemy unit if it has 0 Power. Otherwise, Frostbite it.",
                       "",
                       "01FR055", CardRegion::FRELJORD, CardRarity::COMMON,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_SLOW,
                       2, 0, 0, true, {}) {}
};
class CrystalArrow0072 final : public Card {
public:
  CrystalArrow0072() : Card(72, "Crystal Arrow",
                            "Frostbite an enemy and all other enemies with 3 or less Health. Draw 1.",
                            "",
                            "01FR038T3", CardRegion::FRELJORD, CardRarity::NONE,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_SLOW,
                            2, 0, 0, false, {}) {}
};
class ArachnoidSentry0073 final : public Card {
public:
  ArachnoidSentry0073() : Card(73, "Arachnoid Sentry",
                               "Play: Stun an enemy.",
                               "",
                               "01NX046", CardRegion::NOXUS, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                               K_NONE,
                               3, 3, 2, true, {53}) {}
};
class RisingSpellForce0074 final : public Card {
public:
  RisingSpellForce0074() : Card(74, "Rising Spell Force",
                                "Give an ally +4|+0 and Quick Attack this round.",
                                "",
                                "01PZ050", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_BURST,
                                3, 0, 0, true, {}) {}
};
class Mk3FloorBGone0075 final : public Card {
public:
  Mk3FloorBGone0075() : Card(75, "Mk3: Floor-B-Gone",
                             "",
                             "",
                             "01PZ056T6", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                             K_ELUSIVE,
                             3, 3, 1, false, {}) {}
};
class JeweledProtector0076 final : public Card {
public:
  JeweledProtector0076() : Card(76, "Jeweled Protector",
                                "Play: Grant an ally in hand +3|+3.",
                                "",
                                "01IO023", CardRegion::IONIA, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                5, 4, 4, true, {}) {}
};
class CursedKeeper0077 final : public Card {
public:
  CursedKeeper0077() : Card(77, "Cursed Keeper",
                            "Last Breath: Summon an Escaped Abomination.",
                            "",
                            "01SI048", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_CANT_BLOCK | K_LAST_BREATH,
                            2, 1, 1, true, {136}) {}
};
class Undermine0078 final : public Card {
public:
  Undermine0078() : Card(78, "Undermine",
                         "Deal 2 to the enemy Nexus.",
                         "",
                         "01PZ054T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                         CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                         K_SKILL,
                         0, 0, 0, false, {}) {}
};
class Impersonate0079 final : public Card {
public:
  Impersonate0079() : Card(79, "Impersonate",
                           "Pick a follower. Transform me into an exact copy of it.",
                           "",
                           "01PZ030T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                           CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                           K_SKILL,
                           0, 0, 0, false, {}) {}
};
class BrothersBond0080 final : public Card {
public:
  BrothersBond0080() : Card(80, "Brothers' Bond",
                            "Grant two allies +2|+0.",
                            "",
                            "01NX025", CardRegion::NOXUS, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_BURST,
                            2, 0, 0, true, {}) {}

  void onCast(Action &action) const override;
};
class HouseSpider0081 final : public Card {
public:
  HouseSpider0081() : Card(81, "House Spider",
                           "When I'm summoned, summon a Spiderling.",
                           "",
                           "01NX055", CardRegion::NOXUS, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                           K_NONE,
                           2, 2, 2, true, {110}) {}
};
class Judgment0082 final : public Card {
public:
  Judgment0082() : Card(82, "Judgment",
                        "A battling ally strikes all battling enemies.",
                        "",
                        "01DE007", CardRegion::DEMACIA, CardRarity::EPIC,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_FAST,
                        8, 0, 0, true, {}) {}
};
class UsedCaskSalesman0083 final : public Card {
public:
  UsedCaskSalesman0083() : Card(83, "Used Cask Salesman",
                                "When I'm summoned, summon 2 Caustic Cask.",
                                "",
                                "01PZ017", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                3, 3, 2, true, {396}) {}
};
class SumpDredger0084 final : public Card {
public:
  SumpDredger0084() : Card(84, "Sump Dredger",
                           "To play me, discard 1.",
                           "",
                           "01PZ038", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           2, 4, 3, true, {}) {}
};
class Mk2EvolutionTurret0085 final : public Card {
public:
  Mk2EvolutionTurret0085() : Card(85, "Mk2: Evolution Turret",
                                  "",
                                  "",
                                  "01PZ056T7", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                                  K_TOUGH,
                                  2, 2, 1, false, {}) {}
};
class ScribeOfSorrows0086 final : public Card {
public:
  ScribeOfSorrows0086() : Card(86, "Scribe of Sorrows",
                               "When I'm summoned, create a copy in hand of an ally that died this game.",
                               "",
                               "01SI018", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               3, 2, 3, true, {}) {}
};
class TeemosMushroomCloud0087 final : public Card {
public:
  TeemosMushroomCloud0087() : Card(87,
                                   "Teemo's Mushroom Cloud",
                                   "Plant 5 Poison Puffcap on random cards in the enemy deck.\nShuffle a Teemo into your deck.",
                                   "",
                                   "01PZ008T1",
                                   CardRegion::PILTOVER_N_ZAUN,
                                   CardRarity::NONE,
                                   CardType::SPELL,
                                   CardSupType::CHAMPION,
                                   CardSubType::NONE,
                                   K_BURST,
                                   1,
                                   0,
                                   0,
                                   false,
                                   {295, 207, 6}) {}
};
class Kalista0088 final : public Card {
public:
  Kalista0088() : Card(88,
                       "Kalista",
                       "The first time I attack each round, revive an attacking Ephemeral copy of the Strongest dead allied follower. This round, we're bonded and it takes damage for me.",
                       "",
                       "01SI030T2",
                       CardRegion::SHADOW_ISLES,
                       CardRarity::NONE,
                       CardType::UNIT,
                       CardSupType::CHAMPION,
                       CardSubType::NONE,
                       K_FEARSOME,
                       3,
                       5,
                       4,
                       false,
                       {91, 195}) {}
  void onDeclAttack(Action &action) const;
};
class Entreat0089 final : public Card {
public:
  Entreat0089() : Card(89, "Entreat",
                       "Draw a Champion.",
                       "",
                       "01FR029", CardRegion::FRELJORD, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_BURST,
                       2, 0, 0, true, {}) {}
};
class NightHarvest0090 final : public Card {
public:
  NightHarvest0090() : Card(90, "Night Harvest",
                            "Kill the 2 Weakest enemies if an ally died this round.",
                            "",
                            "01SI035T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                            CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                            K_SKILL,
                            0, 0, 0, false, {}) {}
};
class Kalista0091 final : public Card {
public:
  Kalista0091() : Card(91, "Kalista",
                       "",
                       "I've seen 4+ allies die.",
                       "01SI030", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
                       CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                       K_FEARSOME,
                       3, 4, 3, true, {88, 195}) {}
  void onSummon(Action &action) const;
  void onDie(Action &action) const;
};
class SownSeeds0092 final : public Card {
public:
  SownSeeds0092() : Card(92, "Sown Seeds",
                         "Grant allies in hand +1|+0.",
                         "",
                         "01IO029", CardRegion::IONIA, CardRarity::RARE,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_BURST,
                         2, 0, 0, true, {}) {}
};
class Ezreal0093 final : public Card {
public:
  Ezreal0093() : Card(93,
                      "Ezreal",
                      "Nexus Strike: Create a Fleeting Mystic Shot in hand.\nWhen you cast a spell, deal 2 to the enemy Nexus.",
                      "",
                      "01PZ036T1",
                      CardRegion::PILTOVER_N_ZAUN,
                      CardRarity::NONE,
                      CardType::UNIT,
                      CardSupType::CHAMPION,
                      CardSubType::NONE,
                      K_ELUSIVE | K_IMBUE,
                      3,
                      2,
                      4,
                      false,
                      {131, 134, 354}) {}
};
class UnscarredReaver0094 final : public Card {
public:
  UnscarredReaver0094() : Card(94, "Unscarred Reaver",
                               "When I survive damage, grant me +3|+0.",
                               "",
                               "01FR035", CardRegion::FRELJORD, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               1, 0, 3, true, {}) {}
};
class DeathMark0095 final : public Card {
public:
  DeathMark0095() : Card(95, "Death Mark",
                         "Remove Ephemeral from an ally to grant it to an enemy.",
                         "",
                         "01IO003", CardRegion::IONIA, CardRarity::RARE,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         3, 0, 0, true, {}) {}
};
class JaeMedarda0096 final : public Card {
public:
  JaeMedarda0096() : Card(96, "Jae Medarda",
                          "When I'm targeted, draw 1.",
                          "",
                          "01PZ035", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_ELUSIVE,
                          8, 6, 6, true, {}) {}
};
class ShadyCharacter0097 final : public Card {
public:
  ShadyCharacter0097() : Card(97, "Shady Character",
                              "Play: Pick a follower. Transform me into an exact copy of it.",
                              "",
                              "01PZ030", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              4, 1, 1, true, {79}) {}
};
class ShadowFlare0098 final : public Card {
public:
  ShadowFlare0098() : Card(98, "Shadow Flare",
                           "Grant ALL battling followers Ephemeral.",
                           "",
                           "01IO047", CardRegion::IONIA, CardRarity::EPIC,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_FAST,
                           6, 0, 0, true, {}) {}
};
class CorinaVeraza0099 final : public Card {
public:
  CorinaVeraza0099() : Card(99,
                            "Corina Veraza",
                            "Play: Obliterate the top 5 cards of your deck to deal 1 to all enemies for each spell obliterated.",
                            "",
                            "01PZ048",
                            CardRegion::PILTOVER_N_ZAUN,
                            CardRarity::EPIC,
                            CardType::UNIT,
                            CardSupType::NONE,
                            CardSubType::NONE,
                            K_NONE,
                            9,
                            6,
                            6,
                            true,
                            {52}) {}
};
class CatalystOfAeons0100 final : public Card {
public:
  CatalystOfAeons0100() : Card(100, "Catalyst of Aeons",
                               "Get an empty mana gem and heal your Nexus 3.",
                               "",
                               "01FR012", CardRegion::FRELJORD, CardRarity::COMMON,
                               CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                               K_BURST,
                               5, 0, 0, true, {}) {}
};
class DravensWhirlingDeath0101 final : public Card {
public:
  DravensWhirlingDeath0101() : Card(101, "Draven's Whirling Death",
                                    "A battling ally strikes a battling enemy.\nShuffle a Draven into your deck.",
                                    "",
                                    "01NX020T2", CardRegion::NOXUS, CardRarity::NONE,
                                    CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                    K_FAST,
                                    3, 0, 0, false, {130, 1}) {}
};
class CrimsonDisciple0102 final : public Card {
public:
  CrimsonDisciple0102() : Card(102, "Crimson Disciple",
                               "When I survive damage, deal 2 to the enemy Nexus.",
                               "",
                               "01NX030", CardRegion::NOXUS, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               2, 2, 3, true, {}) {}
};
class EnragedYeti0103 final : public Card {
public:
  EnragedYeti0103() : Card(103, "Enraged Yeti",
                           "",
                           "",
                           "01FR028", CardRegion::FRELJORD, CardRarity::NONE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
                           K_NONE,
                           1, 5, 5, false, {}) {}
};
class MushroomCloud0104 final : public Card {
public:
  MushroomCloud0104() : Card(104, "Mushroom Cloud",
                             "Plant 5 Poison Puffcap on random cards in the enemy deck.",
                             "",
                             "01PZ010", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_BURST,
                             1, 0, 0, true, {295}) {}
};
class ArenaBattlecaster0105 final : public Card {
public:
  ArenaBattlecaster0105() : Card(105, "Arena Battlecaster",
                                 "Attack: Give other battling allies +1|+0 this round.",
                                 "",
                                 "01NX007", CardRegion::NOXUS, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_NONE,
                                 2, 2, 2, true, {}) {}
};
class ZauniteUrchin0106 final : public Card {
public:
  ZauniteUrchin0106() : Card(106, "Zaunite Urchin",
                             "To play me, discard 1.\nLast Breath: Draw 1.",
                             "",
                             "01PZ045", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_LAST_BREATH,
                             1, 2, 1, true, {}) {}
};
class InspiringMentor0107 final : public Card {
public:
  InspiringMentor0107() : Card(107, "Inspiring Mentor",
                               "Play: Grant an ally in hand +1|+0.",
                               "",
                               "01IO026", CardRegion::IONIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               1, 1, 2, true, {}) {}
};
class RecklessResearch0108 final : public Card {
public:
  RecklessResearch0108() : Card(108, "Reckless Research",
                                "Discard your hand. Draw 3. Deal 3 to an enemy unit.",
                                "",
                                "01PZ013T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                                K_SKILL,
                                0, 0, 0, false, {}) {}
};
class BackAlleyBarkeep0109 final : public Card {
public:
  BackAlleyBarkeep0109() : Card(109,
                                "Back Alley Barkeep",
                                "When I'm summoned, create a random card in hand for each Back Alley Barkeep you've summoned this game. ",
                                "",
                                "01PZ002",
                                CardRegion::PILTOVER_N_ZAUN,
                                CardRarity::COMMON,
                                CardType::UNIT,
                                CardSupType::NONE,
                                CardSubType::NONE,
                                K_NONE,
                                4,
                                3,
                                2,
                                true,
                                {109}) {}
};
class Spiderling0110 final : public Card {
public:
  Spiderling0110() : Card(110, "Spiderling",
                          "",
                          "",
                          "01SI002", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                          K_NONE,
                          1, 1, 1, false, {}) {}
};
class Scuttlegeist0111 final : public Card {
public:
  Scuttlegeist0111() : Card(111, "Scuttlegeist",
                            "Reduce my cost by 1 for each ally that died this game.",
                            "",
                            "01SI005", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_FEARSOME,
                            10, 5, 5, true, {}) {}
};
class Ashe0112 final : public Card {
public:
  Ashe0112() : Card(112, "Ashe",
                    "Attack: Frostbite the Strongest enemy.",
                    "You Frostbite 5+ enemies. When I level up, create a Crystal Arrow on top of deck.",
                    "01FR038", CardRegion::FRELJORD, CardRarity::CHAMPION,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_NONE,
                    4, 5, 3, true, {231, 311, 72}) {}
};
class LaurentDuelist0113 final : public Card {
public:
  LaurentDuelist0113() : Card(113, "Laurent Duelist",
                              "Play: Give an ally Challenger this round.",
                              "",
                              "01DE055", CardRegion::DEMACIA, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              3, 3, 2, true, {}) {}
};
class TrueshotBarrage0114 final : public Card {
public:
  TrueshotBarrage0114() : Card(114, "Trueshot Barrage",
                               "Deal 3 to an enemy or the enemy Nexus, 2 to another, and 1 to another.",
                               "",
                               "01PZ004", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                               CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                               K_SLOW,
                               7, 0, 0, true, {}) {}
};
class MageseekerInciter0115 final : public Card {
public:
  MageseekerInciter0115() : Card(115, "Mageseeker Inciter",
                                 "Grant me +2|+2 once you've cast a 6+ cost spell this game.",
                                 "",
                                 "01DE048", CardRegion::DEMACIA, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_NONE,
                                 4, 4, 3, true, {}) {}
};
class DawnAndDusk0116 final : public Card {
public:
  DawnAndDusk0116() : Card(116, "Dawn and Dusk",
                           "Summon 2 exact copies of an ally. They're Ephemeral.",
                           "",
                           "01IO024", CardRegion::IONIA, CardRarity::RARE,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_SLOW,
                           6, 0, 0, true, {}) {}
};
class SpiderQueenElise0117 final : public Card {
public:
  SpiderQueenElise0117() : Card(117, "Spider Queen Elise",
                                "Other Spider allies have Challenger and Fearsome.",
                                "",
                                "01SI053T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                                CardType::UNIT, CardSupType::CHAMPION, CardSubType::SPIDER,
                                K_FEARSOME | K_CHALLENGER,
                                2, 4, 3, false, {28, 50}) {}
};
class VanguardBannerman0118 final : public Card {
public:
  VanguardBannerman0118() : Card(118, "Vanguard Bannerman",
                                 "Allegiance: Grant all allies +1|+1.",
                                 "",
                                 "01DE001", CardRegion::DEMACIA, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                                 K_NONE,
                                 4, 3, 3, true, {}) {}
};
class DaringPoro0119 final : public Card {
public:
  DaringPoro0119() : Card(119, "Daring Poro",
                          "",
                          "",
                          "01PZ020", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                          K_ELUSIVE,
                          1, 1, 1, true, {}) {}
};
class LegionMarauder0120 final : public Card {
public:
  LegionMarauder0120() : Card(120, "Legion Marauder",
                              "Attack: Grant allied Legion Marauders everywhere +1|+1.",
                              "",
                              "01NX021", CardRegion::NOXUS, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              3, 3, 2, true, {}) {}
};
class Avalanche0121 final : public Card {
public:
  Avalanche0121() : Card(121, "Avalanche",
                         "Deal 2 to ALL units.",
                         "",
                         "01FR020", CardRegion::FRELJORD, CardRarity::RARE,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_SLOW,
                         4, 0, 0, true, {}) {}
};
class CounterfeitCopies0122 final : public Card {
public:
  CounterfeitCopies0122() : Card(122, "Counterfeit Copies",
                                 "Pick a card in hand. Shuffle 4 exact copies of it into your deck.",
                                 "",
                                 "01PZ046", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                 K_BURST,
                                 1, 0, 0, true, {}) {}
};
class ScaledSnapper0123 final : public Card {
public:
  ScaledSnapper0123() : Card(123, "Scaled Snapper",
                             "Play: Grant me +3|+0 or +0|+3.",
                             "",
                             "01IO028", CardRegion::IONIA, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             3, 2, 2, true, {}) {}
};
class YetiYearling0124 final : public Card {
public:
  YetiYearling0124() : Card(124, "Yeti Yearling",
                            "Last Breath: Shuffle 2 Enraged Yeti into our deck.",
                            "",
                            "01FR014", CardRegion::FRELJORD, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
                            K_LAST_BREATH,
                            1, 1, 2, true, {103}) {}
};
class SinisterPoro0125 final : public Card {
public:
  SinisterPoro0125() : Card(125, "Sinister Poro",
                            "",
                            "",
                            "01SI037", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                            K_FEARSOME,
                            1, 1, 1, true, {}) {}
};
class CrowdFavorite0126 final : public Card {
public:
  CrowdFavorite0126() : Card(126, "Crowd Favorite",
                             "When I'm summoned, grant me +1|+1 for each other ally you have.",
                             "",
                             "01NX009", CardRegion::NOXUS, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_OVERWHELM,
                             4, 2, 1, true, {}) {}
};
class ShadowAssassin0127 final : public Card {
public:
  ShadowAssassin0127() : Card(127, "Shadow Assassin",
                              "When I'm summoned, draw 1.",
                              "",
                              "01IO057", CardRegion::IONIA, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_ELUSIVE,
                              3, 2, 2, true, {}) {}
};
class ScaledSnapper0128 final : public Card {
public:
  ScaledSnapper0128() : Card(128, "Scaled Snapper",
                             "",
                             "",
                             "01IO028T2", CardRegion::IONIA, CardRarity::NONE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             3, 5, 2, false, {}) {}
};
class BoomcrewRookie0129 final : public Card {
public:
  BoomcrewRookie0129() : Card(129, "Boomcrew Rookie",
                              "Attack: Deal 2 to the enemy Nexus.",
                              "",
                              "01PZ054", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              2, 1, 4, true, {78}) {}
};
class Draven0130 final : public Card {
public:
  Draven0130() : Card(130, "Draven",
                      "Play or Strike: Create a Spinning Axe in hand.",
                      "I've struck twice with a Spinning Axe.",
                      "01NX020", CardRegion::NOXUS, CardRarity::CHAMPION,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_QUICK_ATTACK,
                      3, 3, 3, true, {416, 1, 101}) {}
};
class MysticShot0131 final : public Card {
public:
  MysticShot0131() : Card(131, "Mystic Shot",
                          "Deal 2 to anything.",
                          "",
                          "01PZ052", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_FAST,
                          2, 0, 0, true, {}) {}
};
class AniviasHarshWinds0132 final : public Card {
public:
  AniviasHarshWinds0132() : Card(132, "Anivia's Harsh Winds",
                                 "Frostbite 2 enemies.\nShuffle an Anivia into your deck.",
                                 "",
                                 "01FR024T1", CardRegion::FRELJORD, CardRarity::NONE,
                                 CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                 K_BURST,
                                 6, 0, 0, false, {369, 327, 385}) {}
};
class WarChefs0133 final : public Card {
public:
  WarChefs0133() : Card(133, "War Chefs",
                        "Support: Give my supported ally +1|+1 this round.",
                        "",
                        "01DE043", CardRegion::DEMACIA, CardRarity::COMMON,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        2, 2, 3, true, {}) {}
};
class Ezreal0134 final : public Card {
public:
  Ezreal0134() : Card(134, "Ezreal",
                      "Nexus Strike: Create a Fleeting Mystic Shot in hand.",
                      "You've targeted enemy units 8+ times.",
                      "01PZ036", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_ELUSIVE,
                      3, 1, 3, true, {131, 93, 354}) {}
};
class ScaledSnapper0135 final : public Card {
public:
  ScaledSnapper0135() : Card(135, "Scaled Snapper",
                             "",
                             "",
                             "01IO028T1", CardRegion::IONIA, CardRarity::NONE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             3, 2, 5, false, {}) {}
};
class EscapedAbomination0136 final : public Card {
public:
  EscapedAbomination0136() : Card(136, "Escaped Abomination",
                                  "",
                                  "",
                                  "01SI048T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_NONE,
                                  2, 4, 4, false, {}) {}
};
class THex0137 final : public Card {
public:
  THex0137() : Card(137, "T-Hex",
                    "",
                    "",
                    "01PZ015", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                    CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                    K_NONE,
                    8, 8, 8, false, {}) {}
};
class Reckoning0138 final : public Card {
public:
  Reckoning0138() : Card(138, "Reckoning",
                         "If you have a 5+ Power ally, kill ALL units with 4 or less Power.",
                         "",
                         "01NX053", CardRegion::NOXUS, CardRarity::EPIC,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_SLOW,
                         6, 0, 0, true, {}) {}
};
class HextechTransmogulator0139 final : public Card {
public:
  HextechTransmogulator0139() : Card(139, "Hextech Transmogulator",
                                     "Transform a follower into another follower.",
                                     "",
                                     "01PZ005", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                     K_FAST,
                                     6, 0, 0, true, {}) {}
};
class DariussDecimate0140 final : public Card {
public:
  DariussDecimate0140() : Card(140, "Darius's Decimate",
                               "Deal 4 to the enemy Nexus.\nShuffle a Darius into your deck.",
                               "",
                               "01NX038T1", CardRegion::NOXUS, CardRarity::NONE,
                               CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                               K_SLOW,
                               5, 0, 0, false, {34, 62}) {}
};
class Thresh0141 final : public Card {
public:
  Thresh0141() : Card(141, "Thresh",
                      "",
                      "I've seen 6+ units die.",
                      "01SI052", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_CHALLENGER,
                      5, 3, 6, true, {412, 169}) {}
};
class Lucian0142 final : public Card {
public:
  Lucian0142() : Card(142, "Lucian",
                      "Each round, the first time an ally dies, Rally.",
                      "",
                      "01DE022T1", CardRegion::DEMACIA, CardRarity::NONE,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_DOUBLE_ATTACK,
                      2, 4, 3, false, {7, 63}) {}
};
class PluckyPoro0143 final : public Card {
public:
  PluckyPoro0143() : Card(143, "Plucky Poro",
                          "",
                          "",
                          "01DE049", CardRegion::DEMACIA, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                          K_TOUGH,
                          1, 1, 1, true, {}) {}
};
class GarensJudgment0144 final : public Card {
public:
  GarensJudgment0144() : Card(144, "Garen's Judgment",
                              "A battling ally strikes all battling enemies.\nShuffle a Garen into your deck.",
                              "",
                              "01DE012T2", CardRegion::DEMACIA, CardRarity::NONE,
                              CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                              K_FAST,
                              8, 0, 0, false, {415, 42}) {}
};
class CommanderLedros0145 final : public Card {
public:
  CommanderLedros0145() : Card(145,
                               "Commander Ledros",
                               "Play: Deal damage to the enemy Nexus equal to half its Health, rounded up.\nLast Breath: Return me to hand.",
                               "",
                               "01SI033",
                               CardRegion::SHADOW_ISLES,
                               CardRarity::EPIC,
                               CardType::UNIT,
                               CardSupType::NONE,
                               CardSubType::NONE,
                               K_FEARSOME | K_LAST_BREATH,
                               9,
                               9,
                               6,
                               true,
                               {281}) {}
};
class MidenstokkeHenchmen0146 final : public Card {
public:
  MidenstokkeHenchmen0146() : Card(146, "Midenstokke Henchmen",
                                   "Nexus Strike: Summon an exact copy of me.",
                                   "",
                                   "01PZ021", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                   CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                   K_NONE,
                                   5, 5, 3, true, {}) {}
};
class TheHarrowing0147 final : public Card {
public:
  TheHarrowing0147() : Card(147, "The Harrowing",
                            "Revive the 6 Strongest allies that died this game and grant them Ephemeral.",
                            "",
                            "01SI003", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_SLOW,
                            10, 0, 0, true, {}) {}
};
class TheUndying0148 final : public Card {
public:
  TheUndying0148() : Card(148, "The Undying",
                          "Last Breath: Revive me next Round Start and grant me +1|+1 for each time I've died. ",
                          "",
                          "01SI041", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_CANT_BLOCK | K_LAST_BREATH,
                          3, 2, 2, true, {}) {}
};
class Sabotage0149 final : public Card {
public:
  Sabotage0149() : Card(149, "Sabotage",
                        "Deal 1 to the enemy Nexus.",
                        "",
                        "01NX040T1", CardRegion::NOXUS, CardRarity::NONE,
                        CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                        K_SKILL,
                        0, 0, 0, false, {}) {}
  void onCast(Action &action) const;
};
class StalkingWolf0150 final : public Card {
public:
  StalkingWolf0150() : Card(150, "Stalking Wolf",
                            "When I'm summoned, the enemy summons a Snow Hare.",
                            "",
                            "01FR049", CardRegion::FRELJORD, CardRarity::COMMON,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_CHALLENGER,
                            2, 3, 2, true, {218}) {}
};
class Shen0151 final : public Card {
public:
  Shen0151() : Card(151, "Shen",
                    "Support: Give my supported ally Barrier.\nWhen an ally gets Barrier, give it +3|+0 this round.",
                    "",
                    "01IO032T1", CardRegion::IONIA, CardRarity::NONE,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_NONE,
                    4, 3, 6, false, {367, 266}) {}
};
class LaurentChevalier0152 final : public Card {
public:
  LaurentChevalier0152() : Card(152, "Laurent Chevalier",
                                "Strike: Create another random Challenger follower in hand.",
                                "",
                                "01DE053", CardRegion::DEMACIA, CardRarity::EPIC,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_CHALLENGER,
                                4, 3, 1, true, {}) {}
};
class AbsorbSoul0153 final : public Card {
public:
  AbsorbSoul0153() : Card(153, "Absorb Soul",
                          "Drain 4 from an ally unit.",
                          "",
                          "01SI045", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_FAST,
                          1, 0, 0, true, {}) {}
};
class AvarosanOutriders0154 final : public Card {
public:
  AvarosanOutriders0154() : Card(154, "Avarosan Outriders",
                                 "Allegiance: Grant the top unit in our deck +3|+3 and Overwhelm.",
                                 "",
                                 "01FR037", CardRegion::FRELJORD, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_OVERWHELM,
                                 4, 3, 3, true, {}) {}
};
class CrawlingSensation0155 final : public Card {
public:
  CrawlingSensation0155() : Card(155, "Crawling Sensation",
                                 "If an ally died this round, summon 2 Spiderling.",
                                 "",
                                 "01SI036", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                 K_SLOW,
                                 1, 0, 0, true, {110}) {}
};
class Braum0156 final : public Card {
public:
  Braum0156() : Card(156, "Braum",
                     "When I survive damage, summon a Mighty Poro.",
                     "",
                     "01FR009T1", CardRegion::FRELJORD, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_CHALLENGER | K_REGENERATION,
                     3, 0, 7, false, {342, 260, 29}) {}
};
class ShadowFiend0157 final : public Card {
public:
  ShadowFiend0157() : Card(157, "Shadow Fiend",
                           "",
                           "",
                           "01IO013", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_EPHEMERAL,
                           1, 4, 3, true, {}) {}
};
class StatikkShock0158 final : public Card {
public:
  StatikkShock0158() : Card(158, "Statikk Shock",
                            "Deal 1 to an enemy or the enemy Nexus, and 1 to another.\nDraw 1.",
                            "",
                            "01PZ031", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_FAST,
                            4, 0, 0, true, {}) {}
};
class SpectralRider0159 final : public Card {
public:
  SpectralRider0159() : Card(159, "Spectral Rider",
                             "",
                             "",
                             "01SI024", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_EPHEMERAL,
                             2, 2, 2, false, {}) {}
};
class TorturedProdigy0160 final : public Card {
public:
  TorturedProdigy0160() : Card(160, "Tortured Prodigy",
                               "When an ally dies, refill your spell mana.",
                               "",
                               "01SI051", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               5, 4, 4, true, {}) {}
};
class AlphaWildclaw0161 final : public Card {
public:
  AlphaWildclaw0161() : Card(161, "Alpha Wildclaw",
                             "",
                             "",
                             "01FR026", CardRegion::FRELJORD, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_OVERWHELM,
                             6, 7, 6, true, {}) {}
};
class IntimidatingRoar0162 final : public Card {
public:
  IntimidatingRoar0162() : Card(162, "Intimidating Roar",
                                "Stun all enemies with 4 or less Power.",
                                "",
                                "01NX054", CardRegion::NOXUS, CardRarity::RARE,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_SLOW,
                                5, 0, 0, true, {}) {}
};
class CrimsonPact0163 final : public Card {
public:
  CrimsonPact0163() : Card(163, "Crimson Pact",
                           "For each attacking ally other than Vladimir, deal 1 to it and 1 to the enemy Nexus.",
                           "",
                           "01NX006T2", CardRegion::NOXUS, CardRarity::NONE,
                           CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                           K_SKILL,
                           0, 0, 0, false, {352}) {}
};
class GoldenCrushbot0164 final : public Card {
public:
  GoldenCrushbot0164() : Card(164, "Golden Crushbot",
                              "",
                              "",
                              "01PZ059", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              3, 2, 5, true, {}) {}
};
class LegionVeteran0165 final : public Card {
public:
  LegionVeteran0165() : Card(165, "Legion Veteran",
                             "When another ally survives damage, grant it +1|+0.",
                             "",
                             "01NX029", CardRegion::NOXUS, CardRarity::EPIC,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             4, 4, 5, true, {}) {}
};
class BrittleSteel0166 final : public Card {
public:
  BrittleSteel0166() : Card(166, "Brittle Steel",
                            "Frostbite an enemy with 3 or less Health.",
                            "",
                            "01FR030", CardRegion::FRELJORD, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_BURST,
                            1, 0, 0, true, {}) {}
};
class ShirazaTheBlade0167 final : public Card {
public:
  ShirazaTheBlade0167() : Card(167, "Shiraza the Blade",
                               "I deal double damage to the Nexus.",
                               "",
                               "01NX014", CardRegion::NOXUS, CardRarity::EPIC,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               4, 3, 3, true, {}) {}
};
class ObliviousIslander0168 final : public Card {
public:
  ObliviousIslander0168() : Card(168, "Oblivious Islander",
                                 "Play: Grant an ally in hand Ephemeral and reduce its cost by 1.",
                                 "",
                                 "01SI012", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_NONE,
                                 1, 2, 1, true, {}) {}
};
class ThreshsTheBox0169 final : public Card {
public:
  ThreshsTheBox0169() : Card(169, "Thresh's The Box",
                             "Deal 3 to each enemy that was summoned this round.\nShuffle a Thresh into deck.",
                             "",
                             "01SI052T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                             CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                             K_FAST,
                             4, 0, 0, false, {141, 412}) {}
};
class Rummage0170 final : public Card {
public:
  Rummage0170() : Card(170, "Rummage",
                       "Discard 2 to draw 2.\nIf you have exactly 1 other card in hand, discard 1 to draw 1.",
                       "",
                       "01PZ001", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_BURST,
                       1, 0, 0, true, {}) {}
};
class Katarina0171 final : public Card {
public:
  Katarina0171() : Card(171, "Katarina",
                        "Play: Rally.\nStrike: Recall me.",
                        "",
                        "01NX042T2", CardRegion::NOXUS, CardRarity::NONE,
                        CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                        K_QUICK_ATTACK,
                        4, 4, 3, false, {317, 258}) {}
};
class ScarmotherVrynna0172 final : public Card {
public:
  ScarmotherVrynna0172() : Card(172, "Scarmother Vrynna",
                                "When I survive damage, grant me +3|+0.",
                                "",
                                "01FR013", CardRegion::FRELJORD, CardRarity::EPIC,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_OVERWHELM,
                                6, 3, 8, true, {}) {}
};
class ScrapdashAssembly0173 final : public Card {
public:
  ScrapdashAssembly0173() : Card(173, "Scrapdash Assembly",
                                 "Summon 2 Scrap Scuttler.",
                                 "",
                                 "01PZ057", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                 K_SLOW,
                                 2, 0, 0, true, {58}) {}
};
class IronHarbinger0174 final : public Card {
public:
  IronHarbinger0174() : Card(174, "Iron Harbinger",
                             "Attack: Grant me +1|+0 for each Ephemeral ally in play.",
                             "",
                             "01SI031", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_FEARSOME,
                             3, 2, 4, true, {}) {}
};
class BlackSpear0175 final : public Card {
public:
  BlackSpear0175() : Card(175, "Black Spear",
                          "If an ally died this round, deal 3 to a unit.",
                          "",
                          "01SI034", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_FAST,
                          3, 0, 0, true, {}) {}
};
class HaplessAristocrat0176 final : public Card {
public:
  HaplessAristocrat0176() : Card(176, "Hapless Aristocrat",
                                 "Last Breath: Summon a Spiderling.",
                                 "",
                                 "01SI043", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_LAST_BREATH,
                                 1, 1, 1, true, {110}) {}
};
class Rush0177 final : public Card {
public:
  Rush0177() : Card(177, "Rush",
                    "Give an ally +1|+0 and Quick Attack this round.",
                    "",
                    "01IO018", CardRegion::IONIA, CardRarity::COMMON,
                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                    K_BURST,
                    1, 0, 0, true, {}) {}
};
class HeimerdingersProgressDay0178 final : public Card {
public:
  HeimerdingersProgressDay0178() : Card(178,
                                        "Heimerdinger's Progress Day!",
                                        "Draw 3, then reduce those cards' costs by 1.\nShuffle a Heimerdinger into your deck.",
                                        "",
                                        "01PZ056T3",
                                        CardRegion::PILTOVER_N_ZAUN,
                                        CardRarity::NONE,
                                        CardType::SPELL,
                                        CardSupType::CHAMPION,
                                        CardSubType::NONE,
                                        K_BURST,
                                        8,
                                        0,
                                        0,
                                        false,
                                        {9, 16}) {}
};
class WintersBreath0179 final : public Card {
public:
  WintersBreath0179() : Card(179, "Winter's Breath",
                             "Kill all enemies with 0 Power, then Frostbite all enemies.",
                             "",
                             "01FR019", CardRegion::FRELJORD, CardRarity::EPIC,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_SLOW,
                             7, 0, 0, true, {}) {}
};
class Remembrance0180 final : public Card {
public:
  Remembrance0180() : Card(180,
                           "Remembrance",
                           "Costs 1 less for each ally that died this round. Summon a random 5 cost follower from Demacia.",
                           "",
                           "01DE033",
                           CardRegion::DEMACIA,
                           CardRarity::RARE,
                           CardType::SPELL,
                           CardSupType::NONE,
                           CardSubType::NONE,
                           K_SLOW,
                           6,
                           0,
                           0,
                           true,
                           {}) {}
};
class StirredSpirits0181 final : public Card {
public:
  StirredSpirits0181() : Card(181, "Stirred Spirits",
                              "Support: Grant my supported ally +2|+0 and Ephemeral.",
                              "",
                              "01SI009", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              2, 3, 2, true, {}) {}
};
class ThermogenicBeam0182 final : public Card {
public:
  ThermogenicBeam0182() : Card(182, "Thermogenic Beam",
                               "To play, spend all your mana.\nDeal that much to a unit.",
                               "",
                               "01PZ027", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                               CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                               K_SLOW,
                               0, 0, 0, true, {}) {}
};
class Fiora0183 final : public Card {
public:
  Fiora0183() : Card(183, "Fiora",
                     "When I've killed 4 enemies and survived, you win the game. ",
                     "",
                     "01DE045T1", CardRegion::DEMACIA, CardRarity::NONE,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_CHALLENGER,
                     3, 4, 4, false, {373, 46}) {}
};
class AvarosanHearthguard0184 final : public Card {
public:
  AvarosanHearthguard0184() : Card(184, "Avarosan Hearthguard",
                                   "When I'm summoned, grant allies in your deck +1|+1.",
                                   "",
                                   "01FR041", CardRegion::FRELJORD, CardRarity::EPIC,
                                   CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                   K_NONE,
                                   5, 5, 5, true, {}) {}
};
class CaptainFarron0185 final : public Card {
public:
  CaptainFarron0185() : Card(185, "Captain Farron",
                             "Play: Replace your hand with Decimates.",
                             "",
                             "01NX051", CardRegion::NOXUS, CardRarity::EPIC,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_OVERWHELM,
                             8, 8, 8, true, {197}) {}
};
class PoroHerder0186 final : public Card {
public:
  PoroHerder0186() : Card(186, "Poro Herder",
                          "When I'm summoned, draw 2 Poros if you have a Poro ally.",
                          "",
                          "01FR025", CardRegion::FRELJORD, CardRarity::RARE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          4, 3, 4, true, {}) {}
};
class Lux0187 final : public Card {
public:
  Lux0187() : Card(187, "Lux",
                   "When I see you spend 6+ mana on spells, create a Final Spark in hand. ",
                   "",
                   "01DE042T2", CardRegion::DEMACIA, CardRarity::NONE,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_BARRIER,
                   6, 5, 6, false, {372, 18, 221}) {}
};
class LegionRearguard0188 final : public Card {
public:
  LegionRearguard0188() : Card(188, "Legion Rearguard",
                               "",
                               "",
                               "01NX012", CardRegion::NOXUS, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_CANT_BLOCK,
                               1, 3, 2, true, {}) {}
};
class MageseekerConservator0189 final : public Card {
public:
  MageseekerConservator0189() : Card(189, "Mageseeker Conservator",
                                     "Last Breath: Create in hand a 6+ cost spell from a region other than Demacia.",
                                     "",
                                     "01DE024", CardRegion::DEMACIA, CardRarity::COMMON,
                                     CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                     K_LAST_BREATH,
                                     1, 1, 1, true, {}) {}
};
class UnleashedSpirit0190 final : public Card {
public:
  UnleashedSpirit0190() : Card(190, "Unleashed Spirit",
                               "",
                               "",
                               "01SI007T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_EPHEMERAL,
                               1, 1, 1, false, {}) {}
};
class VanguardFirstblade0191 final : public Card {
public:
  VanguardFirstblade0191() : Card(191, "Vanguard Firstblade",
                                  "Attack: Grant me +2|+2.",
                                  "",
                                  "01DE056", CardRegion::DEMACIA, CardRarity::COMMON,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                                  K_NONE,
                                  4, 2, 2, true, {}) {}
};
class BladesEdge0192 final : public Card {
public:
  BladesEdge0192() : Card(192, "Blade's Edge",
                          "Deal 1 to anything.",
                          "",
                          "01NX043", CardRegion::NOXUS, CardRarity::COMMON,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_FAST,
                          1, 0, 0, true, {}) {}

  bool castable(const Action &action) const override;
  void onCast(Action &action) const override;
};
class SilverwingScout0193 final : public Card {
public:
  SilverwingScout0193() : Card(193, "Silverwing Scout",
                               "",
                               "",
                               "01DE030", CardRegion::DEMACIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_ELUSIVE | K_TOUGH,
                               4, 2, 3, true, {}) {}
};
class StaggeringStrikes0194 final : public Card {
public:
  StaggeringStrikes0194() : Card(194, "Staggering Strikes",
                                 "Stun 2 enemies.",
                                 "",
                                 "01IO056T1", CardRegion::IONIA, CardRarity::NONE,
                                 CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                                 K_SKILL,
                                 0, 0, 0, false, {}) {}
};
class KalistasBlackSpear0195 final : public Card {
public:
  KalistasBlackSpear0195() : Card(195, "Kalista's Black Spear",
                                  "If an ally died this round, deal 3 to a unit.\nShuffle a Kalista into your deck.",
                                  "",
                                  "01SI030T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                                  CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                  K_FAST,
                                  3, 0, 0, false, {91, 88}) {}
};
class LegionGrenadier0196 final : public Card {
public:
  LegionGrenadier0196() : Card(196, "Legion Grenadier",
                               "Last Breath: Deal 2 to the enemy Nexus.",
                               "",
                               "01NX037", CardRegion::NOXUS, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_LAST_BREATH,
                               2, 3, 1, true, {}) {}
};
class Decimate0197 final : public Card {
public:
  Decimate0197() : Card(197, "Decimate",
                        "Deal 4 to the enemy Nexus.",
                        "",
                        "01NX002", CardRegion::NOXUS, CardRarity::RARE,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_SLOW,
                        5, 0, 0, true, {}) {}
};
class ZephyrSage0198 final : public Card {
public:
  ZephyrSage0198() : Card(198, "Zephyr Sage",
                          "Play: Create an exact copy of a card in hand.",
                          "",
                          "01IO016", CardRegion::IONIA, CardRarity::RARE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          6, 4, 4, true, {}) {}
};
class FrenziedSkitterer0199 final : public Card {
public:
  FrenziedSkitterer0199() : Card(199, "Frenzied Skitterer",
                                 "When I'm summoned, give other allied Spiders +1|+0 and enemies -1|-0 this round.",
                                 "",
                                 "01SI056", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                                 K_FEARSOME,
                                 3, 3, 3, true, {}) {}
};
class LegionGeneral0200 final : public Card {
public:
  LegionGeneral0200() : Card(200, "Legion General",
                             "When I'm summoned, grant me +1|+1 for each unit you've Stunned or Recalled this game. ",
                             "",
                             "01NX010", CardRegion::NOXUS, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_FEARSOME,
                             5, 4, 4, true, {}) {}
};
class LegionDrummer0201 final : public Card {
public:
  LegionDrummer0201() : Card(201, "Legion Drummer",
                             "Support: Give my supported ally Quick Attack this round.",
                             "",
                             "01NX017", CardRegion::NOXUS, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             2, 3, 2, true, {}) {}
};
class SilverwingVanguard0202 final : public Card {
public:
  SilverwingVanguard0202() : Card(202, "Silverwing Vanguard",
                                  "When I'm summoned, summon an exact copy of me.",
                                  "",
                                  "01DE004", CardRegion::DEMACIA, CardRarity::COMMON,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                                  K_CHALLENGER,
                                  4, 2, 1, true, {202}) {}
};
class Vengeance0203 final : public Card {
public:
  Vengeance0203() : Card(203, "Vengeance",
                         "Kill a unit.",
                         "",
                         "01SI001", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         7, 0, 0, true, {}) {}
};
class LaurentProtege0204 final : public Card {
public:
  LaurentProtege0204() : Card(204, "Laurent Protege",
                              "",
                              "",
                              "01DE011", CardRegion::DEMACIA, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_CHALLENGER,
                              3, 2, 4, true, {}) {}
};
class GreengladeLookout0205 final : public Card {
public:
  GreengladeLookout0205() : Card(205, "Greenglade Lookout",
                                 "Strike: Reduce the cost of the most expensive unit in your hand by 1.",
                                 "",
                                 "01IO036", CardRegion::IONIA, CardRarity::COMMON,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_NONE,
                                 2, 2, 1, true, {}) {}
};
class AstuteAcademic0206 final : public Card {
public:
  AstuteAcademic0206() : Card(206, "Astute Academic",
                              "When you draw a card, give me +1|+0 this round.",
                              "",
                              "01PZ055", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              1, 1, 2, true, {}) {}
};
class Teemo0207 final : public Card {
public:
  Teemo0207() : Card(207, "Teemo",
                     "Nexus Strike: Plant 5 Poison Puffcaps on random cards in the enemy deck.",
                     "You've planted 15+ Poison Puffcaps.",
                     "01PZ008", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_ELUSIVE,
                     1, 1, 1, true, {295, 6, 87}) {}
};
class Mk5RocketBlaster0208 final : public Card {
public:
  Mk5RocketBlaster0208() : Card(208, "Mk5: Rocket Blaster",
                                "",
                                "",
                                "01PZ056T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                                K_QUICK_ATTACK,
                                5, 5, 1, false, {}) {}
};
class UnlicensedInnovation0209 final : public Card {
public:
  UnlicensedInnovation0209() : Card(209, "Unlicensed Innovation",
                                    "Summon an Illegal Contraption.",
                                    "",
                                    "01PZ014", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                    K_SLOW,
                                    6, 0, 0, true, {228}) {}
};
class Succession0210 final : public Card {
public:
  Succession0210() : Card(210, "Succession",
                          "Summon a Dauntless Vanguard.",
                          "",
                          "01DE047", CardRegion::DEMACIA, CardRarity::COMMON,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW,
                          3, 0, 0, true, {235}) {}
};
class ArenaBookie0211 final : public Card {
public:
  ArenaBookie0211() : Card(211, "Arena Bookie",
                           "Round Start: Discard your lowest cost card to draw 1.",
                           "",
                           "01NX003", CardRegion::NOXUS, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           3, 2, 1, true, {}) {}
};
class WhirlingDeath0212 final : public Card {
public:
  WhirlingDeath0212() : Card(212, "Whirling Death",
                             "A battling ally strikes a battling enemy.",
                             "",
                             "01NX011", CardRegion::NOXUS, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_FAST,
                             3, 0, 0, true, {}) {}
};
class VanguardLookout0213 final : public Card {
public:
  VanguardLookout0213() : Card(213, "Vanguard Lookout",
                               "",
                               "",
                               "01DE046", CardRegion::DEMACIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                               K_NONE,
                               2, 1, 4, true, {}) {}
};
class ScarmaidenReaver0214 final : public Card {
public:
  ScarmaidenReaver0214() : Card(214, "Scarmaiden Reaver",
                                "",
                                "",
                                "01FR054", CardRegion::FRELJORD, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_OVERWHELM | K_REGENERATION,
                                5, 4, 5, true, {}) {}
};
class Purify0215 final : public Card {
public:
  Purify0215() : Card(215, "Purify",
                      "Silence a follower.",
                      "",
                      "01DE050", CardRegion::DEMACIA, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_BURST,
                      2, 0, 0, true, {}) {}
};
class TarkazsFury0216 final : public Card {
public:
  TarkazsFury0216() : Card(216, "Tarkaz's Fury",
                           "Deal 1 to ALL battling units.",
                           "",
                           "01FR021T1", CardRegion::FRELJORD, CardRarity::NONE,
                           CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                           K_SKILL,
                           0, 0, 0, false, {}) {}
};
class HeartOfTheFluft0217 final : public Card {
public:
  HeartOfTheFluft0217() : Card(217,
                               "Heart of the Fluft",
                               "Play: Combine all of our Poros into a Fluft of Poros, it gains their stats and keywords.",
                               "",
                               "01FR043",
                               CardRegion::FRELJORD,
                               CardRarity::RARE,
                               CardType::UNIT,
                               CardSupType::NONE,
                               CardSubType::PORO,
                               K_NONE,
                               6,
                               4,
                               4,
                               true,
                               {381}) {}
};
class SnowHare0218 final : public Card {
public:
  SnowHare0218() : Card(218, "Snow Hare",
                        "",
                        "",
                        "01FR049T1", CardRegion::FRELJORD, CardRarity::NONE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        1, 1, 1, false, {}) {}
};
class WyrdingStones0219 final : public Card {
public:
  WyrdingStones0219() : Card(219, "Wyrding Stones",
                             "Round Start: Get an extra mana gem this round.",
                             "",
                             "01FR033", CardRegion::FRELJORD, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             3, 0, 3, true, {}) {}
};
class TheBox0220 final : public Card {
public:
  TheBox0220() : Card(220, "The Box",
                      "Deal 3 to each enemy that was summoned this round.",
                      "",
                      "01SI019", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_FAST,
                      4, 0, 0, true, {}) {}
};
class FinalSpark0221 final : public Card {
public:
  FinalSpark0221() : Card(221, "Final Spark",
                          "Deal 4 to an enemy unit. Fleeting.",
                          "",
                          "01DE042T3", CardRegion::DEMACIA, CardRarity::NONE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW | K_OVERWHELM | K_FLEETING,
                          0, 0, 0, false, {}) {}
};
class MinahSwiftfoot0222 final : public Card {
public:
  MinahSwiftfoot0222() : Card(222, "Minah Swiftfoot",
                              "Play: Recall 3 enemies.",
                              "",
                              "01IO033", CardRegion::IONIA, CardRarity::EPIC,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              9, 6, 5, true, {291}) {}
};
class Vision0223 final : public Card {
public:
  Vision0223() : Card(223, "Vision",
                      "When cast or discarded, grant allies +1|+0.",
                      "",
                      "01NX039", CardRegion::NOXUS, CardRarity::RARE,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_BURST,
                      3, 0, 0, true, {}) {}
};
class IcevaleArcher0224 final : public Card {
public:
  IcevaleArcher0224() : Card(224, "Icevale Archer",
                             "Play: Frostbite an enemy.",
                             "",
                             "01FR011", CardRegion::FRELJORD, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             2, 3, 1, true, {}) {}
};
class SumpsnipeScavenger0225 final : public Card {
public:
  SumpsnipeScavenger0225() : Card(225, "Sumpsnipe Scavenger",
                                  "Allegiance: Create a Sumpworks Map in hand. It costs 0 this round.",
                                  "",
                                  "01PZ034", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_NONE,
                                  4, 4, 3, true, {386}) {}
};
class ElixirOfIron0226 final : public Card {
public:
  ElixirOfIron0226() : Card(226, "Elixir of Iron",
                            "Give an ally +0|+2 this round.",
                            "",
                            "01FR004", CardRegion::FRELJORD, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_BURST,
                            1, 0, 0, true, {}) {}
};
class KindlyTavernkeeper0227 final : public Card {
public:
  KindlyTavernkeeper0227() : Card(227, "Kindly Tavernkeeper",
                                  "Play: Heal an ally or your Nexus 3.",
                                  "",
                                  "01FR050", CardRegion::FRELJORD, CardRarity::COMMON,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_NONE,
                                  3, 2, 3, true, {}) {}
};
class IllegalContraption0228 final : public Card {
public:
  IllegalContraption0228() : Card(228, "Illegal Contraption",
                                  "",
                                  "",
                                  "01PZ014T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_NONE,
                                  6, 5, 5, false, {}) {}
};
class TrifarianShieldbreaker0229 final : public Card {
public:
  TrifarianShieldbreaker0229() : Card(229, "Trifarian Shieldbreaker",
                                      "",
                                      "",
                                      "01NX041", CardRegion::NOXUS, CardRarity::COMMON,
                                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                      K_FEARSOME,
                                      5, 6, 5, true, {}) {}
};
class Tryndamere0230 final : public Card {
public:
  Tryndamere0230() : Card(230, "Tryndamere",
                          "",
                          "",
                          "01FR039T2", CardRegion::FRELJORD, CardRarity::NONE,
                          CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                          K_OVERWHELM | K_FEARSOME,
                          8, 9, 9, false, {304, 11}) {}
};
class Ashe0231 final : public Card {
public:
  Ashe0231() : Card(231, "Ashe",
                    "Attack: Frostbite the Strongest enemy.\nEnemies with 0 Power can't block.",
                    "",
                    "01FR038T2", CardRegion::FRELJORD, CardRarity::NONE,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_NONE,
                    4, 6, 4, false, {72, 311, 112}) {}
};
class AcceleratedPurrsuit0232 final : public Card {
public:
  AcceleratedPurrsuit0232() : Card(232, "Accelerated Purrsuit",
                                   "If you've played 15 cards with different names this game, summon Catastrophe. ",
                                   "",
                                   "01PZ060", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                                   CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                   K_SLOW,
                                   5, 0, 0, false, {298}) {}
};
class Yasuo0233 final : public Card {
public:
  Yasuo0233() : Card(233, "Yasuo",
                     "When you Stun or Recall an enemy, I deal 2 to it.",
                     "You Stun or Recall 5+ units.",
                     "01IO015", CardRegion::IONIA, CardRarity::CHAMPION,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_QUICK_ATTACK,
                     4, 4, 3, true, {8, 285}) {}
};
class RitualOfRenewal0234 final : public Card {
public:
  RitualOfRenewal0234() : Card(234, "Ritual of Renewal",
                               "Heal an ally or your Nexus 7. Draw 1.",
                               "",
                               "01IO001", CardRegion::IONIA, CardRarity::RARE,
                               CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                               K_SLOW,
                               7, 0, 0, true, {}) {}
};
class DauntlessVanguard0235 final : public Card {
public:
  DauntlessVanguard0235() : Card(235, "Dauntless Vanguard",
                                 "",
                                 "",
                                 "01DE016", CardRegion::DEMACIA, CardRarity::NONE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                                 K_NONE,
                                 3, 3, 3, false, {}) {}
};
class StandUnited0236 final : public Card {
public:
  StandUnited0236() : Card(236, "Stand United",
                           "Swap two allies. Give them Barrier.",
                           "",
                           "01IO010", CardRegion::IONIA, CardRarity::RARE,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_BURST,
                           6, 0, 0, true, {}) {}
};
class TwinDisciplines0237 final : public Card {
public:
  TwinDisciplines0237() : Card(237, "Twin Disciplines",
                               "Give an ally +3|+0 or +0|+3 this round.",
                               "",
                               "01IO012", CardRegion::IONIA, CardRarity::COMMON,
                               CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                               K_BURST,
                               3, 0, 0, true, {}) {}
};
class Balesight0238 final : public Card {
public:
  Balesight0238() : Card(238, "Balesight",
                         "Obliterate ALL followers with 4 or less Power in play and in hands.",
                         "",
                         "01FR052T1", CardRegion::FRELJORD, CardRarity::NONE,
                         CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                         K_SKILL,
                         0, 0, 0, false, {}) {}
};
class MageseekerPersuader0239 final : public Card {
public:
  MageseekerPersuader0239() : Card(239, "Mageseeker Persuader",
                                   "Grant me +1|+1 and Challenger once you've cast a 6+ cost spell this game.",
                                   "",
                                   "01DE040", CardRegion::DEMACIA, CardRarity::RARE,
                                   CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                   K_NONE,
                                   2, 3, 2, true, {}) {}
};
class MinotaurReckoner0240 final : public Card {
public:
  MinotaurReckoner0240() : Card(240, "Minotaur Reckoner",
                                "Round Start: Stun the Weakest enemy.",
                                "",
                                "01NX036", CardRegion::NOXUS, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                6, 6, 6, true, {}) {}
};
class BatteringRam0241 final : public Card {
public:
  BatteringRam0241() : Card(241, "Battering Ram",
                            "Attack: Grant me +4|+0.",
                            "",
                            "01NX044", CardRegion::NOXUS, CardRarity::EPIC,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_OVERWHELM,
                            6, 0, 12, true, {}) {}
};
class VanguardSquire0242 final : public Card {
public:
  VanguardSquire0242() : Card(242, "Vanguard Squire",
                              "When you summon an Elite, reduce my cost by 1.",
                              "",
                              "01DE036", CardRegion::DEMACIA, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                              K_NONE,
                              4, 3, 3, true, {}) {}
};
class RavenousButcher0243 final : public Card {
public:
  RavenousButcher0243() : Card(243, "Ravenous Butcher",
                               "To play me, kill an ally.",
                               "",
                               "01SI011", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               0, 3, 2, true, {}) {}
};
class ZedsShadowshift0244 final : public Card {
public:
  ZedsShadowshift0244() : Card(244, "Zed's Shadowshift",
                               "Recall an ally to summon a Living Shadow in its place.\nShuffle a Zed into your deck.",
                               "",
                               "01IO009T3", CardRegion::IONIA, CardRarity::NONE,
                               CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                               K_FAST,
                               3, 0, 0, false, {287, 257, 59}) {}
};
class HecarimsOnslaughtOfShadows0245 final : public Card {
public:
  HecarimsOnslaughtOfShadows0245() : Card(245, "Hecarim's Onslaught of Shadows",
                                          "Summon 2 Spectral Rider.\nShuffle a Hecarim into deck.",
                                          "",
                                          "01SI042T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                                          CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                          K_SLOW,
                                          2, 0, 0, false, {159, 363, 57}) {}
};
class Riposte0246 final : public Card {
public:
  Riposte0246() : Card(246, "Riposte",
                       "Give an ally +3|+0 and Barrier this round.",
                       "",
                       "01DE037", CardRegion::DEMACIA, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_BURST,
                       4, 0, 0, true, {}) {}
};
class Mk7ArmoredStomper0247 final : public Card {
public:
  Mk7ArmoredStomper0247() : Card(247, "Mk7: Armored Stomper",
                                 "",
                                 "",
                                 "01PZ056T5", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                                 K_BARRIER,
                                 7, 7, 1, false, {}) {}
};
class FreshOfferings0248 final : public Card {
public:
  FreshOfferings0248() : Card(248, "Fresh Offerings",
                              "If 3+ allies have died this round, summon Vilemaw.\n",
                              "",
                              "01SI027", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_SLOW,
                              3, 0, 0, true, {60}) {}
};
class AssemblyBot0249 final : public Card {
public:
  AssemblyBot0249() : Card(249, "Assembly Bot",
                           "When you cast a spell, grant me +1|+1.",
                           "",
                           "01PZ003", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_IMBUE,
                           3, 1, 1, true, {}) {}
};
class WindfarerHatchling0250 final : public Card {
public:
  WindfarerHatchling0250() : Card(250, "Windfarer Hatchling",
                                  "When I'm summoned, give other allies +2|+2 this round.",
                                  "",
                                  "01IO021", CardRegion::IONIA, CardRarity::EPIC,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_ELUSIVE,
                                  7, 4, 2, true, {}) {}
};
class PoroSnax0251 final : public Card {
public:
  PoroSnax0251() : Card(251, "Poro Snax",
                        "Grant Poro allies everywhere +1|+1.",
                        "",
                        "01FR016", CardRegion::FRELJORD, CardRarity::COMMON,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_BURST,
                        3, 0, 0, true, {}) {}
};
class CrimsonAristocrat0252 final : public Card {
public:
  CrimsonAristocrat0252() : Card(252, "Crimson Aristocrat",
                                 "Play: Deal 1 to an ally and grant it +2|+0.",
                                 "",
                                 "01NX005", CardRegion::NOXUS, CardRarity::COMMON,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_NONE,
                                 2, 2, 2, true, {}) {}
};
class Jinx0253 final : public Card {
public:
  Jinx0253() : Card(253,
                    "Jinx",
                    "Start of Round: Draw 1.\nEach round, the first time you empty your hand, create in hand a Super Mega Death Rocket!.",
                    "",
                    "01PZ040T1",
                    CardRegion::PILTOVER_N_ZAUN,
                    CardRarity::NONE,
                    CardType::UNIT,
                    CardSupType::CHAMPION,
                    CardSubType::NONE,
                    K_QUICK_ATTACK,
                    4,
                    5,
                    4,
                    false,
                    {49, 4, 44}) {}
};
class BattleFury0254 final : public Card {
public:
  BattleFury0254() : Card(254, "Battle Fury",
                          "Grant an ally +8|+4.",
                          "",
                          "01FR005", CardRegion::FRELJORD, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_BURST,
                          8, 0, 0, true, {}) {}
};
class Reinforcements0255 final : public Card {
public:
  Reinforcements0255() : Card(255, "Reinforcements",
                              "Summon 2 Dauntless Vanguard, then grant Elite allies +1|+1.",
                              "",
                              "01DE014", CardRegion::DEMACIA, CardRarity::RARE,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_SLOW,
                              8, 0, 0, true, {235}) {}
};
class ChainVest0256 final : public Card {
public:
  ChainVest0256() : Card(256, "Chain Vest",
                         "Grant an ally Tough.",
                         "",
                         "01DE013", CardRegion::DEMACIA, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_BURST,
                         1, 0, 0, true, {}) {}
};
class Zed0257 final : public Card {
public:
  Zed0257() : Card(257, "Zed",
                   "Attack: Create an attacking Living Shadow with my stats.",
                   "My shadows and I have struck the enemy Nexus twice.",
                   "01IO009", CardRegion::IONIA, CardRarity::CHAMPION,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_QUICK_ATTACK,
                   3, 3, 2, true, {59, 244, 287}) {}
};
class KatarinasDeathLotus0258 final : public Card {
public:
  KatarinasDeathLotus0258() : Card(258, "Katarina's Death Lotus",
                                   "Deal 1 to ALL battling units.\nShuffle a Katarina into your deck.",
                                   "",
                                   "01NX042T1", CardRegion::NOXUS, CardRarity::NONE,
                                   CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                   K_FAST,
                                   2, 0, 0, false, {317, 171}) {}
};
class TrifarianHopeful0259 final : public Card {
public:
  TrifarianHopeful0259() : Card(259, "Trifarian Hopeful",
                                "When I'm summoned, grant me +2|+0 if you have another Noxus ally.",
                                "",
                                "01NX016", CardRegion::NOXUS, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                2, 3, 2, true, {}) {}
};
class BraumsTakeHeart0260 final : public Card {
public:
  BraumsTakeHeart0260() : Card(260, "Braum's Take Heart",
                               "Grant a damaged ally +3|+3.\nShuffle a Braum into your deck.",
                               "",
                               "01FR009T2", CardRegion::FRELJORD, CardRarity::NONE,
                               CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                               K_BURST,
                               3, 0, 0, false, {29, 156}) {}
};
class Mistwraith0261 final : public Card {
public:
  Mistwraith0261() : Card(261, "Mistwraith",
                          "When I'm summoned, grant other allied Mistwraiths everywhere +1|+0.",
                          "",
                          "01SI014", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_FEARSOME,
                          2, 2, 2, true, {}) {}
};
class ElixirOfWrath0262 final : public Card {
public:
  ElixirOfWrath0262() : Card(262, "Elixir of Wrath",
                             "Give an ally +3|+0 this round.",
                             "",
                             "01NX027", CardRegion::NOXUS, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_BURST,
                             1, 0, 0, true, {}) {}

  bool castable(const Action &action) const override;
  void onCast(Action &action) const override;
};
class SilentShadowseer0263 final : public Card {
public:
  SilentShadowseer0263() : Card(263, "Silent Shadowseer",
                                "Nexus Strike: Create a copy of me in hand.",
                                "",
                                "01IO027", CardRegion::IONIA, CardRarity::EPIC,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_ELUSIVE | K_EPHEMERAL,
                                2, 3, 1, true, {}) {}
};
class HauntedRelic0264 final : public Card {
public:
  HauntedRelic0264() : Card(264, "Haunted Relic",
                            "Summon 3 Unleashed Spirit.",
                            "",
                            "01SI007", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_SLOW,
                            2, 0, 0, true, {190}) {}
};
class MarkOfTheIsles0265 final : public Card {
public:
  MarkOfTheIsles0265() : Card(265, "Mark of the Isles",
                              "Grant an ally +2|+2 and Ephemeral.",
                              "",
                              "01SI022", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_BURST,
                              1, 0, 0, true, {}) {}
};
class Shen0266 final : public Card {
public:
  Shen0266() : Card(266, "Shen",
                    "Support: Give my supported ally Barrier.",
                    "I've seen allies gain Barrier 4+ times.",
                    "01IO032", CardRegion::IONIA, CardRarity::CHAMPION,
                    CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                    K_NONE,
                    4, 2, 5, true, {151, 367}) {}
};
class PreciousPet0267 final : public Card {
public:
  PreciousPet0267() : Card(267, "Precious Pet",
                           "",
                           "",
                           "01NX015", CardRegion::NOXUS, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                           K_FEARSOME,
                           1, 2, 1, true, {}) {}
};
class GraspOfTheUndying0268 final : public Card {
public:
  GraspOfTheUndying0268() : Card(268, "Grasp of the Undying",
                                 "Drain 3 from a unit.",
                                 "",
                                 "01SI054", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                 K_FAST,
                                 5, 0, 0, true, {}) {}
};
class ChempunkShredder0269 final : public Card {
public:
  ChempunkShredder0269() : Card(269, "Chempunk Shredder",
                                "Play: Deal 1 to all enemy units.",
                                "",
                                "01PZ044", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                5, 5, 2, true, {296}) {}
};
class LonelyPoro0270 final : public Card {
public:
  LonelyPoro0270() : Card(270, "Lonely Poro",
                          "When I'm summoned, create in hand another random 1 cost Poro from any region.",
                          "",
                          "01FR008", CardRegion::FRELJORD, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                          K_NONE,
                          1, 1, 1, true, {70}) {}
  void onSummon(Action &action) const override;
};
class Karma0271 final : public Card {
public:
  Karma0271() : Card(271, "Karma",
                     "Round End: Create a random spell in hand.",
                     "You're Enlightened.",
                     "01IO041", CardRegion::IONIA, CardRarity::CHAMPION,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                     K_NONE,
                     5, 4, 3, true, {41, 400}) {}
};
class Possession0272 final : public Card {
public:
  Possession0272() : Card(272, "Possession",
                          "Steal an enemy follower this round. (Can't play if you have 6 allies already.)",
                          "",
                          "01SI006", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW,
                          5, 0, 0, true, {}) {}
};
class RadiantGuardian0273 final : public Card {
public:
  RadiantGuardian0273() : Card(273, "Radiant Guardian",
                               "When I'm summoned, grant me Lifesteal and Tough if an ally died this round.",
                               "",
                               "01DE015", CardRegion::DEMACIA, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               5, 5, 5, true, {}) {}
};
class EminentBenefactor0274 final : public Card {
public:
  EminentBenefactor0274() : Card(274, "Eminent Benefactor",
                                 "Last Breath: Create a random Epic card in hand.",
                                 "",
                                 "01PZ029", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_LAST_BREATH,
                                 4, 3, 3, true, {}) {}
};
class DeathLotus0275 final : public Card {
public:
  DeathLotus0275() : Card(275, "Death Lotus",
                          "Deal 1 to ALL battling units.",
                          "",
                          "01NX050", CardRegion::NOXUS, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_FAST,
                          2, 0, 0, true, {}) {}

  void onCast(Action &action) const override;
};
class Mk0WindupShredder0276 final : public Card {
public:
  Mk0WindupShredder0276() : Card(276, "Mk0: Windup Shredder",
                                 "",
                                 "",
                                 "01PZ056T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                                 K_CHALLENGER,
                                 0, 0, 1, false, {}) {}
};
class CloudDrinker0277 final : public Card {
public:
  CloudDrinker0277() : Card(277, "Cloud Drinker",
                            "Your Burst spells cost 1 less.",
                            "",
                            "01IO031", CardRegion::IONIA, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            6, 3, 5, true, {}) {}
};
class LaurentBladekeeper0278 final : public Card {
public:
  LaurentBladekeeper0278() : Card(278, "Laurent Bladekeeper",
                                  "Play: Grant an ally +2|+2.",
                                  "",
                                  "01DE003", CardRegion::DEMACIA, CardRarity::RARE,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_NONE,
                                  4, 2, 3, true, {}) {}
};
class WarmothersCall0279 final : public Card {
public:
  WarmothersCall0279() : Card(279, "Warmother's Call",
                              "Summon the top unit from our deck now and EACH Round Start.",
                              "",
                              "01FR023", CardRegion::FRELJORD, CardRarity::EPIC,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_SLOW,
                              12, 0, 0, true, {}) {}
};
class PurrsuitOfPerfection0280 final : public Card {
public:
  PurrsuitOfPerfection0280() : Card(280, "Purrsuit of Perfection",
                                    "If you've played 20 cards with different names this game, summon Catastrophe. ",
                                    "",
                                    "01PZ033", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                    K_SLOW,
                                    5, 0, 0, true, {298}) {}
};
class BladeOfLedros0281 final : public Card {
public:
  BladeOfLedros0281() : Card(281, "Blade of Ledros",
                             "Deal damage to the enemy Nexus equal to half its Health, rounded up.",
                             "",
                             "01SI033T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                             CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                             K_SKILL,
                             0, 0, 0, false, {145}) {}
};
class Funsmith0282 final : public Card {
public:
  Funsmith0282() : Card(282, "Funsmith",
                        "All of your spells and Skills deal 1 extra damage.",
                        "",
                        "01PZ051", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                        CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                        K_NONE,
                        5, 2, 3, true, {}) {}
};
class SplinterSoul0283 final : public Card {
public:
  SplinterSoul0283() : Card(283, "Splinter Soul",
                            "Summon an exact copy of an ally. It's Ephemeral and 1|1.",
                            "",
                            "01SI028", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_SLOW,
                            3, 0, 0, true, {}) {}
};
class Atrocity0284 final : public Card {
public:
  Atrocity0284() : Card(284, "Atrocity",
                        "Kill an ally to deal damage equal to its Power to anything.",
                        "",
                        "01SI025", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                        CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                        K_FAST,
                        6, 0, 0, true, {}) {}
};
class YasuosSteelTempest0285 final : public Card {
public:
  YasuosSteelTempest0285() : Card(285, "Yasuo's Steel Tempest",
                                  "Stun an attacking enemy.\nShuffle a Yasuo into your deck.",
                                  "",
                                  "01IO015T2", CardRegion::IONIA, CardRarity::NONE,
                                  CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                  K_FAST,
                                  3, 0, 0, false, {233, 8}) {}
};
class Recall0286 final : public Card {
public:
  Recall0286() : Card(286, "Recall",
                      "Recall an ally.",
                      "",
                      "01IO011", CardRegion::IONIA, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_FAST,
                      1, 0, 0, true, {}) {}
};
class LivingShadow0287 final : public Card {
public:
  LivingShadow0287() : Card(287, "Living Shadow",
                            "",
                            "",
                            "01IO009T1", CardRegion::IONIA, CardRarity::NONE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_EPHEMERAL,
                            3, 3, 2, false, {257}) {}
};
class WillOfIonia0288 final : public Card {
public:
  WillOfIonia0288() : Card(288, "Will of Ionia",
                           "Recall a unit.",
                           "",
                           "01IO002", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_FAST,
                           4, 0, 0, true, {}) {}
};
class FatalStrike0289 final : public Card {
public:
  FatalStrike0289() : Card(289, "Fatal Strike",
                           "If you have an attacking Ephemeral ally, kill Ren Shadowblade's blocker.",
                           "",
                           "01IO007T1", CardRegion::IONIA, CardRarity::NONE,
                           CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                           K_SKILL,
                           0, 0, 0, false, {326}) {}
};
class FeralMystic0290 final : public Card {
public:
  FeralMystic0290() : Card(290, "Feral Mystic",
                           "Enlightened: I have +4|+4.",
                           "",
                           "01FR047", CardRegion::FRELJORD, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_OVERWHELM,
                           2, 2, 2, true, {}) {}
};
class SkywardStrikes0291 final : public Card {
public:
  SkywardStrikes0291() : Card(291, "Skyward Strikes",
                              "Recall 3 enemies.",
                              "",
                              "01IO033T1", CardRegion::IONIA, CardRarity::NONE,
                              CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                              K_SKILL,
                              0, 0, 0, false, {}) {}
};
class NavoriBladescout0292 final : public Card {
public:
  NavoriBladescout0292() : Card(292, "Navori Bladescout",
                                "When I'm summoned, give me Elusive this round.",
                                "",
                                "01IO017", CardRegion::IONIA, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                1, 2, 1, true, {}) {}
};
class IcyYeti0293 final : public Card {
public:
  IcyYeti0293() : Card(293, "Icy Yeti",
                       "When I'm summoned, Frostbite enemies with 3 or less Health.",
                       "",
                       "01FR056", CardRegion::FRELJORD, CardRarity::RARE,
                       CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
                       K_NONE,
                       7, 5, 5, true, {}) {}
};
class Shunpo0294 final : public Card {
public:
  Shunpo0294() : Card(294, "Shunpo",
                      "Deal 2 to an enemy unit, then Rally.",
                      "",
                      "01NX056", CardRegion::NOXUS, CardRarity::COMMON,
                      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                      K_SLOW,
                      5, 0, 0, true, {}) {}
};
class PoisonPuffcap0295 final : public Card {
public:
  PoisonPuffcap0295() : Card(295, "Poison Puffcap",
                             "Deal 1 to your Nexus.",
                             "",
                             "01PZ022", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                             CardType::TRAP, CardSupType::NONE, CardSubType::NONE,
                             K_TRAP,
                             0, 0, 0, false, {207}) {}
};
class FaceMelter0296 final : public Card {
public:
  FaceMelter0296() : Card(296, "Face-Melter",
                          "Deal 1 to all enemy units.",
                          "",
                          "01PZ044T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                          CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                          K_SKILL,
                          0, 0, 0, false, {}) {}
};
class MistsCall0297 final : public Card {
public:
  MistsCall0297() : Card(297, "Mist's Call",
                         "Revive a random ally that died this round.",
                         "",
                         "01SI046", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         3, 0, 0, true, {}) {}
};
class Catastrophe0298 final : public Card {
public:
  Catastrophe0298() : Card(298, "Catastrophe",
                           "",
                           "",
                           "01PZ033T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_OVERWHELM,
                           1, 30, 30, false, {}) {}
};
class TrifarianAssessor0299 final : public Card {
public:
  TrifarianAssessor0299() : Card(299, "Trifarian Assessor",
                                 "Play: Draw 1 for each 5+ Power ally you have.",
                                 "",
                                 "01NX033", CardRegion::NOXUS, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_NONE,
                                 4, 4, 3, true, {}) {}
};
class PrismaticBarrier0300 final : public Card {
public:
  PrismaticBarrier0300() : Card(300, "Prismatic Barrier",
                                "Give an ally Barrier this round.",
                                "",
                                "01DE032", CardRegion::DEMACIA, CardRarity::COMMON,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_BURST,
                                3, 0, 0, true, {}) {}
};
class Vladimir0301 final : public Card {
public:
  Vladimir0301() : Card(301, "Vladimir",
                        "Attack: For each other attacking ally, deal 1 to it and 1 to the enemy Nexus.",
                        "",
                        "01NX006T1", CardRegion::NOXUS, CardRarity::NONE,
                        CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                        K_REGENERATION,
                        5, 6, 6, false, {163, 352, 380}) {}
};
class ProfessorVonYipp0302 final : public Card {
public:
  ProfessorVonYipp0302() : Card(302, "Professor von Yipp",
                                "When you summon a 1 cost ally, grant it +2|+2.",
                                "",
                                "01PZ023", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                4, 2, 3, true, {}) {}
};
class Mk1Wrenchbot0303 final : public Card {
public:
  Mk1Wrenchbot0303() : Card(303, "Mk1: Wrenchbot",
                            "",
                            "",
                            "01PZ056T4", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                            K_NONE,
                            1, 1, 1, false, {}) {}
};
class Tryndamere0304 final : public Card {
public:
  Tryndamere0304() : Card(304, "Tryndamere",
                          "",
                          "If I would die, I Level Up instead.",
                          "01FR039", CardRegion::FRELJORD, CardRarity::CHAMPION,
                          CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                          K_OVERWHELM,
                          8, 8, 4, true, {230, 11}) {}
};
class BullElnuk0305 final : public Card {
public:
  BullElnuk0305() : Card(305, "Bull Elnuk",
                         "",
                         "",
                         "01FR027", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::UNIT, CardSupType::NONE, CardSubType::ELNUK,
                         K_NONE,
                         4, 4, 5, true, {}) {}
};
class BroodAwakening0306 final : public Card {
public:
  BroodAwakening0306() : Card(306, "Brood Awakening",
                              "Summon 3 Spiderling, then grant Spider allies +1|+0. ",
                              "",
                              "01SI050", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_SLOW,
                              5, 0, 0, true, {110}) {}
};
class PackMentality0307 final : public Card {
public:
  PackMentality0307() : Card(307, "Pack Mentality",
                             "Give allies +2|+2 and Overwhelm this round.",
                             "",
                             "01FR057", CardRegion::FRELJORD, CardRarity::RARE,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_SLOW,
                             7, 0, 0, true, {}) {}
};
class UnstableVoltician0308 final : public Card {
public:
  UnstableVoltician0308() : Card(308, "Unstable Voltician",
                                 "Grant me +4|+0 and Quick Attack once you've cast a 6+ cost spell this game.",
                                 "",
                                 "01PZ024", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_NONE,
                                 5, 4, 4, true, {}) {}
};
class Wraithcaller0309 final : public Card {
public:
  Wraithcaller0309() : Card(309, "Wraithcaller",
                            "Allegiance: Summon a Mistwraith.",
                            "",
                            "01SI016", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            4, 4, 3, true, {261}) {}
};
class SparringStudent0310 final : public Card {
public:
  SparringStudent0310() : Card(310, "Sparring Student",
                               "When you summon an ally, give me +1|+1 this round.",
                               "",
                               "01IO042", CardRegion::IONIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               1, 1, 1, true, {}) {}
};
class AshesFlashFreeze0311 final : public Card {
public:
  AshesFlashFreeze0311() : Card(311, "Ashe's Flash Freeze",
                                "Frostbite an enemy.\nShuffle an Ashe into your deck.",
                                "",
                                "01FR038T1", CardRegion::FRELJORD, CardRarity::NONE,
                                CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                K_BURST,
                                3, 0, 0, false, {112, 231}) {}
};
class TarkazTheTribeless0312 final : public Card {
public:
  TarkazTheTribeless0312() : Card(312, "Tarkaz the Tribeless",
                                  "Attack: Deal 1 to ALL battling units.",
                                  "",
                                  "01FR021", CardRegion::FRELJORD, CardRarity::EPIC,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_NONE,
                                  5, 5, 8, true, {216}) {}
};
class GreengladeDuo0313 final : public Card {
public:
  GreengladeDuo0313() : Card(313, "Greenglade Duo",
                             "When you summon an ally, give me +1|+0 this round.",
                             "",
                             "01IO006", CardRegion::IONIA, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_ELUSIVE,
                             2, 2, 1, true, {}) {}
};
class BloodForBlood0314 final : public Card {
public:
  BloodForBlood0314() : Card(314, "Blood for Blood",
                             "Deal 1 to an allied follower. If it survives, create a copy of it in hand.",
                             "",
                             "01NX052", CardRegion::NOXUS, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_FAST,
                             3, 0, 0, true, {}) {}
};
class KinkouWayfinder0315 final : public Card {
public:
  KinkouWayfinder0315() : Card(315, "Kinkou Wayfinder",
                               "Allegiance: Summon two 1 cost allies from our deck.",
                               "",
                               "01IO050", CardRegion::IONIA, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               4, 2, 3, true, {}) {}
};
class SingleCombat0316 final : public Card {
public:
  SingleCombat0316() : Card(316, "Single Combat",
                            "An ally and an enemy strike each other.",
                            "",
                            "01DE026", CardRegion::DEMACIA, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_FAST,
                            2, 0, 0, true, {}) {}
};
class Katarina0317 final : public Card {
public:
  Katarina0317() : Card(317, "Katarina",
                        "",
                        "I've struck once. When I level up, Recall me.",
                        "01NX042", CardRegion::NOXUS, CardRarity::CHAMPION,
                        CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                        K_QUICK_ATTACK,
                        3, 3, 2, true, {171, 258}) {}
};
class SharkChariot0318 final : public Card {
public:
  SharkChariot0318() : Card(318, "Shark Chariot",
                            "When an Ephemeral ally attacks and I'm dead, return me to play attacking.",
                            "",
                            "01SI021", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_CANT_BLOCK | K_EPHEMERAL,
                            2, 3, 1, true, {}) {}
};
class AvarosanTrapper0319 final : public Card {
public:
  AvarosanTrapper0319() : Card(319, "Avarosan Trapper",
                               "When I'm summoned, create an Enraged Yeti in the top 3 cards of your deck.",
                               "",
                               "01FR048", CardRegion::FRELJORD, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               3, 2, 2, true, {103}) {}
};
class ProgressDay0320 final : public Card {
public:
  ProgressDay0320() : Card(320, "Progress Day!",
                           "Draw 3, then reduce those cards' costs by 1.",
                           "",
                           "01PZ049", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_BURST,
                           8, 0, 0, true, {}) {}
};
class Yusari0321 final : public Card {
public:
  Yusari0321() : Card(321, "Yusari",
                      "",
                      "",
                      "01IO048", CardRegion::IONIA, CardRarity::RARE,
                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                      K_CHALLENGER | K_ELUSIVE,
                      5, 4, 3, true, {}) {}
};
class TroopOfElnuks0322 final : public Card {
public:
  TroopOfElnuks0322() : Card(322,
                             "Troop of Elnuks",
                             "Play: For the top 6 cards in your deck, summon each Elnuk and shuffle the rest into your deck.",
                             "",
                             "01FR017",
                             CardRegion::FRELJORD,
                             CardRarity::COMMON,
                             CardType::UNIT,
                             CardSupType::NONE,
                             CardSubType::ELNUK,
                             K_NONE,
                             5,
                             3,
                             3,
                             true,
                             {}) {}
};
class HealthPotion0323 final : public Card {
public:
  HealthPotion0323() : Card(323, "Health Potion",
                            "Heal an ally or your Nexus 3.",
                            "",
                            "01IO004", CardRegion::IONIA, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_BURST,
                            1, 0, 0, true, {}) {}
};
class ChroniclerOfRuin0324 final : public Card {
public:
  ChroniclerOfRuin0324() : Card(324, "Chronicler of Ruin",
                                "Play: Kill an ally, then revive it.",
                                "",
                                "01SI032", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                4, 3, 3, true, {}) {}
};
class PlazaGuardian0325 final : public Card {
public:
  PlazaGuardian0325() : Card(325, "Plaza Guardian",
                             "Reduce my cost by 1 for each spell you've cast this game.",
                             "",
                             "01PZ006", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_QUICK_ATTACK,
                             10, 6, 6, true, {}) {}
};
class RenShadowblade0326 final : public Card {
public:
  RenShadowblade0326() : Card(326, "Ren Shadowblade",
                              "When the enemy summons a follower, grant it Ephemeral.",
                              "",
                              "01IO007", CardRegion::IONIA, CardRarity::EPIC,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              8, 6, 4, true, {}) {}
};
class Anivia0327 final : public Card {
public:
  Anivia0327() : Card(327, "Anivia",
                      "Attack: Deal 2 to all enemies.\nLast Breath: Revive me transformed into Eggnivia.",
                      "",
                      "01FR024T3", CardRegion::FRELJORD, CardRarity::NONE,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_LAST_BREATH,
                      7, 3, 5, false, {375, 369, 132, 385}) {}
};
class EtherealRemitter0328 final : public Card {
public:
  EtherealRemitter0328() : Card(328, "Ethereal Remitter",
                                "Play: Kill an ally to summon a random follower from any region that costs 2 more.",
                                "",
                                "01SI058", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                5, 4, 3, true, {}) {}
};
class ClumpOfWhumps0329 final : public Card {
public:
  ClumpOfWhumps0329() : Card(329, "Clump of Whumps",
                             "When I'm summoned, create a Mushroom Cloud in hand.",
                             "",
                             "01PZ053", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             2, 2, 2, true, {104, 295}) {}
};
class EmeraldAwakener0330 final : public Card {
public:
  EmeraldAwakener0330() : Card(330, "Emerald Awakener",
                               "Enlightened: I have +4|+4.",
                               "",
                               "01IO053", CardRegion::IONIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_LIFESTEAL,
                               3, 2, 2, true, {}) {}
};
class TakeHeart0331 final : public Card {
public:
  TakeHeart0331() : Card(331, "Take Heart",
                         "Grant a damaged ally +3|+3.",
                         "",
                         "01FR046", CardRegion::FRELJORD, CardRarity::RARE,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_BURST,
                         3, 0, 0, true, {}) {}
};
class SavageReckoner0332 final : public Card {
public:
  SavageReckoner0332() : Card(332, "Savage Reckoner",
                              "",
                              "",
                              "01NX045", CardRegion::NOXUS, CardRarity::RARE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_OVERWHELM | K_CHALLENGER,
                              7, 7, 4, true, {}) {}
};
class EnGarde0333 final : public Card {
public:
  EnGarde0333() : Card(333, "En Garde",
                       "Give allies Challenger this round.",
                       "",
                       "01DE027", CardRegion::DEMACIA, CardRarity::RARE,
                       CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                       K_BURST,
                       3, 0, 0, true, {}) {}
};
class SpectralMatron0334 final : public Card {
public:
  SpectralMatron0334() : Card(334, "Spectral Matron",
                              "Play: Pick an ally in hand. Summon an exact copy of it. It's Ephemeral.",
                              "",
                              "01SI044", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_FEARSOME,
                              8, 6, 6, true, {}) {}
};
class RimetuskShaman0335 final : public Card {
public:
  RimetuskShaman0335() : Card(335, "Rimetusk Shaman",
                              "Round Start: Frostbite the Strongest enemy.",
                              "",
                              "01FR040", CardRegion::FRELJORD, CardRarity::RARE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              5, 3, 3, true, {}) {}
};
class Deny0336 final : public Card {
public:
  Deny0336() : Card(336, "Deny",
                    "Stop a fast spell, slow spell, or Skill.",
                    "",
                    "01IO049", CardRegion::IONIA, CardRarity::RARE,
                    CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                    K_FAST,
                    4, 0, 0, true, {}) {}
  bool castable(const Action &action) const override;
  void onCast(Action &action) const override;
};
class TrifarianGloryseeker0337 final : public Card {
public:
  TrifarianGloryseeker0337() : Card(337, "Trifarian Gloryseeker",
                                    "",
                                    "",
                                    "01NX031", CardRegion::NOXUS, CardRarity::RARE,
                                    CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                    K_CHALLENGER | K_CANT_BLOCK,
                                    2, 5, 1, true, {}) {}
};
class FlameChompers0338 final : public Card {
public:
  FlameChompers0338() : Card(338, "Flame Chompers!",
                             "When I'm discarded, summon me.",
                             "",
                             "01PZ012", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_CHALLENGER,
                             2, 0, 2, true, {}) {}
};
class AncientYeti0339 final : public Card {
public:
  AncientYeti0339() : Card(339, "Ancient Yeti",
                           "Round End: If I'm in hand, reduce my cost by 1.",
                           "",
                           "01FR031", CardRegion::FRELJORD, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
                           K_OVERWHELM,
                           7, 5, 5, true, {}) {}
};
class VanguardSergeant0340 final : public Card {
public:
  VanguardSergeant0340() : Card(340, "Vanguard Sergeant",
                                "When I'm summoned, create a For Demacia! in hand.",
                                "",
                                "01DE006", CardRegion::DEMACIA, CardRarity::RARE,
                                CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                                K_NONE,
                                3, 3, 3, true, {355}) {}
};
class Bullseye0341 final : public Card {
public:
  Bullseye0341() : Card(341, "Bullseye",
                        "Deal 1 to an enemy unit.",
                        "",
                        "01FR036T1", CardRegion::FRELJORD, CardRarity::NONE,
                        CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                        K_SKILL,
                        0, 0, 0, false, {}) {}
};
class MightyPoro0342 final : public Card {
public:
  MightyPoro0342() : Card(342, "Mighty Poro",
                          "",
                          "",
                          "01FR053", CardRegion::FRELJORD, CardRarity::COMMON,
                          CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                          K_OVERWHELM,
                          3, 3, 3, true, {}) {}
};
class NavoriBrigand0343 final : public Card {
public:
  NavoriBrigand0343() : Card(343, "Navori Brigand",
                             "",
                             "",
                             "01IO052T1", CardRegion::IONIA, CardRarity::NONE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             2, 1, 2, false, {}) {}
};
class ArachnoidHorror0344 final : public Card {
public:
  ArachnoidHorror0344() : Card(344, "Arachnoid Horror",
                               "",
                               "",
                               "01SI039", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
                               K_FEARSOME,
                               2, 3, 2, true, {}) {}
};
class GetExcited0345 final : public Card {
public:
  GetExcited0345() : Card(345, "Get Excited!",
                          "To play, discard 1.\nDeal 3 to anything.",
                          "",
                          "01PZ039", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_FAST,
                          3, 0, 0, true, {}) {}
};
class Mk6Stormlobber0346 final : public Card {
public:
  Mk6Stormlobber0346() : Card(346, "Mk6: Stormlobber",
                              "",
                              "",
                              "01PZ056T9", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                              K_OVERWHELM,
                              6, 6, 1, false, {}) {}
};
class SennaSentinelOfLight0347 final : public Card {
public:
  SennaSentinelOfLight0347() : Card(347, "Senna, Sentinel of Light",
                                    "The first time I see an allied Lucian die, grant me +1|+1 and Double Attack.",
                                    "",
                                    "01DE038", CardRegion::DEMACIA, CardRarity::RARE,
                                    CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                    K_QUICK_ATTACK,
                                    3, 4, 2, true, {7, 142}) {}
};
class BloodswornPledge0348 final : public Card {
public:
  BloodswornPledge0348() : Card(348, "Bloodsworn Pledge",
                                "Grant two allies +0|+3.",
                                "",
                                "01FR010", CardRegion::FRELJORD, CardRarity::RARE,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_BURST,
                                4, 0, 0, true, {}) {}
};
class NavoriHighwayman0349 final : public Card {
public:
  NavoriHighwayman0349() : Card(349, "Navori Highwayman",
                                "When I'm summoned, summon a Navori Brigand with my stats.",
                                "",
                                "01IO052", CardRegion::IONIA, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_NONE,
                                2, 1, 2, true, {343}) {}
};
class TheEmpyrean0350 final : public Card {
public:
  TheEmpyrean0350() : Card(350, "The Empyrean",
                           "",
                           "",
                           "01IO030", CardRegion::IONIA, CardRarity::EPIC,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_ELUSIVE,
                           7, 6, 5, true, {}) {}
};
class BackToBack0351 final : public Card {
public:
  BackToBack0351() : Card(351, "Back to Back",
                          "Give two allies +3|+3 this round.",
                          "",
                          "01DE041", CardRegion::DEMACIA, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_BURST,
                          6, 0, 0, true, {}) {}
};
class Vladimir0352 final : public Card {
public:
  Vladimir0352() : Card(352, "Vladimir",
                        "Attack: For each other attacking ally, deal 1 to it and 1 to the enemy Nexus.",
                        "You've had 6+ allies survive damage.",
                        "01NX006", CardRegion::NOXUS, CardRarity::CHAMPION,
                        CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                        K_NONE,
                        5, 5, 5, true, {163, 301, 380}) {}
};
class FlashOfBrilliance0353 final : public Card {
public:
  FlashOfBrilliance0353() : Card(353, "Flash of Brilliance",
                                 "Create a random spell that costs 6+ in hand.\nRefill your spell mana.",
                                 "",
                                 "01PZ016", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                 K_BURST,
                                 3, 0, 0, true, {}) {}
};
class EzrealsMysticShot0354 final : public Card {
public:
  EzrealsMysticShot0354() : Card(354, "Ezreal's Mystic Shot",
                                 "Deal 2 to anything.\nShuffle an Ezreal into your deck.",
                                 "",
                                 "01PZ036T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                                 CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                 K_FAST,
                                 2, 0, 0, false, {134, 93}) {}
};
class ForDemacia0355 final : public Card {
public:
  ForDemacia0355() : Card(355, "For Demacia!",
                          "Give allies +3|+3 this round.",
                          "",
                          "01DE035", CardRegion::DEMACIA, CardRarity::RARE,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_SLOW,
                          6, 0, 0, true, {}) {}
};
class BasiliskRider0356 final : public Card {
public:
  BasiliskRider0356() : Card(356, "Basilisk Rider",
                             "Allegiance: Grant me +1|+1 and Overwhelm.",
                             "",
                             "01NX008", CardRegion::NOXUS, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             4, 5, 2, true, {}) {}
};
class GreengladeCaretaker0357 final : public Card {
public:
  GreengladeCaretaker0357() : Card(357, "Greenglade Caretaker",
                                   "When an ally gets Barrier, grant me +2|+0.",
                                   "",
                                   "01IO019", CardRegion::IONIA, CardRarity::COMMON,
                                   CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                   K_NONE,
                                   1, 1, 2, true, {}) {}
};
class RadiantStrike0358 final : public Card {
public:
  RadiantStrike0358() : Card(358, "Radiant Strike",
                             "Give an ally +1|+1 this round.",
                             "",
                             "01DE018", CardRegion::DEMACIA, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_BURST,
                             1, 0, 0, true, {}) {}
};
class InsightOfAges0359 final : public Card {
public:
  InsightOfAges0359() : Card(359, "Insight of Ages",
                             "Create another random spell in hand.\nEnlightened: Create 2 instead.",
                             "",
                             "01IO054", CardRegion::IONIA, CardRarity::RARE,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_BURST,
                             2, 0, 0, true, {359}) {}
};
class TheRekindler0360 final : public Card {
public:
  TheRekindler0360() : Card(360, "The Rekindler",
                            "When I'm summoned, revive the Strongest dead allied champion.",
                            "",
                            "01SI020", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_NONE,
                            7, 4, 4, true, {}) {}
};
class FlashFreeze0361 final : public Card {
public:
  FlashFreeze0361() : Card(361, "Flash Freeze",
                           "Frostbite an enemy.",
                           "",
                           "01FR001", CardRegion::FRELJORD, CardRarity::RARE,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_BURST,
                           3, 0, 0, true, {}) {}
};
class ChumpWhump0362 final : public Card {
public:
  ChumpWhump0362() : Card(362, "Chump Whump",
                          "When I'm summoned, create two Mushroom Cloud in hand.",
                          "",
                          "01PZ058", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          4, 4, 3, true, {104, 295}) {}
};
class Hecarim0363 final : public Card {
public:
  Hecarim0363() : Card(363, "Hecarim",
                       "Attack: Summon 2 attacking Spectral Rider.",
                       "You've attacked with 7+ Ephemeral allies.",
                       "01SI042", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
                       CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                       K_OVERWHELM,
                       6, 4, 5, true, {57, 245, 159}) {}
};
class BrightsteelProtector0364 final : public Card {
public:
  BrightsteelProtector0364() : Card(364, "Brightsteel Protector",
                                    "Play: Give an ally Barrier.",
                                    "",
                                    "01DE009", CardRegion::DEMACIA, CardRarity::COMMON,
                                    CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                    K_NONE,
                                    2, 3, 2, true, {}) {}
};
class WitheringWail0365 final : public Card {
public:
  WitheringWail0365() : Card(365, "Withering Wail",
                             "Deal 1 to all enemy units. Heal your Nexus 3.",
                             "",
                             "01SI029", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_FAST,
                             5, 0, 0, true, {}) {}
};
class AmateurAeronaut0366 final : public Card {
public:
  AmateurAeronaut0366() : Card(366, "Amateur Aeronaut",
                               "",
                               "",
                               "01PZ009", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_ELUSIVE,
                               3, 2, 3, true, {}) {}
};
class ShensStandUnited0367 final : public Card {
public:
  ShensStandUnited0367() : Card(367, "Shen's Stand United",
                                "Swap two allies. Give them Barrier.\nShuffle a Shen into your deck.",
                                "",
                                "01IO032T2", CardRegion::IONIA, CardRarity::NONE,
                                CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                                K_BURST,
                                6, 0, 0, false, {266, 151}) {}
};
class RhasaTheSunderer0368 final : public Card {
public:
  RhasaTheSunderer0368() : Card(368, "Rhasa the Sunderer",
                                "Play: Kill the 2 Weakest enemies if an ally died this round.",
                                "",
                                "01SI035", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_FEARSOME,
                                8, 7, 5, true, {90}) {}
};
class Anivia0369 final : public Card {
public:
  Anivia0369() : Card(369, "Anivia",
                      "Attack: Deal 1 to all enemies.\nLast Breath: Revive me transformed into Eggnivia.",
                      "You're Enlightened.",
                      "01FR024", CardRegion::FRELJORD, CardRarity::CHAMPION,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_LAST_BREATH,
                      7, 2, 4, true, {5, 327, 132, 385}) {}
};
class AffectionatePoro0370 final : public Card {
public:
  AffectionatePoro0370() : Card(370, "Affectionate Poro",
                                "",
                                "",
                                "01NX034", CardRegion::NOXUS, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                                K_CHALLENGER,
                                1, 1, 1, true, {}) {}
};
class IntrepidMariner0371 final : public Card {
public:
  IntrepidMariner0371() : Card(371, "Intrepid Mariner",
                               "Support: Give my supported ally Elusive this round.",
                               "",
                               "01PZ042", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               2, 1, 3, true, {}) {}
};
class Lux0372 final : public Card {
public:
  Lux0372() : Card(372, "Lux",
                   "",
                   "I've seen you cast 6+ mana of spells. When I level up, create a Final Spark in hand.",
                   "01DE042", CardRegion::DEMACIA, CardRarity::CHAMPION,
                   CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                   K_BARRIER,
                   6, 4, 5, true, {187, 18, 221}) {}
};
class FiorasRiposte0373 final : public Card {
public:
  FiorasRiposte0373() : Card(373, "Fiora's Riposte",
                             "Give an ally +3|+0 and Barrier this round.\nShuffle a Fiora into your deck.",
                             "",
                             "01DE045T2", CardRegion::DEMACIA, CardRarity::NONE,
                             CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
                             K_BURST,
                             4, 0, 0, false, {46, 183}) {}
};
class DravensBiggestFan0374 final : public Card {
public:
  DravensBiggestFan0374() : Card(374,
                                 "Draven's Biggest Fan",
                                 "When I'm summoned, move Draven to the top of your deck if you don't have him in hand or in play.",
                                 "",
                                 "01NX035",
                                 CardRegion::NOXUS,
                                 CardRarity::COMMON,
                                 CardType::UNIT,
                                 CardSupType::NONE,
                                 CardSubType::NONE,
                                 K_NONE,
                                 1,
                                 2,
                                 1,
                                 true,
                                 {130}) {}

  void onSummon(Action &action) const override;
};
class GlacialStorm0375 final : public Card {
public:
  GlacialStorm0375() : Card(375, "Glacial Storm",
                            "Deal 2 to all enemies.",
                            "",
                            "01FR024T5", CardRegion::FRELJORD, CardRarity::COMMON,
                            CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
                            K_SKILL,
                            0, 0, 0, false, {369, 327}) {}
};
class RecklessTrifarian0376 final : public Card {
public:
  RecklessTrifarian0376() : Card(376, "Reckless Trifarian",
                                 "",
                                 "",
                                 "01NX026", CardRegion::NOXUS, CardRarity::COMMON,
                                 CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                 K_CANT_BLOCK,
                                 3, 5, 4, true, {}) {}
};
class DarkwaterScourge0377 final : public Card {
public:
  DarkwaterScourge0377() : Card(377, "Darkwater Scourge",
                                "",
                                "",
                                "01SI004", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                K_EPHEMERAL | K_LIFESTEAL,
                                3, 5, 5, true, {}) {}
};
class SteelTempest0378 final : public Card {
public:
  SteelTempest0378() : Card(378, "Steel Tempest",
                            "Stun an attacking enemy.",
                            "",
                            "01IO046", CardRegion::IONIA, CardRarity::RARE,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_FAST,
                            3, 0, 0, true, {}) {}
};
class CithriaOfCloudfield0379 final : public Card {
public:
  CithriaOfCloudfield0379() : Card(379, "Cithria of Cloudfield",
                                   "",
                                   "",
                                   "01DE039", CardRegion::DEMACIA, CardRarity::COMMON,
                                   CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                                   K_NONE,
                                   1, 2, 2, true, {}) {}
};
class VladimirsTransfusion0380 final : public Card {
public:
  VladimirsTransfusion0380() : Card(380,
                                    "Vladimir's Transfusion",
                                    "Deal 1 to an ally and give another ally +2|+2 this round.\nShuffle a Vladimir into deck.",
                                    "",
                                    "01NX006T3",
                                    CardRegion::NOXUS,
                                    CardRarity::NONE,
                                    CardType::SPELL,
                                    CardSupType::CHAMPION,
                                    CardSubType::NONE,
                                    K_BURST,
                                    2,
                                    0,
                                    0,
                                    false,
                                    {352, 301}) {}
};
class FluftOfPoros0381 final : public Card {
public:
  FluftOfPoros0381() : Card(381, "Fluft of Poros",
                            "Last Breath: Summon a Heart of the Fluft.",
                            "",
                            "01FR043T1", CardRegion::FRELJORD, CardRarity::NONE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
                            K_LAST_BREATH,
                            6, 4, 4, false, {217}) {}
};
class FleetfeatherTracker0382 final : public Card {
public:
  FleetfeatherTracker0382() : Card(382, "Fleetfeather Tracker",
                                   "When you summon another ally, grant me Challenger.",
                                   "",
                                   "01DE029", CardRegion::DEMACIA, CardRarity::COMMON,
                                   CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                   K_NONE,
                                   1, 2, 1, true, {}) {}
};
class SpiritsRefuge0383 final : public Card {
public:
  SpiritsRefuge0383() : Card(383, "Spirit's Refuge",
                             "Give an ally Barrier and Lifesteal this round.",
                             "",
                             "01IO037", CardRegion::IONIA, CardRarity::COMMON,
                             CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                             K_BURST,
                             4, 0, 0, true, {}) {}
};
class Mk4ApexTurret0384 final : public Card {
public:
  Mk4ApexTurret0384() : Card(384, "Mk4: Apex Turret",
                             "",
                             "",
                             "01PZ056T8", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
                             K_FEARSOME,
                             4, 4, 1, false, {}) {}
};
class Eggnivia0385 final : public Card {
public:
  Eggnivia0385() : Card(385, "Eggnivia",
                        "",
                        "Round Start: If you're Enlightened, transform me back into Anivia and Level Up.",
                        "01FR024T4", CardRegion::FRELJORD, CardRarity::NONE,
                        CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                        K_NONE,
                        1, 0, 2, false, {369, 327, 132}) {}
};
class SumpworksMap0386 final : public Card {
public:
  SumpworksMap0386() : Card(386, "Sumpworks Map",
                            "Grant an ally Elusive.",
                            "",
                            "01PZ026", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_BURST,
                            2, 0, 0, true, {}) {}
};
class Might0387 final : public Card {
public:
  Might0387() : Card(387, "Might",
                     "Give an ally +3|+0 and Overwhelm this round.",
                     "",
                     "01NX019", CardRegion::NOXUS, CardRarity::COMMON,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_BURST,
                     3, 0, 0, true, {}) {}
};
class VanguardCavalry0388 final : public Card {
public:
  VanguardCavalry0388() : Card(388, "Vanguard Cavalry",
                               "",
                               "",
                               "01DE028", CardRegion::DEMACIA, CardRarity::COMMON,
                               CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                               K_TOUGH,
                               5, 5, 5, true, {}) {}
};
class Rivershaper0389 final : public Card {
public:
  Rivershaper0389() : Card(389, "Rivershaper",
                           "Strike: Draw a spell.",
                           "",
                           "01IO043", CardRegion::IONIA, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_NONE,
                           3, 2, 1, true, {}) {}
};
class ChempunkPickpocket0390 final : public Card {
public:
  ChempunkPickpocket0390() : Card(390, "Chempunk Pickpocket",
                                  "Nexus Strike: Create in hand an exact copy of a random spell from the enemy's deck.",
                                  "",
                                  "01PZ043", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
                                  CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                  K_NONE,
                                  2, 3, 2, true, {}) {}
};
class StarlitSeer0391 final : public Card {
public:
  StarlitSeer0391() : Card(391, "Starlit Seer",
                           "When you cast a spell, grant the top ally in your deck +1|+1.",
                           "",
                           "01FR032", CardRegion::FRELJORD, CardRarity::RARE,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_IMBUE,
                           2, 2, 2, true, {}) {}
};
class SolitaryMonk0392 final : public Card {
public:
  SolitaryMonk0392() : Card(392, "Solitary Monk",
                            "When I'm summoned, Recall all other allies.",
                            "",
                            "01IO038", CardRegion::IONIA, CardRarity::RARE,
                            CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                            K_ELUSIVE,
                            3, 4, 3, true, {}) {}
};
class SheWhoWanders0393 final : public Card {
public:
  SheWhoWanders0393() : Card(393, "She Who Wanders",
                             "Play: Obliterate ALL followers with 4 or less Power in play and in hands.",
                             "",
                             "01FR052", CardRegion::FRELJORD, CardRarity::EPIC,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             10, 10, 10, true, {238}) {}
};
class TallTales0394 final : public Card {
public:
  TallTales0394() : Card(394, "Tall Tales",
                         "If you have a Yeti, summon an Enraged Yeti. Otherwise, create one on top of your deck.",
                         "",
                         "01FR051", CardRegion::FRELJORD, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_SLOW,
                         3, 0, 0, true, {103}) {}
};
class NoxianGuillotine0395 final : public Card {
public:
  NoxianGuillotine0395() : Card(395, "Noxian Guillotine",
                                "Kill a damaged unit to create a Fleeting  in hand.",
                                "",
                                "01NX022", CardRegion::NOXUS, CardRarity::RARE,
                                CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                K_FAST,
                                3, 0, 0, true, {}) {}
};
class CausticCask0396 final : public Card {
public:
  CausticCask0396() : Card(396, "Caustic Cask",
                           "Last Breath: Deal 1 to EACH Nexus.",
                           "",
                           "01PZ047", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
                           CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                           K_LAST_BREATH | K_EPHEMERAL,
                           0, 0, 1, true, {}) {}
};
class WardensPrey0397 final : public Card {
public:
  WardensPrey0397() : Card(397,
                           "Warden's Prey",
                           "Last Breath: Create in hand another Last Breath follower from any region that costs 3 or less.",
                           "",
                           "01SI026",
                           CardRegion::SHADOW_ISLES,
                           CardRarity::COMMON,
                           CardType::UNIT,
                           CardSupType::NONE,
                           CardSubType::NONE,
                           K_LAST_BREATH,
                           1,
                           1,
                           1,
                           true,
                           {}) {}
};
class DisciplineOfForce0398 final : public Card {
public:
  DisciplineOfForce0398() : Card(398, "Discipline of Force",
                                 "Give an ally +3|+0 this round.",
                                 "",
                                 "01IO012T1", CardRegion::IONIA, CardRarity::NONE,
                                 CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                                 K_BURST,
                                 3, 0, 0, false, {}) {}
};
class VanguardRedeemer0399 final : public Card {
public:
  VanguardRedeemer0399() : Card(399, "Vanguard Redeemer",
                                "When I'm summoned, draw a unit if an ally died this round.",
                                "",
                                "01DE054", CardRegion::DEMACIA, CardRarity::COMMON,
                                CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                                K_NONE,
                                3, 3, 3, true, {}) {}
};
class KarmasInsightOfAges0400 final : public Card {
public:
  KarmasInsightOfAges0400() : Card(400,
                                   "Karma's Insight of Ages",
                                   "Create another random spell in hand.\nEnlightened: Create 2 instead.\nShuffle a Karma into your deck.",
                                   "",
                                   "01IO041T2",
                                   CardRegion::IONIA,
                                   CardRarity::NONE,
                                   CardType::SPELL,
                                   CardSupType::CHAMPION,
                                   CardSubType::NONE,
                                   K_BURST,
                                   2,
                                   0,
                                   0,
                                   false,
                                   {271, 41, 359}) {}
};
class Shadowshift0401 final : public Card {
public:
  Shadowshift0401() : Card(401, "Shadowshift",
                           "Recall an ally to summon a Living Shadow in its place.",
                           "",
                           "01IO039", CardRegion::IONIA, CardRarity::COMMON,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_FAST,
                           3, 0, 0, true, {287}) {}
};
class CrimsonAwakener0402 final : public Card {
public:
  CrimsonAwakener0402() : Card(402, "Crimson Awakener",
                               "When I'm summoned, deal 1 to all other allies.",
                               "",
                               "01NX032", CardRegion::NOXUS, CardRarity::RARE,
                               CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                               K_NONE,
                               4, 5, 5, true, {}) {}
};
class MageseekerInvestigator0403 final : public Card {
public:
  MageseekerInvestigator0403() : Card(403, "Mageseeker Investigator",
                                      "Create a Detain once you've cast a 6+ cost spell this game.",
                                      "",
                                      "01DE023", CardRegion::DEMACIA, CardRarity::COMMON,
                                      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                                      K_NONE,
                                      3, 3, 3, true, {65}) {}
};
class KatoTheArm0404 final : public Card {
public:
  KatoTheArm0404() : Card(404, "Kato The Arm",
                          "Support: Give my supported ally +3|+0 and Overwhelm this round.",
                          "",
                          "01NX024", CardRegion::NOXUS, CardRarity::EPIC,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_NONE,
                          5, 5, 3, true, {}) {}
};
class VileFeast0405 final : public Card {
public:
  VileFeast0405() : Card(405, "Vile Feast",
                         "Drain 1 from a unit to summon a Spiderling.",
                         "",
                         "01SI040", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
                         CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                         K_FAST,
                         2, 0, 0, true, {110}) {}
};
class TheyWhoEndure0406 final : public Card {
public:
  TheyWhoEndure0406() : Card(406, "They Who Endure",
                             "When I'm summoned, grant me +1|+1 for each ally that has died.",
                             "",
                             "01FR034", CardRegion::FRELJORD, CardRarity::RARE,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_OVERWHELM,
                             6, 1, 1, true, {}) {}
};
class CithriaTheBold0407 final : public Card {
public:
  CithriaTheBold0407() : Card(407, "Cithria the Bold",
                              "Attack: Give other battling allies +1|+1 and Fearsome this round.",
                              "",
                              "01DE051", CardRegion::DEMACIA, CardRarity::EPIC,
                              CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
                              K_NONE,
                              6, 6, 6, true, {}) {}
};
class YoneWindchaser0408 final : public Card {
public:
  YoneWindchaser0408() : Card(408, "Yone, Windchaser",
                              "Play: Stun 2 enemies.",
                              "",
                              "01IO056", CardRegion::IONIA, CardRarity::RARE,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_NONE,
                              7, 6, 6, true, {194}) {}
};
class KiGuardian0409 final : public Card {
public:
  KiGuardian0409() : Card(409, "Ki Guardian",
                          "Grant Barrier to an ally in hand. \nDraw 1.",
                          "",
                          "01IO055", CardRegion::IONIA, CardRarity::COMMON,
                          CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                          K_BURST,
                          2, 0, 0, true, {}) {}
};
class RedoubledValor0410 final : public Card {
public:
  RedoubledValor0410() : Card(410, "Redoubled Valor",
                              "Fully heal an ally, then double its Power and Health.",
                              "",
                              "01DE044", CardRegion::DEMACIA, CardRarity::RARE,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_SLOW,
                              6, 0, 0, true, {}) {}
};
class TheRuination0411 final : public Card {
public:
  TheRuination0411() : Card(411, "The Ruination",
                            "Kill ALL units.",
                            "",
                            "01SI015", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
                            CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                            K_SLOW,
                            9, 0, 0, true, {}) {}
};
class Thresh0412 final : public Card {
public:
  Thresh0412() : Card(412, "Thresh",
                      "The first time I attack this game, summon another attacking champion from your deck or hand.",
                      "",
                      "01SI052T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
                      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
                      K_CHALLENGER,
                      5, 4, 7, false, {169, 141}) {}
};
class Guile0413 final : public Card {
public:
  Guile0413() : Card(413, "Guile",
                     "Stun an enemy.",
                     "",
                     "01NX049", CardRegion::NOXUS, CardRarity::COMMON,
                     CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                     K_SLOW,
                     1, 0, 0, true, {}) {}

  bool castable(const Action &action) const override;
  void onCast(Action &action) const override;
};
class BabblingBjerg0414 final : public Card {
public:
  BabblingBjerg0414() : Card(414, "Babbling Bjerg",
                             "When I'm summoned, draw a unit with 5+ Power.",
                             "",
                             "01FR007", CardRegion::FRELJORD, CardRarity::COMMON,
                             CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                             K_NONE,
                             4, 3, 3, true, {}) {}
};
class Garen0415 final : public Card {
public:
  Garen0415() : Card(415, "Garen",
                     "",
                     "I've struck twice.",
                     "01DE012", CardRegion::DEMACIA, CardRarity::CHAMPION,
                     CardType::UNIT, CardSupType::CHAMPION, CardSubType::ELITE,
                     K_REGENERATION,
                     5, 5, 5, true, {42, 144}) {}
};
class SpinningAxe0416 final : public Card {
public:
  SpinningAxe0416() : Card(416, "Spinning Axe",
                           "To play, discard 1.\nGive an ally +1|+0 this round.",
                           "",
                           "01NX020T1", CardRegion::NOXUS, CardRarity::NONE,
                           CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                           K_BURST,
                           0, 0, 0, false, {130, 1}) {}
};
class AvarosanSentry0417 final : public Card {
public:
  AvarosanSentry0417() : Card(417, "Avarosan Sentry",
                              "Last Breath: Draw 1.",
                              "",
                              "01FR003", CardRegion::FRELJORD, CardRarity::COMMON,
                              CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                              K_LAST_BREATH,
                              2, 2, 1, true, {}) {}
};
class FadingMemories0419 final : public Card {
public:
  FadingMemories0419() : Card(419, "Fading Memories",
                              "Pick a follower. Create an Ephemeral copy of it in hand.",
                              "",
                              "01SI047", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                              CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
                              K_BURST,
                              0, 0, 0, true, {}) {}
};
class Soulgorger0418 final : public Card {
public:
  Soulgorger0418() : Card(418, "Soulgorger",
                          "",
                          "",
                          "01SI055", CardRegion::SHADOW_ISLES, CardRarity::RARE,
                          CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
                          K_LIFESTEAL,
                          6, 3, 7, true, {}) {}
};

#endif //RUNESIM_CARDSET01_H
