cmake_minimum_required(VERSION 3.14)

# set project meta infomation
project(RuneSim VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(RS_COMMON_HEADER_FILES common/type.h common/util.h common/result.h common/error.h common/common.h)
set(RS_COMMON_FILES ${RS_COMMON_HEADER_FILES} common/util.cc common/error.cc common/result.cc)

set(RS_CARD_HEADER_FILES card/card.h card/gallery.h)
set(RS_CARD_FILES ${RS_CARD_HEADER_FILES} card/card.cc card/gallery.cc card/noxus_spell.cc card/ionia_spell.cc)

# libcard
add_library(card SHARED ${RS_COMMON_FILES} ${RS_CARD_FILES})
target_include_directories(card PUBLIC card common)

# libgame
set(RS_GAME_HEADER_FILES game/event.h game/object.h game/game.h)
add_library(game SHARED ${RS_GAME_HEADER_FILES}
        game/game.cc game/player.cc game/event.cc game/object.cc)
target_include_directories(game PRIVATE card common)
target_link_libraries(game card)

# sim
add_executable(sim app/runesim.h app/client.cc app/server.cc app/operation.cc app/operation.h app/view.cc app/view.h)
target_include_directories(sim PRIVATE card game)
target_link_libraries(sim card game)

# test
add_executable(test test.cc app/runesim.h)
target_include_directories(test PRIVATE card game)
target_link_libraries(test card game)