//
//
// Generate by Python
//

#include "gallery.h"

void init_cardset01() {

  GALLERY[0] = new Card(
      0, "Discipline of Fortitude",
      "Give an ally +0|+3 this round.",
      "",
      "01IO012T2", CardRegion::IONIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, false);

  GALLERY[1] = new Card(
      1, "Draven",
      "Play or Strike: Create 2 Spinning Axe in hand.",
      "",
      "01NX020T3", CardRegion::NOXUS, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK | K_OVERWHELM,
      3, 4, 4, false);

  GALLERY[2] = new Card(
      2, "Dawnspeakers",
      "Round End: Grant other allies +1|+1 if an ally died this round.",
      "",
      "01DE031", CardRegion::DEMACIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 1, 4, true);

  GALLERY[3] = new Card(
      3, "Jinx's Get Excited!",
      "To play, discard 1. Deal 3 to anything.\nShuffle a Jinx into your deck.",
      "",
      "01PZ040T3", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      3, 0, 0, false);

  GALLERY[4] = new Card(
      4, "Glacial Storm",
      "Deal 1 to all enemies and the enemy Nexus.",
      "",
      "01FR024T2", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[5] = new Card(
      5, "Teemo",
      "Nexus Strike: Double the Poison Puffcaps in the enemy deck.",
      "",
      "01PZ008T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_ELUSIVE,
      1, 2, 2, false);

  GALLERY[6] = new Card(
      6, "Lucian",
      "",
      "I've seen 4+ allies or an allied Senna, Sentinel of Light die.",
      "01DE022", CardRegion::DEMACIA, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      2, 3, 2, true);

  GALLERY[7] = new Card(
      7, "Yasuo",
      "When you Stun or Recall an enemy, I strike it.",
      "",
      "01IO015T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      4, 5, 5, false);

  GALLERY[8] = new Card(
      8, "Heimerdinger",
      "When you cast a spell, create a Fleeting Turret in hand with equal cost. It costs 0 this round.",
      "I've seen you summon 12+ Power of Turrets.",
      "01PZ056", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_IMBUE,
      5, 1, 3, true);

  GALLERY[9] = new Card(
      9, "Keeper of Masks",
      "When I'm summoned, give other allies +1|+0 this round.",
      "",
      "01IO020", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 3, true);

  GALLERY[10] = new Card(
      10, "Tryndamere's Battle Fury",
      "Grant an ally +8|+4.\nShuffle a Tryndamere into your deck.",
      "",
      "01FR039T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      8, 0, 0, false);

  GALLERY[11] = new Card(
      11, "Augmented Experimenter",
      "Play: Discard your hand. Draw 3. Deal 3 to an enemy unit.",
      "",
      "01PZ013", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      6, 3, 3, true);

  GALLERY[12] = new Card(
      12, "Mobilize",
      "Reduce the cost of allies in hand by 1.",
      "",
      "01DE019", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[13] = new Card(
      13, "Culling Strike",
      "Kill a unit with 3 or less Power.",
      "",
      "01NX004", CardRegion::NOXUS, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[14] = new Card(
      14, "Parade Electrorig",
      "Support: Shuffle 4 copies of the supported ally into your deck.",
      "",
      "01PZ007", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 4, true);

  GALLERY[15] = new Card(
      15, "Heimerdinger",
      "When you cast a spell, create a Fleeting Turret in hand with equal cost. Grant it +1|+1 and it costs 0 this round.",
      "",
      "01PZ056T10", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_IMBUE,
      5, 2, 4, false);

  GALLERY[16] = new Card(
      16, "Phantom Prankster",
      "When another ally dies, deal 1 to the enemy Nexus.",
      "",
      "01SI038", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 0, 3, true);

  GALLERY[17] = new Card(
      17, "Lux's Prismatic Barrier",
      "Give an ally Barrier this round.\nShuffle a Lux into your deck.",
      "",
      "01DE042T1", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      3, 0, 0, false);

  GALLERY[18] = new Card(
      18, "Academy Prodigy",
      "",
      "",
      "01PZ018", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_QUICK_ATTACK,
      2, 3, 1, true);

  GALLERY[19] = new Card(
      19, "Herald of Spring",
      "Support: Give my supported ally Lifesteal this round.",
      "",
      "01IO045", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 2, true);

  GALLERY[20] = new Card(
      20, "Fae Bladetwirler",
      "When you Stun or Recall a unit, grant me +2|+0.",
      "",
      "01IO008", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_QUICK_ATTACK,
      2, 1, 3, true);

  GALLERY[21] = new Card(
      21, "Crimson Curator",
      "When I survive damage, create a random Crimson unit in your hand.",
      "",
      "01NX048", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 3, 3, true);

  GALLERY[22] = new Card(
      22, "Iceborn Legacy",
      "Grant an ally and all allied copies of it everywhere +2|+2.",
      "",
      "01FR006", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, true);

  GALLERY[23] = new Card(
      23, "Ghost",
      "Give an ally Elusive this round.",
      "",
      "01IO022", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[24] = new Card(
      24, "Omen Hawk",
      "When I'm summoned, grant the top 2 allies in your deck +1|+1.",
      "",
      "01FR022", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 1, 1, true);

  GALLERY[25] = new Card(
      25, "Harsh Winds",
      "Frostbite 2 enemies. ",
      "",
      "01FR042", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      6, 0, 0, true);

  GALLERY[26] = new Card(
      26, "Glimpse Beyond",
      "Kill an ally to draw 2.",
      "",
      "01SI049", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      2, 0, 0, true);

  GALLERY[27] = new Card(
      27, "Elise's Crawling Sensation",
      "If an ally died this round, summon 2 Spiderlings.\nShuffle a Elise into your deck.",
      "",
      "01SI053T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_SLOW,
      1, 0, 0, false);

  GALLERY[28] = new Card(
      28, "Braum",
      "",
      "I've survived 10 total damage.",
      "01FR009", CardRegion::FRELJORD, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_CHALLENGER | K_REGENERATION,
      3, 0, 5, true);

  GALLERY[29] = new Card(
      29, "Ancient Crocolith",
      "To play me, kill 2 allies.",
      "",
      "01SI057", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 7, 7, true);

  GALLERY[30] = new Card(
      30, "Swiftwing Lancer",
      "LastBreath: Create a random Elite in hand.",
      "",
      "01DE010", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH | K_CHALLENGER,
      5, 5, 4, true);

  GALLERY[31] = new Card(
      31, "Soul Shepherd",
      "When you summon an Ephemeral ally, grant it +1|+1.",
      "",
      "01SI023", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 3, true);

  GALLERY[32] = new Card(
      32, "Eager Apprentice",
      "When I'm summoned, refill 2 spell mana.",
      "",
      "01PZ019", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 1, true);

  GALLERY[33] = new Card(
      33, "Darius",
      "",
      "I see the enemy Nexus has 10 or less Health.",
      "01NX038", CardRegion::NOXUS, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_OVERWHELM,
      6, 6, 5, true);

  GALLERY[34] = new Card(
      34, "Kinkou Lifeblade",
      "",
      "",
      "01IO040", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LIFESTEAL | K_ELUSIVE,
      4, 2, 2, true);

  GALLERY[35] = new Card(
      35, "Rimefang Wolf",
      "Strike: If I struck a unit with 0 Power, kill it.",
      "",
      "01FR018", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CHALLENGER,
      3, 3, 2, true);

  GALLERY[36] = new Card(
      36, "Vanguard Defender",
      "",
      "",
      "01DE020", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_TOUGH,
      2, 2, 2, true);

  GALLERY[37] = new Card(
      37, "Battlesmith",
      "When you summon an Elite, grant it +1|+1.",
      "",
      "01DE034", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 2, true);

  GALLERY[38] = new Card(
      38, "Tianna Crownguard",
      "When I'm summoned, Rally.",
      "",
      "01DE002", CardRegion::DEMACIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_TOUGH,
      8, 7, 7, true);

  GALLERY[39] = new Card(
      39, "Arachnoid Host",
      "When I'm summoned, grant other Spider allies +2|+0.",
      "",
      "01NX023", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
      K_NONE,
      5, 5, 3, true);

  GALLERY[40] = new Card(
      40, "Karma",
      "When you play a spell, cast it again on the same targets.",
      "",
      "01IO041T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_IMBUE,
      5, 5, 4, false);

  GALLERY[41] = new Card(
      41, "Garen",
      "Round Start: Rally.",
      "",
      "01DE012T1", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::ELITE,
      K_REGENERATION,
      5, 6, 6, false);

  GALLERY[42] = new Card(
      42, "Stand Alone",
      "If you have exactly 1 ally, grant it +3|+3.",
      "",
      "01DE017", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[43] = new Card(
      43, "Jinx",
      "",
      "I see your hand is empty.",
      "01PZ040", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      4, 4, 3, true);

  GALLERY[44] = new Card(
      44, "Decisive Maneuver",
      "Stun an enemy. Give all allies +2|+0 this round.",
      "",
      "01NX013", CardRegion::NOXUS, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      5, 0, 0, true);

  GALLERY[45] = new Card(
      45, "Fiora",
      "",
      "I've killed 2 enemies.",
      "01DE045", CardRegion::DEMACIA, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_CHALLENGER,
      3, 3, 3, true);

  GALLERY[46] = new Card(
      46, "Puffcap Peddler",
      "When you cast a spell, plant 3 Poison Puffcaps on random cards in the enemy deck.",
      "",
      "01PZ025", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_IMBUE,
      3, 3, 3, true);

  GALLERY[47] = new Card(
      47, "Brightsteel Formation",
      "Play or Attack: Give all allies Barrier this round.",
      "",
      "01DE052", CardRegion::DEMACIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      9, 9, 9, true);

  GALLERY[48] = new Card(
      48, "Super Mega Death Rocket!",
      "Deal 4 to the enemy nexus and 1 to all other enemies. Fleeting.",
      "",
      "01PZ040T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW | K_FLEETING,
      2, 0, 0, false);

  GALLERY[49] = new Card(
      49, "Elise",
      "Attack: Summon an attacking Spiderling.",
      "Round Start: You have 3+ other Spiders.",
      "01SI053", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::SPIDER,
      K_FEARSOME,
      2, 2, 3, true);

  GALLERY[50] = new Card(
      50, "Relentless Pursuit",
      "Rally.",
      "",
      "01DE021", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[51] = new Card(
      51, "Magnum Opus",
      "Obliterate the top 5 cards of your deck to deal 1 to all enemies for each spell obliterated.",
      "",
      "01PZ048T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[52] = new Card(
      52, "Paralyzing Bite",
      "Stun an enemy.",
      "",
      "01NX046T1", CardRegion::NOXUS, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[53] = new Card(
      53, "Transfusion",
      "Deal 1 to an ally to give another ally +2|+2 this round.",
      "",
      "01NX047", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      2, 0, 0, true);

  GALLERY[54] = new Card(
      54, "Onslaught of Shadows",
      "Summon 2 Spectral Riders.",
      "",
      "01SI010", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      2, 0, 0, true);

  GALLERY[55] = new Card(
      55, "Legion Saboteur",
      "Attack: Deal 1 to the enemy Nexus.",
      "",
      "01NX040", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 2, 1, true);

  GALLERY[56] = new Card(
      56, "Hecarim",
      "Ephemeral allies have +3|+0.\nAttack: Summon 2 attacking Spectral Riders.",
      "",
      "01SI042T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_OVERWHELM,
      6, 5, 6, false);

  GALLERY[57] = new Card(
      57, "Scrap Scuttler",
      "",
      "",
      "01PZ032", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 1, 1, false);

  GALLERY[58] = new Card(
      58, "Zed",
      "Attack: Summon an attacking Living Shadow with my stats and keywords.",
      "",
      "01IO009T2", CardRegion::IONIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      3, 4, 3, false);

  GALLERY[59] = new Card(
      59, "Vilemaw",
      "",
      "",
      "01SI027T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
      K_FEARSOME,
      3, 6, 6, false);

  GALLERY[60] = new Card(
      60, "Greenglade Elder",
      "When I'm summoned, grant allies in hand +1|+1.",
      "",
      "01IO014", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 1, 1, true);

  GALLERY[61] = new Card(
      61, "Darius",
      "",
      "",
      "01NX038T2", CardRegion::NOXUS, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_OVERWHELM,
      6, 10, 5, false);

  GALLERY[62] = new Card(
      62, "Lucian's Relentless Pursuit",
      "Rally.\nShuffle a Lucian into your deck.",
      "",
      "01DE022T2", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      3, 0, 0, false);

  GALLERY[63] = new Card(
      63, "Jury-Rig",
      "When cast or discarded, summon a Scrap Scuttler.",
      "",
      "01PZ028", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[64] = new Card(
      64, "Detain",
      "An ally Captures a unit.",
      "",
      "01DE025", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      5, 0, 0, true);

  GALLERY[65] = new Card(
      65, "Avarosan Marksman",
      "Play: Deal 1 to an enemy unit.",
      "",
      "01FR036", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 3, 1, true);

  GALLERY[66] = new Card(
      66, "Nimble Poro",
      "",
      "",
      "01IO005", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_QUICK_ATTACK,
      1, 1, 1, true);

  GALLERY[67] = new Card(
      67, "Scarthane Steffen",
      "When I survive damage, grant me +3|+0.",
      "",
      "01FR045", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 4, true);

  GALLERY[68] = new Card(
      68, "Navori Conspirator",
      "To play me, Recall an ally.",
      "",
      "01IO044", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE,
      2, 2, 2, true);

  GALLERY[69] = new Card(
      69, "Jubilant Poro",
      "When I'm summoned, create in hand another random 1 cost Poro from any region.",
      "",
      "01FR008T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_NONE,
      1, 1, 1, false);

  GALLERY[70] = new Card(
      70, "Shatter",
      "Deal 4 to an enemy unit if it has 0 Power. Otherwise, Frostbite it.",
      "",
      "01FR055", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      2, 0, 0, true);

  GALLERY[71] = new Card(
      71, "Crystal Arrow",
      "Frostbite an enemy and all other enemies with 3 or less Health. Draw 1.",
      "",
      "01FR038T3", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      2, 0, 0, false);

  GALLERY[72] = new Card(
      72, "Arachnoid Sentry",
      "Play: Stun an enemy.",
      "",
      "01NX046", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
      K_NONE,
      3, 3, 2, true);

  GALLERY[73] = new Card(
      73, "Rising Spell Force",
      "Give an ally +4|+0 and Quick Attack this round.",
      "",
      "01PZ050", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[74] = new Card(
      74, "Mk3: Floor-B-Gone",
      "",
      "",
      "01PZ056T6", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_ELUSIVE,
      3, 3, 1, false);

  GALLERY[75] = new Card(
      75, "Jeweled Protector",
      "Play: Grant an ally in hand +3|+3.",
      "",
      "01IO023", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 4, 4, true);

  GALLERY[76] = new Card(
      76, "Cursed Keeper",
      "Last Breath: Summon an Escaped Abomination.",
      "",
      "01SI048", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CANT_BLOCK | K_LAST_BREATH,
      2, 1, 1, true);

  GALLERY[77] = new Card(
      77, "Undermine",
      "Deal 2 to the enemy Nexus.",
      "",
      "01PZ054T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[78] = new Card(
      78, "Impersonate",
      "Pick a follower. Transform me into an exact copy of it.",
      "",
      "01PZ030T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[79] = new Card(
      79, "Brothers' Bond",
      "Grant two allies +2|+0.",
      "",
      "01NX025", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      2, 0, 0, true);

  GALLERY[80] = new Card(
      80, "House Spider",
      "When I'm summoned, summon a Spiderling.",
      "",
      "01NX055", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
      K_NONE,
      2, 2, 2, true);

  GALLERY[81] = new Card(
      81, "Judgment",
      "A battling ally strikes all battling enemies.",
      "",
      "01DE007", CardRegion::DEMACIA, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      8, 0, 0, true);

  GALLERY[82] = new Card(
      82, "Used Cask Salesman",
      "When I'm summoned, summon 2 Caustic Casks.",
      "",
      "01PZ017", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 3, 2, true);

  GALLERY[83] = new Card(
      83, "Sump Dredger",
      "To play me, discard 1.",
      "",
      "01PZ038", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 4, 3, true);

  GALLERY[84] = new Card(
      84, "Mk2: Evolution Turret",
      "",
      "",
      "01PZ056T7", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_TOUGH,
      2, 2, 1, false);

  GALLERY[85] = new Card(
      85, "Scribe of Sorrows",
      "When I'm summoned, create a copy in hand of an ally that died this game.",
      "",
      "01SI018", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 3, true);

  GALLERY[86] = new Card(
      86, "Teemo's Mushroom Cloud",
      "Plant 5 Poison Puffcaps on random cards in the enemy deck.\nShuffle a Teemo into your deck.",
      "",
      "01PZ008T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      1, 0, 0, false);

  GALLERY[87] = new Card(
      87,
      "Kalista",
      "Each round, the first time I attack revive an attacking Ephemeral copy of the Strongest dead allied follower. This round, we're bonded and it takes damage for me.",
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
      false);

  GALLERY[88] = new Card(
      88, "Entreat",
      "Draw a champion.",
      "",
      "01FR029", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      2, 0, 0, true);

  GALLERY[89] = new Card(
      89, "Night Harvest",
      "Kill the 2 Weakest enemies if an ally died this round.",
      "",
      "01SI035T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[90] = new Card(
      90, "Kalista",
      "",
      "I've seen 3+ allies die.",
      "01SI030", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_FEARSOME,
      3, 4, 3, true);

  GALLERY[91] = new Card(
      91, "Sown Seeds",
      "Grant allies in hand +1|+0.",
      "",
      "01IO029", CardRegion::IONIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      2, 0, 0, true);

  GALLERY[92] = new Card(
      92, "Ezreal",
      "Nexus Strike: Create a Fleeting Mystic Shot in hand.\nWhen you cast a spell, deal 2 to the enemy Nexus.",
      "",
      "01PZ036T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_ELUSIVE | K_IMBUE,
      3, 2, 4, false);

  GALLERY[93] = new Card(
      93, "Unscarred Reaver",
      "When I survive damage, grant me +3|+0.",
      "",
      "01FR035", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 0, 3, true);

  GALLERY[94] = new Card(
      94, "Death Mark",
      "Remove Ephemeral from an ally to grant it to an enemy.",
      "",
      "01IO003", CardRegion::IONIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[95] = new Card(
      95, "Jae Medarda",
      "When I'm targeted, draw 1.",
      "",
      "01PZ035", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE,
      8, 6, 6, true);

  GALLERY[96] = new Card(
      96, "Shady Character",
      "Play: Pick a follower. Transform me into an exact copy of it.",
      "",
      "01PZ030", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 1, 3, true);

  GALLERY[97] = new Card(
      97, "Shadow Flare",
      "Grant ALL battling followers Ephemeral.",
      "",
      "01IO047", CardRegion::IONIA, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      6, 0, 0, true);

  GALLERY[98] = new Card(
      98, "Corina Veraza",
      "Play: Obliterate the top 5 cards of your deck to deal 1 to all enemies for each spell obliterated.",
      "",
      "01PZ048", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      9, 6, 6, true);

  GALLERY[99] = new Card(
      99, "Catalyst of Aeons",
      "Get an empty mana gem and heal your Nexus 3.",
      "",
      "01FR012", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      5, 0, 0, true);

  GALLERY[100] = new Card(
      100, "Draven's Whirling Death",
      "A battling ally strikes a battling enemy.\nShuffle a Draven into your deck.",
      "",
      "01NX020T2", CardRegion::NOXUS, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      3, 0, 0, false);

  GALLERY[101] = new Card(
      101, "Crimson Disciple",
      "When I survive damage, deal 2 to the enemy Nexus.",
      "",
      "01NX030", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 3, true);

  GALLERY[102] = new Card(
      102, "Enraged Yeti",
      "",
      "",
      "01FR028", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
      K_NONE,
      1, 5, 5, false);

  GALLERY[103] = new Card(
      103, "Mushroom Cloud",
      "Plant 5 Poison Puffcaps on random cards in the enemy deck.",
      "",
      "01PZ010", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[104] = new Card(
      104, "Arena Battlecaster",
      "Attack: Give other battling allies +1|+0 this round.",
      "",
      "01NX007", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 2, true);

  GALLERY[105] = new Card(
      105, "Zaunite Urchin",
      "To play me, discard 1.\nLast Breath: Draw 1.",
      "",
      "01PZ045", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH,
      1, 2, 1, true);

  GALLERY[106] = new Card(
      106, "Inspiring Mentor",
      "Play: Grant an ally in hand +1|+0.",
      "",
      "01IO026", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 1, 2, true);

  GALLERY[107] = new Card(
      107, "Reckless Research",
      "Discard your hand. Draw 3. Deal 3 to an enemy unit.",
      "",
      "01PZ013T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[108] = new Card(
      108, "Back Alley Barkeep",
      "When I'm summoned, create a random card in hand for each Back Alley Barkeep you've summoned this game. ",
      "",
      "01PZ002", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 3, 2, true);

  GALLERY[109] = new Card(
      109, "Spiderling",
      "",
      "",
      "01SI002", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
      K_NONE,
      1, 1, 1, false);

  GALLERY[110] = new Card(
      110, "Scuttlegeist",
      "Reduce my cost by 1 for each ally that died this game.",
      "",
      "01SI005", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_FEARSOME,
      10, 5, 5, true);

  GALLERY[111] = new Card(
      111, "Ashe",
      "Attack: Frostbite the Strongest enemy.",
      "You Frostbite 5+ enemies. When I level up, create a Crystal Arrow on top of deck.",
      "01FR038", CardRegion::FRELJORD, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_NONE,
      4, 5, 3, true);

  GALLERY[112] = new Card(
      112, "Laurent Duelist",
      "Play: Give an ally Challenger this round.",
      "",
      "01DE055", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 4, 2, true);

  GALLERY[113] = new Card(
      113, "Trueshot Barrage",
      "Deal 3 to an enemy or the enemy Nexus, 2 to another, and 1 to another.",
      "",
      "01PZ004", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      7, 0, 0, true);

  GALLERY[114] = new Card(
      114, "Mageseeker Inciter",
      "Grant me +2|+2 once you've cast a 6+ cost spell this game.",
      "",
      "01DE048", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 4, 3, true);

  GALLERY[115] = new Card(
      115, "Dawn and Dusk",
      "Summon 2 exact copies of an ally. They're Ephemeral.",
      "",
      "01IO024", CardRegion::IONIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      6, 0, 0, true);

  GALLERY[116] = new Card(
      116, "Spider Queen Elise",
      "Other Spider allies have Challenger and Fearsome.",
      "",
      "01SI053T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::SPIDER,
      K_FEARSOME | K_CHALLENGER,
      2, 4, 3, false);

  GALLERY[117] = new Card(
      117, "Vanguard Bannerman",
      "Allegiance: Grant other allies +1|+1.",
      "",
      "01DE001", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      4, 3, 3, true);

  GALLERY[118] = new Card(
      118, "Daring Poro",
      "",
      "",
      "01PZ020", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_ELUSIVE,
      1, 1, 1, true);

  GALLERY[119] = new Card(
      119, "Legion Marauder",
      "Attack: Grant allied Legion Marauders everywhere +1|+1.",
      "",
      "01NX021", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 3, 2, true);

  GALLERY[120] = new Card(
      120, "Avalanche",
      "Deal 2 to ALL units.",
      "",
      "01FR020", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      4, 0, 0, true);

  GALLERY[121] = new Card(
      121, "Counterfeit Copies",
      "Pick a card in hand. Shuffle 4 exact copies of it into your deck.",
      "",
      "01PZ046", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[122] = new Card(
      122, "Scaled Snapper",
      "Play: Grant me +3|+0 or +0|+3.",
      "",
      "01IO028", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 2, true);

  GALLERY[123] = new Card(
      123, "Yeti Yearling",
      "Last Breath: Shuffle 2 Enraged Yetis into your deck.",
      "",
      "01FR014", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
      K_LAST_BREATH,
      1, 1, 2, true);

  GALLERY[124] = new Card(
      124, "Sinister Poro",
      "",
      "",
      "01SI037", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_FEARSOME,
      1, 1, 1, true);

  GALLERY[125] = new Card(
      125, "Crowd Favorite",
      "When I'm summoned, grant me +1|+1 for each other ally you have.",
      "",
      "01NX009", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      4, 2, 1, true);

  GALLERY[126] = new Card(
      126, "Shadow Assassin",
      "When I'm summoned, draw 1.",
      "",
      "01IO057", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE,
      3, 2, 2, true);

  GALLERY[127] = new Card(
      127, "Scaled Snapper",
      "",
      "",
      "01IO028T2", CardRegion::IONIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 5, 2, false);

  GALLERY[128] = new Card(
      128, "Boomcrew Rookie",
      "Attack: Deal 2 to the enemy Nexus.",
      "",
      "01PZ054", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 1, 4, true);

  GALLERY[129] = new Card(
      129, "Draven",
      "Play or Strike: Create a Spinning Axe in hand.",
      "I've struck with two total Spinning Axe.",
      "01NX020", CardRegion::NOXUS, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      3, 3, 3, true);

  GALLERY[130] = new Card(
      130, "Mystic Shot",
      "Deal 2 to anything.",
      "",
      "01PZ052", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      2, 0, 0, true);

  GALLERY[131] = new Card(
      131, "Anivia's Harsh Winds",
      "Frostbite 2 enemies.\nShuffle an Anivia into your deck.",
      "",
      "01FR024T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      6, 0, 0, false);

  GALLERY[132] = new Card(
      132, "War Chefs",
      "Support: Give my supported ally +1|+1 this round.",
      "",
      "01DE043", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 3, true);

  GALLERY[133] = new Card(
      133, "Ezreal",
      "Nexus Strike: Create a Fleeting Mystic Shot in hand.",
      "You've targeted enemy units 8+ times.",
      "01PZ036", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_ELUSIVE,
      3, 1, 3, true);

  GALLERY[134] = new Card(
      134, "Scaled Snapper",
      "",
      "",
      "01IO028T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 5, false);

  GALLERY[135] = new Card(
      135, "Escaped Abomination",
      "",
      "",
      "01SI048T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 4, 4, false);

  GALLERY[136] = new Card(
      136, "T-Hex",
      "",
      "",
      "01PZ015", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_NONE,
      8, 8, 8, false);

  GALLERY[137] = new Card(
      137, "Reckoning",
      "If you have a 5+ Power ally, kill ALL units with 4 or less Power.",
      "",
      "01NX053", CardRegion::NOXUS, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      6, 0, 0, true);

  GALLERY[138] = new Card(
      138, "Hextech Transmogulator",
      "Transform a follower into another follower.",
      "",
      "01PZ005", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      6, 0, 0, true);

  GALLERY[139] = new Card(
      139, "Darius's Decimate",
      "Deal 4 to the enemy Nexus.\nShuffle a Darius into your deck.",
      "",
      "01NX038T1", CardRegion::NOXUS, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, false);

  GALLERY[140] = new Card(
      140, "Thresh",
      "",
      "I've seen 6+ units die.",
      "01SI052", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_CHALLENGER,
      5, 3, 6, true);

  GALLERY[141] = new Card(
      141, "Lucian",
      "Each round, the first time an ally dies, Rally.",
      "",
      "01DE022T1", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_DOUBLE_ATTACK,
      2, 4, 3, false);

  GALLERY[142] = new Card(
      142, "Plucky Poro",
      "",
      "",
      "01DE049", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_TOUGH,
      1, 1, 1, true);

  GALLERY[143] = new Card(
      143, "Garen's Judgment",
      "A battling ally strikes all battling enemies.\nShuffle a Garen into your deck.",
      "",
      "01DE012T2", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      8, 0, 0, false);

  GALLERY[144] = new Card(
      144, "Commander Ledros",
      "Play: Deal damage to the enemy Nexus equal to half its Health, rounded up.\nLast Breath: Return me to hand.",
      "",
      "01SI033", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_FEARSOME | K_LAST_BREATH,
      9, 9, 6, true);

  GALLERY[145] = new Card(
      145, "Midenstokke Henchmen",
      "Nexus Strike: Summon an exact copy of me.",
      "",
      "01PZ021", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 5, 3, true);

  GALLERY[146] = new Card(
      146, "The Harrowing",
      "Revive the 6 Strongest allies that died this game and grant them Ephemeral.",
      "",
      "01SI003", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      10, 0, 0, true);

  GALLERY[147] = new Card(
      147, "The Undying",
      "Last Breath: Revive me next Round Start and grant me +1|+1 for each time I've died. ",
      "",
      "01SI041", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CANT_BLOCK | K_LAST_BREATH,
      3, 2, 2, true);

  GALLERY[148] = new Card(
      148, "Sabotage",
      "Deal 1 to the enemy Nexus.",
      "",
      "01NX040T1", CardRegion::NOXUS, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[149] = new Card(
      149, "Stalking Wolf",
      "When I'm summoned, the enemy summons a Snow Hare.",
      "",
      "01FR049", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CHALLENGER,
      2, 3, 2, true);

  GALLERY[150] = new Card(
      150, "Shen",
      "Support: Give my supported ally Barrier.\nWhen an ally gets Barrier, give it +3|+0 this round.",
      "",
      "01IO032T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_NONE,
      4, 3, 6, false);

  GALLERY[151] = new Card(
      151, "Laurent Chevalier",
      "Strike: Create another random Challenger follower in hand.",
      "",
      "01DE053", CardRegion::DEMACIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CHALLENGER,
      4, 3, 1, true);

  GALLERY[152] = new Card(
      152, "Absorb Soul",
      "Drain 4 from an ally unit.",
      "",
      "01SI045", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      1, 0, 0, true);

  GALLERY[153] = new Card(
      153, "Avarosan Outriders",
      "Allegiance: Grant the top ally in your deck +3|+3 and Overwhelm.",
      "",
      "01FR037", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      4, 3, 3, true);

  GALLERY[154] = new Card(
      154, "Crawling Sensation",
      "If an ally died this round, summon 2 Spiderlings.",
      "",
      "01SI036", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      1, 0, 0, true);

  GALLERY[155] = new Card(
      155, "Braum",
      "When I survive damage, summon a Mighty Poro.",
      "",
      "01FR009T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_CHALLENGER | K_REGENERATION,
      3, 0, 7, false);

  GALLERY[156] = new Card(
      156, "Shadow Fiend",
      "",
      "",
      "01IO013", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_EPHEMERAL,
      1, 4, 3, true);

  GALLERY[157] = new Card(
      157, "Statikk Shock",
      "Deal 1 to an enemy or the enemy Nexus, and 1 to another.\nDraw 1.",
      "",
      "01PZ031", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      4, 0, 0, true);

  GALLERY[158] = new Card(
      158, "Spectral Rider",
      "",
      "",
      "01SI024", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_EPHEMERAL,
      2, 2, 2, false);

  GALLERY[159] = new Card(
      159, "Tortured Prodigy",
      "When an ally dies, refill your spell mana.",
      "",
      "01SI051", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 4, 4, true);

  GALLERY[160] = new Card(
      160, "Alpha Wildclaw",
      "",
      "",
      "01FR026", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      6, 7, 6, true);

  GALLERY[161] = new Card(
      161, "Intimidating Roar",
      "Stun all enemies with 4 or less Power.",
      "",
      "01NX054", CardRegion::NOXUS, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, true);

  GALLERY[162] = new Card(
      162, "Crimson Pact",
      "For each attacking ally other than Vladimir, deal 1 to it and 1 to the enemy Nexus.",
      "",
      "01NX006T2", CardRegion::NOXUS, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[163] = new Card(
      163, "Golden Crushbot",
      "",
      "",
      "01PZ059", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 5, true);

  GALLERY[164] = new Card(
      164, "Legion Veteran",
      "When another ally survives damage, grant it +1|+0.",
      "",
      "01NX029", CardRegion::NOXUS, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 4, 5, true);

  GALLERY[165] = new Card(
      165, "Brittle Steel",
      "Frostbite an enemy with 3 or less Health.",
      "",
      "01FR030", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[166] = new Card(
      166, "Shiraza the Blade",
      "I deal double damage to the Nexus.",
      "",
      "01NX014", CardRegion::NOXUS, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 3, 3, true);

  GALLERY[167] = new Card(
      167, "Oblivious Islander",
      "Play: Grant an ally in hand Ephemeral and reduce its cost by 1.",
      "",
      "01SI012", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 2, 1, true);

  GALLERY[168] = new Card(
      168, "Thresh's The Box",
      "Deal 3 to each enemy that was summoned this round.\nShuffle a Thresh into your deck.",
      "",
      "01SI052T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      4, 0, 0, false);

  GALLERY[169] = new Card(
      169, "Rummage",
      "Discard 2 to draw 2.\nIf you have exactly 1 other card in hand, discard 1 to draw 1.",
      "",
      "01PZ001", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[170] = new Card(
      170, "Katarina",
      "Play: Rally.\nStrike: Recall me.",
      "",
      "01NX042T2", CardRegion::NOXUS, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      4, 4, 3, false);

  GALLERY[171] = new Card(
      171, "Scarmother Vrynna",
      "When I survive damage, grant me +3|+0.",
      "",
      "01FR013", CardRegion::FRELJORD, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      6, 3, 8, true);

  GALLERY[172] = new Card(
      172, "Scrapdash Assembly",
      "Summon 2 Scrap Scuttlers.",
      "",
      "01PZ057", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      2, 0, 0, true);

  GALLERY[173] = new Card(
      173, "Iron Harbinger",
      "Attack: Grant me +1|+0 for each Ephemeral ally in play.",
      "",
      "01SI031", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_FEARSOME,
      3, 2, 4, true);

  GALLERY[174] = new Card(
      174, "Black Spear",
      "If an ally died this round, deal 3 to a unit.",
      "",
      "01SI034", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[175] = new Card(
      175, "Hapless Aristocrat",
      "Last Breath: Summon a Spiderling.",
      "",
      "01SI043", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH,
      1, 1, 1, true);

  GALLERY[176] = new Card(
      176, "Rush",
      "Give an ally +1|+0 and Quick Attack this round.",
      "",
      "01IO018", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[177] = new Card(
      177, "Heimerdinger's Progress Day!",
      "Draw 3, then reduce those cards' costs by 1.\nShuffle a Heimerdinger into your deck.",
      "",
      "01PZ056T3", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      8, 0, 0, false);

  GALLERY[178] = new Card(
      178, "Winter's Breath",
      "Kill all enemies with 0 Power, then Frostbite all enemies.",
      "",
      "01FR019", CardRegion::FRELJORD, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      7, 0, 0, true);

  GALLERY[179] = new Card(
      179, "Remembrance",
      "Costs 1 less for each ally that died this round. Summon a random 5 cost follower from Demacia.",
      "",
      "01DE033", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      6, 0, 0, true);

  GALLERY[180] = new Card(
      180, "Stirred Spirits",
      "Support: Grant my supported ally +2|+0 and Ephemeral.",
      "",
      "01SI009", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 3, 2, true);

  GALLERY[181] = new Card(
      181, "Thermogenic Beam",
      "To play, spend all your mana.\nDeal that much to a unit.",
      "",
      "01PZ027", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      0, 0, 0, true);

  GALLERY[182] = new Card(
      182, "Fiora",
      "When I've killed 4 enemies and survived, you win the game. ",
      "",
      "01DE045T1", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_CHALLENGER,
      3, 4, 4, false);

  GALLERY[183] = new Card(
      183, "Avarosan Hearthguard",
      "When I'm summoned, grant allies in your deck +1|+1.",
      "",
      "01FR041", CardRegion::FRELJORD, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 5, 5, true);

  GALLERY[184] = new Card(
      184, "Captain Farron",
      "Play: Replace your hand with Decimates.",
      "",
      "01NX051", CardRegion::NOXUS, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      8, 8, 8, true);

  GALLERY[185] = new Card(
      185, "Poro Herder",
      "When I'm summoned, draw 2 Poros if you have a Poro ally.",
      "",
      "01FR025", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 3, 4, true);

  GALLERY[186] = new Card(
      186, "Lux",
      "When I see you cast 6+ mana of spells, create a Final Spark in hand. ",
      "",
      "01DE042T2", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_BARRIER,
      6, 5, 6, false);

  GALLERY[187] = new Card(
      187, "Legion Rearguard",
      "",
      "",
      "01NX012", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CANT_BLOCK,
      1, 3, 2, true);

  GALLERY[188] = new Card(
      188, "Mageseeker Conservator",
      "Last Breath: Create in hand a 6+ cost spell from a region other than Demacia.",
      "",
      "01DE024", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH,
      1, 1, 1, true);

  GALLERY[189] = new Card(
      189, "Unleashed Spirit",
      "",
      "",
      "01SI007T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_EPHEMERAL,
      1, 1, 1, false);

  GALLERY[190] = new Card(
      190, "Vanguard Firstblade",
      "Attack: Grant me +2|+2.",
      "",
      "01DE056", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      4, 2, 2, true);

  GALLERY[191] = new Card(
      191, "Blade's Edge",
      "Deal 1 to anything.",
      "",
      "01NX043", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      1, 0, 0, true);

  GALLERY[192] = new Card(
      192, "Silverwing Diver",
      "",
      "",
      "01DE030", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE | K_TOUGH,
      4, 2, 3, true);

  GALLERY[193] = new Card(
      193, "Staggering Strikes",
      "Stun 2 enemies.",
      "",
      "01IO056T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[194] = new Card(
      194, "Kalista's Black Spear",
      "If an ally died this round, deal 3 to a unit.\nShuffle a Kalista into your deck.",
      "",
      "01SI030T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      3, 0, 0, false);

  GALLERY[195] = new Card(
      195, "Legion Grenadier",
      "Last Breath: Deal 2 to the enemy Nexus.",
      "",
      "01NX037", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH,
      2, 3, 1, true);

  GALLERY[196] = new Card(
      196, "Decimate",
      "Deal 4 to the enemy Nexus.",
      "",
      "01NX002", CardRegion::NOXUS, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, true);

  GALLERY[197] = new Card(
      197, "Zephyr Sage",
      "Play: Create an exact copy of a card in hand.",
      "",
      "01IO016", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      6, 4, 4, true);

  GALLERY[198] = new Card(
      198, "Frenzied Skitterer",
      "When I'm summoned, give other allied Spiders +1|+0 and enemies -1|-0 this round.",
      "",
      "01SI056", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
      K_FEARSOME,
      3, 3, 2, true);

  GALLERY[199] = new Card(
      199, "Legion General",
      "When I'm summoned, grant me +1|+1 for each unit you've Stunned or Recalled this game. ",
      "",
      "01NX010", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_FEARSOME,
      5, 4, 4, true);

  GALLERY[200] = new Card(
      200, "Legion Drummer",
      "Support: Give my supported ally Quick Attack this round.",
      "",
      "01NX017", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 3, 2, true);

  GALLERY[201] = new Card(
      201, "Silverwing Vanguard",
      "When I'm summoned, summon an exact copy of me.",
      "",
      "01DE004", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_CHALLENGER,
      4, 2, 1, true);

  GALLERY[202] = new Card(
      202, "Vengeance",
      "Kill a unit.",
      "",
      "01SI001", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      7, 0, 0, true);

  GALLERY[203] = new Card(
      203, "Laurent Protege",
      "",
      "",
      "01DE011", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CHALLENGER,
      3, 2, 4, true);

  GALLERY[204] = new Card(
      204, "Greenglade Lookout",
      "Strike: Reduce the cost of the most expensive unit in your hand by 1.",
      "",
      "01IO036", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 1, true);

  GALLERY[205] = new Card(
      205, "Astute Academic",
      "When you draw a card, give me +1|+0 this round.",
      "",
      "01PZ055", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 1, 2, true);

  GALLERY[206] = new Card(
      206, "Teemo",
      "Nexus Strike: Plant 5 Poison Puffcaps on random cards in the enemy deck.",
      "You've planted 15+ Poison Puffcaps.",
      "01PZ008", CardRegion::PILTOVER_N_ZAUN, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_ELUSIVE,
      1, 1, 1, true);

  GALLERY[207] = new Card(
      207, "Mk5: Rocket Blaster",
      "",
      "",
      "01PZ056T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_QUICK_ATTACK,
      5, 5, 1, false);

  GALLERY[208] = new Card(
      208, "Unlicensed Innovation",
      "Summon an Illegal Contraption.",
      "",
      "01PZ014", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      6, 0, 0, true);

  GALLERY[209] = new Card(
      209, "Succession",
      "Summon a Dauntless Vanguard.",
      "",
      "01DE047", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      3, 0, 0, true);

  GALLERY[210] = new Card(
      210, "Arena Bookie",
      "Round Start: Discard your lowest cost card to draw 1.",
      "",
      "01NX003", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 1, true);

  GALLERY[211] = new Card(
      211, "Whirling Death",
      "A battling ally strikes a battling enemy.",
      "",
      "01NX011", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[212] = new Card(
      212, "Vanguard Lookout",
      "",
      "",
      "01DE046", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      2, 1, 4, true);

  GALLERY[213] = new Card(
      213, "Scarmaiden Reaver",
      "",
      "",
      "01FR054", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM | K_REGENERATION,
      5, 4, 5, true);

  GALLERY[214] = new Card(
      214, "Purify",
      "Silence a follower.",
      "",
      "01DE050", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      2, 0, 0, true);

  GALLERY[215] = new Card(
      215, "Tarkaz's Fury",
      "Deal 1 to ALL battling units.",
      "",
      "01FR021T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[216] = new Card(
      216, "Heart of the Fluft",
      "Play: Combine all of our Poros into a Fluft of Poros, it gains their stats and keywords.",
      "",
      "01FR043", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_NONE,
      6, 4, 4, true);

  GALLERY[217] = new Card(
      217, "Snow Hare",
      "",
      "",
      "01FR049T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 1, 1, false);

  GALLERY[218] = new Card(
      218, "Wyrding Stones",
      "Round Start: Get an extra mana gem this round.",
      "",
      "01FR033", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 0, 4, true);

  GALLERY[219] = new Card(
      219, "The Box",
      "Deal 3 to each enemy that was summoned this round.",
      "",
      "01SI019", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      4, 0, 0, true);

  GALLERY[220] = new Card(
      220, "Final Spark",
      "Deal 4 to an enemy unit. Fleeting.",
      "",
      "01DE042T3", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW | K_OVERWHELM | K_FLEETING,
      0, 0, 0, false);

  GALLERY[221] = new Card(
      221, "Minah Swiftfoot",
      "Play: Recall 3 enemies.",
      "",
      "01IO033", CardRegion::IONIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      9, 6, 5, true);

  GALLERY[222] = new Card(
      222, "Vision",
      "When cast or discarded, grant allies +1|+0.",
      "",
      "01NX039", CardRegion::NOXUS, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[223] = new Card(
      223, "Icevale Archer",
      "Play: Frostbite an enemy.",
      "",
      "01FR011", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 3, 1, true);

  GALLERY[224] = new Card(
      224, "Sumpsnipe Scavenger",
      "Allegiance: Create a Sumpworks Map in hand. It costs 0 this round.",
      "",
      "01PZ034", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 4, 3, true);

  GALLERY[225] = new Card(
      225, "Elixir of Iron",
      "Give an ally +0|+2 this round.",
      "",
      "01FR004", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[226] = new Card(
      226, "Kindly Tavernkeeper",
      "Play: Heal an ally or your Nexus 3.",
      "",
      "01FR050", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 3, true);

  GALLERY[227] = new Card(
      227, "Illegal Contraption",
      "",
      "",
      "01PZ014T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      6, 5, 5, false);

  GALLERY[228] = new Card(
      228, "Trifarian Shieldbreaker",
      "",
      "",
      "01NX041", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_FEARSOME,
      5, 6, 5, true);

  GALLERY[229] = new Card(
      229, "Tryndamere",
      "",
      "",
      "01FR039T2", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_OVERWHELM | K_FEARSOME,
      8, 9, 9, false);

  GALLERY[230] = new Card(
      230, "Ashe",
      "Attack: Frostbite the Strongest enemy.\nEnemies with 0 Power can't block.",
      "",
      "01FR038T2", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_NONE,
      4, 6, 4, false);

  GALLERY[231] = new Card(
      231, "Accelerated Purrsuit",
      "If you've played 15 cards with different names this game, summon Catastrophe. ",
      "",
      "01PZ060", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, false);

  GALLERY[232] = new Card(
      232, "Yasuo",
      "When you Stun or Recall an enemy, I deal 2 to it.",
      "You Stun or Recall 5+ units.",
      "01IO015", CardRegion::IONIA, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      4, 4, 4, true);

  GALLERY[233] = new Card(
      233, "Ritual of Renewal",
      "Heal an ally or your Nexus 7. Draw 1.",
      "",
      "01IO001", CardRegion::IONIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      7, 0, 0, true);

  GALLERY[234] = new Card(
      234, "Dauntless Vanguard",
      "",
      "",
      "01DE016", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      3, 3, 3, false);

  GALLERY[235] = new Card(
      235, "Stand United",
      "Swap two allies. Give them Barrier this round.",
      "",
      "01IO010", CardRegion::IONIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      6, 0, 0, true);

  GALLERY[236] = new Card(
      236, "Twin Disciplines",
      "Give an ally +3|+0 or +0|+3 this round.",
      "",
      "01IO012", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[237] = new Card(
      237, "Balesight",
      "Obliterate ALL followers with 4 or less Power in play and in hands.",
      "",
      "01FR052T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[238] = new Card(
      238, "Mageseeker Persuader",
      "Grant me +1|+1 and Challenger once you've cast a 6+ cost spell this game.",
      "",
      "01DE040", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 3, 2, true);

  GALLERY[239] = new Card(
      239, "Minotaur Reckoner",
      "Round Start: Stun the Weakest enemy.",
      "",
      "01NX036", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      6, 6, 6, true);

  GALLERY[240] = new Card(
      240, "Battering Ram",
      "Attack: Grant me +4|+0.",
      "",
      "01NX044", CardRegion::NOXUS, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      6, 0, 12, true);

  GALLERY[241] = new Card(
      241, "Vanguard Squire",
      "When you summon an Elite, reduce my cost by 1.",
      "",
      "01DE036", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      4, 3, 3, true);

  GALLERY[242] = new Card(
      242, "Ravenous Butcher",
      "To play me, kill an ally.",
      "",
      "01SI011", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      0, 3, 2, true);

  GALLERY[243] = new Card(
      243, "Zed's Shadowshift",
      "Recall an ally to summon a Living Shadow in its place.\nShuffle a Zed into your deck.",
      "",
      "01IO009T3", CardRegion::IONIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      3, 0, 0, false);

  GALLERY[244] = new Card(
      244, "Hecarim's Onslaught of Shadows",
      "Summon 2 Spectral Riders.\nShuffle a Hecarim into your deck.",
      "",
      "01SI042T2", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_SLOW,
      2, 0, 0, false);

  GALLERY[245] = new Card(
      245, "Riposte",
      "Give an ally +3|+0 and Barrier this round.",
      "",
      "01DE037", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      4, 0, 0, true);

  GALLERY[246] = new Card(
      246, "Mk7: Armored Stomper",
      "",
      "",
      "01PZ056T5", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_BARRIER,
      7, 7, 1, false);

  GALLERY[247] = new Card(
      247, "Fresh Offerings",
      "If 3+ allies have died this round, summon Vilemaw.\n",
      "",
      "01SI027", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      3, 0, 0, true);

  GALLERY[248] = new Card(
      248, "Assembly Bot",
      "When you cast a spell, grant me +1|+1.",
      "",
      "01PZ003", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_IMBUE,
      3, 1, 1, true);

  GALLERY[249] = new Card(
      249, "Windfarer Hatchling",
      "When I'm summoned, give other allies +2|+2 this round.",
      "",
      "01IO021", CardRegion::IONIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE,
      7, 4, 2, true);

  GALLERY[250] = new Card(
      250, "Poro Snax",
      "Grant Poro allies everywhere +1|+1.",
      "",
      "01FR016", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[251] = new Card(
      251, "Crimson Aristocrat",
      "Play: Deal 1 to an ally and grant it +2|+0.",
      "",
      "01NX005", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 2, true);

  GALLERY[252] = new Card(
      252, "Jinx",
      "Round Start: Draw 1.\nEach round, the first time you empty your hand, create a Super Mega Death Rocket! in hand.",
      "",
      "01PZ040T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      4, 5, 4, false);

  GALLERY[253] = new Card(
      253, "Battle Fury",
      "Grant an ally +8|+4.",
      "",
      "01FR005", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      8, 0, 0, true);

  GALLERY[254] = new Card(
      254, "Reinforcements",
      "Summon 2 Dauntless Vanguards, then grant Elite allies +1|+1.",
      "",
      "01DE014", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      8, 0, 0, true);

  GALLERY[255] = new Card(
      255, "Chain Vest",
      "Grant an ally Tough.",
      "",
      "01DE013", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[256] = new Card(
      256, "Zed",
      "Attack: Summon an attacking Living Shadow with my stats.",
      "My shadows and I have struck the enemy Nexus twice.",
      "01IO009", CardRegion::IONIA, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      3, 3, 2, true);

  GALLERY[257] = new Card(
      257, "Katarina's Death Lotus",
      "Deal 1 to ALL battling units.\nShuffle a Katarina into your deck.",
      "",
      "01NX042T1", CardRegion::NOXUS, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      2, 0, 0, false);

  GALLERY[258] = new Card(
      258, "Trifarian Hopeful",
      "When I'm summoned, grant me +2|+0 if you have another Noxus ally.",
      "",
      "01NX016", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 3, 2, true);

  GALLERY[259] = new Card(
      259, "Braum's Take Heart",
      "Grant a damaged ally +3|+3.\nShuffle a Braum into your deck.",
      "",
      "01FR009T2", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      3, 0, 0, false);

  GALLERY[260] = new Card(
      260, "Mistwraith",
      "When I'm summoned, grant other allied Mistwraiths everywhere +1|+0.",
      "",
      "01SI014", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_FEARSOME,
      2, 2, 2, true);

  GALLERY[261] = new Card(
      261, "Elixir of Wrath",
      "Give an ally +3|+0 this round.",
      "",
      "01NX027", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[262] = new Card(
      262, "Silent Shadowseer",
      "Nexus Strike: Create a copy of me in hand.",
      "",
      "01IO027", CardRegion::IONIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE | K_EPHEMERAL,
      2, 3, 1, true);

  GALLERY[263] = new Card(
      263, "Haunted Relic",
      "Summon 3 Unleashed Spirits.",
      "",
      "01SI007", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      2, 0, 0, true);

  GALLERY[264] = new Card(
      264, "Mark of the Isles",
      "Grant an ally +2|+2 and Ephemeral.",
      "",
      "01SI022", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[265] = new Card(
      265, "Shen",
      "Support: Give my supported ally Barrier.",
      "I've seen allies gain Barrier 4+ times.",
      "01IO032", CardRegion::IONIA, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_NONE,
      4, 2, 5, true);

  GALLERY[266] = new Card(
      266, "Precious Pet",
      "",
      "",
      "01NX015", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
      K_FEARSOME,
      1, 2, 1, true);

  GALLERY[267] = new Card(
      267, "Grasp of the Undying",
      "Drain 3 from a unit.",
      "",
      "01SI054", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      5, 0, 0, true);

  GALLERY[268] = new Card(
      268, "Chempunk Shredder",
      "Play: Deal 1 to all enemy units.",
      "",
      "01PZ044", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 5, 2, true);

  GALLERY[269] = new Card(
      269, "Lonely Poro",
      "When I'm summoned, create in hand another random 1 cost Poro from any region.",
      "",
      "01FR008", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_NONE,
      1, 1, 1, true);

  GALLERY[270] = new Card(
      270, "Karma",
      "Round End: Create a random spell in hand.",
      "You're Enlightened.",
      "01IO041", CardRegion::IONIA, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_NONE,
      5, 4, 3, true);

  GALLERY[271] = new Card(
      271, "Possession",
      "Steal an enemy follower this round. (Can't play if you have 6 allies already.)",
      "",
      "01SI006", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, true);

  GALLERY[272] = new Card(
      272, "Radiant Guardian",
      "When I'm summoned, grant me Lifesteal and Tough if an ally died this round.",
      "",
      "01DE015", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 5, 5, true);

  GALLERY[273] = new Card(
      273, "Eminent Benefactor",
      "Last Breath: Create a random Epic card in hand.",
      "",
      "01PZ029", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH,
      4, 3, 3, true);

  GALLERY[274] = new Card(
      274, "Death Lotus",
      "Deal 1 to ALL battling units.",
      "",
      "01NX050", CardRegion::NOXUS, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      2, 0, 0, true);

  GALLERY[275] = new Card(
      275, "Mk0: Windup Shredder",
      "",
      "",
      "01PZ056T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_CHALLENGER,
      0, 0, 1, false);

  GALLERY[276] = new Card(
      276, "Cloud Drinker",
      "Your Burst spells cost 1 less.",
      "",
      "01IO031", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      6, 3, 5, true);

  GALLERY[277] = new Card(
      277, "Laurent Bladekeeper",
      "Play: Grant an ally +2|+2.",
      "",
      "01DE003", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 2, 3, true);

  GALLERY[278] = new Card(
      278, "Warmother's Call",
      "Summon the top ally from your deck now and EACH Round Start.",
      "",
      "01FR023", CardRegion::FRELJORD, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      12, 0, 0, true);

  GALLERY[279] = new Card(
      279, "Purrsuit of Perfection",
      "If you've played 20 cards with different names this game, summon Catastrophe. ",
      "",
      "01PZ033", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, true);

  GALLERY[280] = new Card(
      280, "Blade of Ledros",
      "Deal damage to the enemy Nexus equal to half its Health, rounded up.",
      "",
      "01SI033T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[281] = new Card(
      281, "Funsmith",
      "All of your spells and Skills deal 1 extra damage.",
      "",
      "01PZ051", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 2, 3, true);

  GALLERY[282] = new Card(
      282, "Splinter Soul",
      "Summon an exact copy of an ally. It's Ephemeral and 1|1.",
      "",
      "01SI028", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      3, 0, 0, true);

  GALLERY[283] = new Card(
      283, "Atrocity",
      "Kill an ally to deal damage equal to its Power to anything.",
      "",
      "01SI025", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      6, 0, 0, true);

  GALLERY[284] = new Card(
      284, "Yasuo's Steel Tempest",
      "Stun an attacking enemy.\nShuffle a Yasuo into your deck.",
      "",
      "01IO015T2", CardRegion::IONIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, false);

  GALLERY[285] = new Card(
      285, "Recall",
      "Recall an ally.",
      "",
      "01IO011", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      1, 0, 0, true);

  GALLERY[286] = new Card(
      286, "Living Shadow",
      "",
      "",
      "01IO009T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_EPHEMERAL,
      3, 3, 2, false);

  GALLERY[287] = new Card(
      287, "Will of Ionia",
      "Recall a unit.",
      "",
      "01IO002", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      4, 0, 0, true);

  GALLERY[288] = new Card(
      288, "Fatal Strike",
      "If you have an attacking Ephemeral ally, kill Ren Shadowblade's blocker.",
      "",
      "01IO007T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[289] = new Card(
      289, "Feral Mystic",
      "Enlightened: I have +4|+4.",
      "",
      "01FR047", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      2, 2, 2, true);

  GALLERY[290] = new Card(
      290, "Skyward Strikes",
      "Recall 3 enemies.",
      "",
      "01IO033T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[291] = new Card(
      291, "Navori Bladescout",
      "When I'm summoned, give me Elusive this round.",
      "",
      "01IO017", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 2, 1, true);

  GALLERY[292] = new Card(
      292, "Icy Yeti",
      "When I'm summoned, Frostbite enemies with 3 or less Health.",
      "",
      "01FR056", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
      K_NONE,
      7, 5, 5, true);

  GALLERY[293] = new Card(
      293, "Shunpo",
      "Deal 2 to an enemy unit, then Rally.",
      "",
      "01NX056", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, true);

  GALLERY[294] = new Card(
      294, "Poison Puffcap",
      "Deal 1 to your Nexus.",
      "",
      "01PZ022", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::TRAP, CardSupType::NONE, CardSubType::NONE,
      K_TRAP,
      0, 0, 0, false);

  GALLERY[295] = new Card(
      295, "Face-Melter",
      "Deal 1 to all enemy units.",
      "",
      "01PZ044T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[296] = new Card(
      296, "Mist's Call",
      "Revive a random ally that died this round.",
      "",
      "01SI046", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[297] = new Card(
      297, "Catastrophe",
      "",
      "",
      "01PZ033T1", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      1, 30, 30, false);

  GALLERY[298] = new Card(
      298, "Trifarian Assessor",
      "When I'm summoned, draw 1 for each 5+ Power ally you have.",
      "",
      "01NX033", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 4, 3, true);

  GALLERY[299] = new Card(
      299, "Prismatic Barrier",
      "Give an ally Barrier this round.",
      "",
      "01DE032", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[300] = new Card(
      300, "Vladimir",
      "Attack: For each other attacking ally, deal 1 to it and 1 to the enemy Nexus.",
      "",
      "01NX006T1", CardRegion::NOXUS, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_REGENERATION,
      5, 6, 6, false);

  GALLERY[301] = new Card(
      301, "Professor von Yipp",
      "When you summon a 1 cost ally, grant it +2|+2.",
      "",
      "01PZ023", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 2, 3, true);

  GALLERY[302] = new Card(
      302, "Mk1: Wrenchbot",
      "",
      "",
      "01PZ056T4", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_NONE,
      1, 1, 1, false);

  GALLERY[303] = new Card(
      303, "Tryndamere",
      "",
      "If I would die, I Level Up instead.",
      "01FR039", CardRegion::FRELJORD, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_OVERWHELM,
      8, 8, 4, true);

  GALLERY[304] = new Card(
      304, "Bull Elnuk",
      "",
      "",
      "01FR027", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELNUK,
      K_NONE,
      4, 4, 5, true);

  GALLERY[305] = new Card(
      305, "Brood Awakening",
      "Summon 3 Spiderlings, then grant Spider allies +1|+0. ",
      "",
      "01SI050", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      5, 0, 0, true);

  GALLERY[306] = new Card(
      306, "Pack Mentality",
      "Give allies +2|+2 and Overwhelm this round.",
      "",
      "01FR057", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      7, 0, 0, true);

  GALLERY[307] = new Card(
      307, "Unstable Voltician",
      "Grant me +4|+0 and Quick Attack once you've cast a 6+ cost spell this game.",
      "",
      "01PZ024", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 4, 4, true);

  GALLERY[308] = new Card(
      308, "Wraithcaller",
      "Allegiance: Summon a Mistwraith.",
      "",
      "01SI016", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 4, 3, true);

  GALLERY[309] = new Card(
      309, "Sparring Student",
      "When you summon an ally, give me +1|+1 this round.",
      "",
      "01IO042", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 1, 1, true);

  GALLERY[310] = new Card(
      310, "Ashe's Flash Freeze",
      "Frostbite an enemy.\nShuffle an Ashe into your deck.",
      "",
      "01FR038T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      3, 0, 0, false);

  GALLERY[311] = new Card(
      311, "Tarkaz the Tribeless",
      "Attack: Deal 1 to ALL battling units.",
      "",
      "01FR021", CardRegion::FRELJORD, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 5, 8, true);

  GALLERY[312] = new Card(
      312, "Greenglade Duo",
      "When you summon an ally, give me +1|+0 this round.",
      "",
      "01IO006", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE,
      2, 2, 1, true);

  GALLERY[313] = new Card(
      313, "Blood for Blood",
      "Deal 1 to an allied follower. If it survives, create a copy of it in hand.",
      "",
      "01NX052", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      2, 0, 0, true);

  GALLERY[314] = new Card(
      314, "Kinkou Wayfinder",
      "Allegiance: Summon two 1 cost allies from your deck.",
      "",
      "01IO050", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 2, 3, true);

  GALLERY[315] = new Card(
      315, "Single Combat",
      "An ally and an enemy strike each other.",
      "",
      "01DE026", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      2, 0, 0, true);

  GALLERY[316] = new Card(
      316, "Katarina",
      "Play: Create a Fleeting Blade's Edge in hand.",
      "I've struck once. When I level up, Recall me.",
      "01NX042", CardRegion::NOXUS, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_QUICK_ATTACK,
      3, 3, 2, true);

  GALLERY[317] = new Card(
      317, "Shark Chariot",
      "Last Breath: The next time an Ephemeral ally attacks, revive me attacking.",
      "",
      "01SI021", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CANT_BLOCK | K_EPHEMERAL | K_LAST_BREATH,
      2, 3, 1, true);

  GALLERY[318] = new Card(
      318, "Avarosan Trapper",
      "When I'm summoned, create an Enraged Yeti in the top 3 cards of your deck.",
      "",
      "01FR048", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 3, 3, true);

  GALLERY[319] = new Card(
      319, "Progress Day!",
      "Draw 3, then reduce those cards' costs by 1.",
      "",
      "01PZ049", CardRegion::PILTOVER_N_ZAUN, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      8, 0, 0, true);

  GALLERY[320] = new Card(
      320, "Yusari",
      "",
      "",
      "01IO048", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CHALLENGER | K_ELUSIVE,
      5, 4, 3, true);

  GALLERY[321] = new Card(
      321, "Troop of Elnuks",
      "Play: For the top 6 cards in your deck, summon each Elnuk and shuffle the rest into your deck.",
      "",
      "01FR017", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELNUK,
      K_NONE,
      5, 3, 3, true);

  GALLERY[322] = new Card(
      322, "Health Potion",
      "Heal an ally or your Nexus 3.",
      "",
      "01IO004", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[323] = new Card(
      323, "Chronicler of Ruin",
      "Play: Kill an ally, then revive it.",
      "",
      "01SI032", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 3, 3, true);

  GALLERY[324] = new Card(
      324, "Plaza Guardian",
      "Reduce my cost by 1 for each spell you've cast this game.",
      "",
      "01PZ006", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_QUICK_ATTACK,
      10, 6, 6, true);

  GALLERY[325] = new Card(
      325, "Ren Shadowblade",
      "When the enemy summons a follower, grant it Ephemeral.",
      "",
      "01IO007", CardRegion::IONIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      8, 6, 4, true);

  GALLERY[326] = new Card(
      326, "Anivia",
      "Attack: Deal 2 to all enemies and the enemy Nexus.\nLast Breath: Revive me transformed into Eggnivia.",
      "",
      "01FR024T3", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_LAST_BREATH,
      7, 3, 5, false);

  GALLERY[327] = new Card(
      327, "Ethereal Remitter",
      "Play: Kill an ally to summon a random follower from any region that costs 2 more.",
      "",
      "01SI058", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 4, 3, true);

  GALLERY[328] = new Card(
      328, "Clump of Whumps",
      "When I'm summoned, create a Mushroom Cloud in hand.",
      "",
      "01PZ053", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 2, 2, true);

  GALLERY[329] = new Card(
      329, "Emerald Awakener",
      "Enlightened: I have +4|+4.",
      "",
      "01IO053", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LIFESTEAL,
      3, 2, 2, true);

  GALLERY[330] = new Card(
      330, "Take Heart",
      "Grant a damaged ally +3|+3.",
      "",
      "01FR046", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[331] = new Card(
      331, "Savage Reckoner",
      "",
      "",
      "01NX045", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM | K_CHALLENGER,
      7, 7, 4, true);

  GALLERY[332] = new Card(
      332, "En Garde",
      "Give allies Challenger this round.",
      "",
      "01DE027", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[333] = new Card(
      333, "Spectral Matron",
      "Play: Pick an ally in hand. Summon an exact copy of it. It's Ephemeral.",
      "",
      "01SI044", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_FEARSOME,
      8, 6, 6, true);

  GALLERY[334] = new Card(
      334, "Rimetusk Shaman",
      "Round Start: Frostbite the Strongest enemy.",
      "",
      "01FR040", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 3, 3, true);

  GALLERY[335] = new Card(
      335, "Deny",
      "Stop a Fast spell, Slow spell, or Skill.",
      "",
      "01IO049", CardRegion::IONIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      4, 0, 0, true);

  GALLERY[336] = new Card(
      336, "Trifarian Gloryseeker",
      "",
      "",
      "01NX031", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CHALLENGER | K_CANT_BLOCK,
      2, 5, 1, true);

  GALLERY[337] = new Card(
      337, "Flame Chompers!",
      "When I'm discarded, summon me.",
      "",
      "01PZ012", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CHALLENGER,
      2, 0, 2, true);

  GALLERY[338] = new Card(
      338, "Ancient Yeti",
      "Round End: If I'm in hand, reduce my cost by 1.",
      "",
      "01FR031", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::YETI,
      K_OVERWHELM,
      7, 5, 5, true);

  GALLERY[339] = new Card(
      339, "Vanguard Sergeant",
      "When I'm summoned, create a For Demacia! in hand.",
      "",
      "01DE006", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      3, 3, 3, true);

  GALLERY[340] = new Card(
      340, "Bullseye",
      "Deal 1 to an enemy unit.",
      "",
      "01FR036T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[341] = new Card(
      341, "Mighty Poro",
      "",
      "",
      "01FR053", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_OVERWHELM,
      3, 3, 3, true);

  GALLERY[342] = new Card(
      342, "Navori Brigand",
      "",
      "",
      "01IO052T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 1, 2, false);

  GALLERY[343] = new Card(
      343, "Arachnoid Horror",
      "",
      "",
      "01SI039", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::SPIDER,
      K_FEARSOME,
      2, 3, 2, true);

  GALLERY[344] = new Card(
      344, "Get Excited!",
      "To play, discard 1.\nDeal 3 to anything.",
      "",
      "01PZ039", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[345] = new Card(
      345, "Mk6: Stormlobber",
      "",
      "",
      "01PZ056T9", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_OVERWHELM,
      6, 6, 1, false);

  GALLERY[346] = new Card(
      346, "Senna, Sentinel of Light",
      "The first time I see an allied Lucian die, grant me +1|+1 and Double Attack.",
      "",
      "01DE038", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_QUICK_ATTACK,
      3, 4, 2, true);

  GALLERY[347] = new Card(
      347, "Bloodsworn Pledge",
      "Grant two allies +0|+3.",
      "",
      "01FR010", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      4, 0, 0, true);

  GALLERY[348] = new Card(
      348, "Navori Highwayman",
      "When I'm summoned, summon a Navori Brigand with my stats.",
      "",
      "01IO052", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 1, 2, true);

  GALLERY[349] = new Card(
      349, "The Empyrean",
      "",
      "",
      "01IO030", CardRegion::IONIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE,
      7, 6, 5, true);

  GALLERY[350] = new Card(
      350, "Back to Back",
      "Give two allies +3|+3 this round.",
      "",
      "01DE041", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      6, 0, 0, true);

  GALLERY[351] = new Card(
      351, "Vladimir",
      "Attack: For each other attacking ally, deal 1 to it and 1 to the enemy Nexus.",
      "You've had 6+ allies survive damage.",
      "01NX006", CardRegion::NOXUS, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_NONE,
      5, 5, 5, true);

  GALLERY[352] = new Card(
      352, "Flash of Brilliance",
      "Create a random spell that costs 6+ in hand.\nRefill your spell mana.",
      "",
      "01PZ016", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[353] = new Card(
      353, "Ezreal's Mystic Shot",
      "Deal 2 to anything.\nShuffle an Ezreal into your deck.",
      "",
      "01PZ036T2", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_FAST,
      2, 0, 0, false);

  GALLERY[354] = new Card(
      354, "For Demacia!",
      "Give allies +3|+3 this round.",
      "",
      "01DE035", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      6, 0, 0, true);

  GALLERY[355] = new Card(
      355, "Basilisk Rider",
      "Allegiance: Grant me +1|+1 and Overwhelm.",
      "",
      "01NX008", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 5, 2, true);

  GALLERY[356] = new Card(
      356, "Greenglade Caretaker",
      "When an ally gets Barrier, grant me +2|+0.",
      "",
      "01IO019", CardRegion::IONIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 1, 2, true);

  GALLERY[357] = new Card(
      357, "Radiant Strike",
      "Give an ally +1|+1 this round.",
      "",
      "01DE018", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      1, 0, 0, true);

  GALLERY[358] = new Card(
      358, "Insight of Ages",
      "Create another random spell in hand.\nEnlightened: Create 2 instead.",
      "",
      "01IO054", CardRegion::IONIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      2, 0, 0, true);

  GALLERY[359] = new Card(
      359, "The Rekindler",
      "When I'm summoned, revive the Strongest dead allied champion.",
      "",
      "01SI020", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      7, 4, 4, true);

  GALLERY[360] = new Card(
      360, "Flash Freeze",
      "Frostbite an enemy.",
      "",
      "01FR001", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[361] = new Card(
      361, "Chump Whump",
      "When I'm summoned, create two Mushroom Clouds in hand.",
      "",
      "01PZ058", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 4, 3, true);

  GALLERY[362] = new Card(
      362, "Hecarim",
      "Attack: Summon 2 attacking Spectral Riders.",
      "You've attacked with 7+ Ephemeral allies.",
      "01SI042", CardRegion::SHADOW_ISLES, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_OVERWHELM,
      6, 4, 5, true);

  GALLERY[363] = new Card(
      363, "Brightsteel Protector",
      "Play: Give an ally Barrier this round.",
      "",
      "01DE009", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 3, 2, true);

  GALLERY[364] = new Card(
      364, "Withering Wail",
      "Deal 1 to all enemy units. Heal your Nexus 3.",
      "",
      "01SI029", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      5, 0, 0, true);

  GALLERY[365] = new Card(
      365, "Amateur Aeronaut",
      "",
      "",
      "01PZ009", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE,
      3, 2, 3, true);

  GALLERY[366] = new Card(
      366, "Shen's Stand United",
      "Swap two allies. Give them Barrier this round.\nShuffle a Shen into your deck.",
      "",
      "01IO032T2", CardRegion::IONIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      6, 0, 0, false);

  GALLERY[367] = new Card(
      367, "Rhasa the Sunderer",
      "Play: Kill the 2 Weakest enemies if an ally died this round.",
      "",
      "01SI035", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_FEARSOME,
      8, 7, 5, true);

  GALLERY[368] = new Card(
      368, "Anivia",
      "Attack: Deal 1 to all enemies and the enemy Nexus.\nLast Breath: Revive me transformed into Eggnivia.",
      "You're Enlightened.",
      "01FR024", CardRegion::FRELJORD, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_LAST_BREATH,
      7, 2, 4, true);

  GALLERY[369] = new Card(
      369, "Affectionate Poro",
      "",
      "",
      "01NX034", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_CHALLENGER,
      1, 1, 1, true);

  GALLERY[370] = new Card(
      370, "Intrepid Mariner",
      "Support: Give my supported ally Elusive this round.",
      "",
      "01PZ042", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 1, 3, true);

  GALLERY[371] = new Card(
      371, "Lux",
      "",
      "I've seen you cast 6+ mana of spells. When I level up, create a Final Spark in hand.",
      "01DE042", CardRegion::DEMACIA, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_BARRIER,
      6, 4, 5, true);

  GALLERY[372] = new Card(
      372, "Fiora's Riposte",
      "Give an ally +3|+0 and Barrier this round.\nShuffle a Fiora into your deck.",
      "",
      "01DE045T2", CardRegion::DEMACIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      4, 0, 0, false);

  GALLERY[373] = new Card(
      373, "Draven's Biggest Fan",
      "When I'm summoned, move Draven to the top of your deck if you don't have him in hand or in play.",
      "",
      "01NX035", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 2, 1, true);

  GALLERY[374] = new Card(
      374, "Glacial Storm",
      "Deal 2 to all enemies and the enemy Nexus.",
      "",
      "01FR024T5", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::ABILITY, CardSupType::NONE, CardSubType::NONE,
      K_SKILL,
      0, 0, 0, false);

  GALLERY[375] = new Card(
      375, "Reckless Trifarian",
      "",
      "",
      "01NX026", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_CANT_BLOCK,
      3, 5, 4, true);

  GALLERY[376] = new Card(
      376, "Darkwater Scourge",
      "",
      "",
      "01SI004", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_EPHEMERAL | K_LIFESTEAL,
      3, 5, 5, true);

  GALLERY[377] = new Card(
      377, "Steel Tempest",
      "Stun an attacking enemy.",
      "",
      "01IO046", CardRegion::IONIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[378] = new Card(
      378, "Cithria of Cloudfield",
      "",
      "",
      "01DE039", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      1, 2, 2, true);

  GALLERY[379] = new Card(
      379, "Vladimir's Transfusion",
      "Deal 1 to an ally and give another ally +2|+2 this round.\nShuffle a Vladimir into deck.",
      "",
      "01NX006T3", CardRegion::NOXUS, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      2, 0, 0, false);

  GALLERY[380] = new Card(
      380, "Fluft of Poros",
      "Last Breath: Summon a Heart of the Fluft.",
      "",
      "01FR043T1", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::PORO,
      K_LAST_BREATH,
      6, 4, 4, false);

  GALLERY[381] = new Card(
      381, "Fleetfeather Tracker",
      "When you summon another ally, grant me Challenger.",
      "",
      "01DE029", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      1, 2, 1, true);

  GALLERY[382] = new Card(
      382, "Spirit's Refuge",
      "Give an ally Barrier and Lifesteal this round.",
      "",
      "01IO037", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      4, 0, 0, true);

  GALLERY[383] = new Card(
      383, "Mk4: Apex Turret",
      "",
      "",
      "01PZ056T8", CardRegion::PILTOVER_N_ZAUN, CardRarity::NONE,
      CardType::UNIT, CardSupType::NONE, CardSubType::TECH,
      K_FEARSOME,
      4, 4, 1, false);

  GALLERY[384] = new Card(
      384, "Eggnivia",
      "",
      "Round Start: If you're Enlightened, transform me back into Anivia and Level Up.",
      "01FR024T4", CardRegion::FRELJORD, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_NONE,
      1, 0, 2, false);

  GALLERY[385] = new Card(
      385, "Sumpworks Map",
      "Grant an ally Elusive.",
      "",
      "01PZ026", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      2, 0, 0, true);

  GALLERY[386] = new Card(
      386, "Might",
      "Give an ally +3|+0 and Overwhelm this round.",
      "",
      "01NX019", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, true);

  GALLERY[387] = new Card(
      387, "Vanguard Cavalry",
      "",
      "",
      "01DE028", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_TOUGH,
      5, 5, 5, true);

  GALLERY[388] = new Card(
      388, "Rivershaper",
      "Strike: Draw a spell.",
      "",
      "01IO043", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 2, 1, true);

  GALLERY[389] = new Card(
      389, "Chempunk Pickpocket",
      "Nexus Strike: Create in hand an exact copy of a random spell from the enemy's deck.",
      "",
      "01PZ043", CardRegion::PILTOVER_N_ZAUN, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      2, 3, 2, true);

  GALLERY[390] = new Card(
      390, "Starlit Seer",
      "When you cast a spell, grant the top ally in your deck +1|+1.",
      "",
      "01FR032", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_IMBUE,
      2, 2, 3, true);

  GALLERY[391] = new Card(
      391, "Solitary Monk",
      "When I'm summoned, Recall all other allies.",
      "",
      "01IO038", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_ELUSIVE,
      3, 4, 3, true);

  GALLERY[392] = new Card(
      392, "She Who Wanders",
      "Play: Obliterate ALL followers with 4 or less Power in play and in hands.",
      "",
      "01FR052", CardRegion::FRELJORD, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      10, 10, 10, true);

  GALLERY[393] = new Card(
      393, "Tall Tales",
      "If you have a Yeti, summon an Enraged Yeti. Otherwise, create one on top of your deck.",
      "",
      "01FR051", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      3, 0, 0, true);

  GALLERY[394] = new Card(
      394, "Noxian Guillotine",
      "Kill a damaged unit to create a Fleeting Noxian Guillotine in hand.",
      "",
      "01NX022", CardRegion::NOXUS, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[395] = new Card(
      395, "Caustic Cask",
      "Last Breath: Deal 1 to EACH Nexus.",
      "",
      "01PZ047", CardRegion::PILTOVER_N_ZAUN, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH | K_EPHEMERAL,
      0, 0, 1, true);

  GALLERY[396] = new Card(
      396, "Warden's Prey",
      "Last Breath: Create in hand another Last Breath follower from any region that costs 3 or less.",
      "",
      "01SI026", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH,
      1, 1, 1, true);

  GALLERY[397] = new Card(
      397, "Discipline of Force",
      "Give an ally +3|+0 this round.",
      "",
      "01IO012T1", CardRegion::IONIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      3, 0, 0, false);

  GALLERY[398] = new Card(
      398, "Vanguard Redeemer",
      "When I'm summoned, draw a unit if an ally died this round.",
      "",
      "01DE054", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      3, 3, 3, true);

  GALLERY[399] = new Card(
      399, "Karma's Insight of Ages",
      "Create another random spell in hand.\nEnlightened: Create 2 instead.\nShuffle a Karma into your deck.",
      "",
      "01IO041T2", CardRegion::IONIA, CardRarity::NONE,
      CardType::SPELL, CardSupType::CHAMPION, CardSubType::NONE,
      K_BURST,
      2, 0, 0, false);

  GALLERY[400] = new Card(
      400, "Shadowshift",
      "Recall an ally to summon a Living Shadow in its place.",
      "",
      "01IO039", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      3, 0, 0, true);

  GALLERY[401] = new Card(
      401, "Crimson Awakener",
      "When I'm summoned, deal 1 to all other allies.",
      "",
      "01NX032", CardRegion::NOXUS, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 5, 5, true);

  GALLERY[402] = new Card(
      402, "Mageseeker Investigator",
      "Create a Detain once you've cast a 6+ cost spell this game.",
      "",
      "01DE023", CardRegion::DEMACIA, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      3, 3, 3, true);

  GALLERY[403] = new Card(
      403, "Kato The Arm",
      "Support: Give my supported ally +3|+0 and Overwhelm this round.",
      "",
      "01NX024", CardRegion::NOXUS, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      5, 5, 4, true);

  GALLERY[404] = new Card(
      404, "Vile Feast",
      "Drain 1 from a unit to summon a Spiderling.",
      "",
      "01SI040", CardRegion::SHADOW_ISLES, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_FAST,
      2, 0, 0, true);

  GALLERY[405] = new Card(
      405, "They Who Endure",
      "When I'm summoned, grant me +1|+1 for each ally that has died.",
      "",
      "01FR034", CardRegion::FRELJORD, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_OVERWHELM,
      6, 1, 1, true);

  GALLERY[406] = new Card(
      406, "Cithria the Bold",
      "Attack: Give other battling allies +1|+1 and Fearsome this round.",
      "",
      "01DE051", CardRegion::DEMACIA, CardRarity::EPIC,
      CardType::UNIT, CardSupType::NONE, CardSubType::ELITE,
      K_NONE,
      6, 6, 6, true);

  GALLERY[407] = new Card(
      407, "Yone, Windchaser",
      "Play: Stun 2 enemies.",
      "",
      "01IO056", CardRegion::IONIA, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      7, 6, 6, true);

  GALLERY[408] = new Card(
      408, "Ki Guardian",
      "Grant Barrier to an ally in hand. \nDraw 1.",
      "",
      "01IO055", CardRegion::IONIA, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      2, 0, 0, true);

  GALLERY[409] = new Card(
      409, "Redoubled Valor",
      "Fully heal an ally, then double its Power and Health.",
      "",
      "01DE044", CardRegion::DEMACIA, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      6, 0, 0, true);

  GALLERY[410] = new Card(
      410, "The Ruination",
      "Kill ALL units.",
      "",
      "01SI015", CardRegion::SHADOW_ISLES, CardRarity::EPIC,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      9, 0, 0, true);

  GALLERY[411] = new Card(
      411, "Thresh",
      "The first time I attack this game, summon another attacking champion from your deck or hand.",
      "",
      "01SI052T1", CardRegion::SHADOW_ISLES, CardRarity::NONE,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::NONE,
      K_CHALLENGER,
      5, 4, 7, false);

  GALLERY[412] = new Card(
      412, "Guile",
      "Stun an enemy.",
      "",
      "01NX049", CardRegion::NOXUS, CardRarity::COMMON,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_SLOW,
      1, 0, 0, true);

  GALLERY[413] = new Card(
      413, "Babbling Bjerg",
      "When I'm summoned, draw a unit with 5+ Power.",
      "",
      "01FR007", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_NONE,
      4, 3, 3, true);

  GALLERY[414] = new Card(
      414, "Garen",
      "",
      "I've struck twice.",
      "01DE012", CardRegion::DEMACIA, CardRarity::CHAMPION,
      CardType::UNIT, CardSupType::CHAMPION, CardSubType::ELITE,
      K_REGENERATION,
      5, 5, 5, true);

  GALLERY[415] = new Card(
      415, "Spinning Axe",
      "To play, discard 1.\nGive an ally +1|+0 this round.",
      "",
      "01NX020T1", CardRegion::NOXUS, CardRarity::NONE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      0, 0, 0, false);

  GALLERY[416] = new Card(
      416, "Avarosan Sentry",
      "Last Breath: Draw 1.",
      "",
      "01FR003", CardRegion::FRELJORD, CardRarity::COMMON,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LAST_BREATH,
      2, 2, 1, true);

  GALLERY[417] = new Card(
      417, "Soulgorger",
      "",
      "",
      "01SI055", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::UNIT, CardSupType::NONE, CardSubType::NONE,
      K_LIFESTEAL,
      6, 3, 7, true);

  GALLERY[418] = new Card(
      418, "Fading Memories",
      "Pick a follower. Create an Ephemeral copy of it in hand.",
      "",
      "01SI047", CardRegion::SHADOW_ISLES, CardRarity::RARE,
      CardType::SPELL, CardSupType::NONE, CardSubType::NONE,
      K_BURST,
      0, 0, 0, true);
}