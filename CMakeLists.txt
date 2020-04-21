cmake_minimum_required(VERSION 3.14)

# set project meta infomation
project(RuneSim VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
message("C Compiler: ${CMAKE_C_COMPILER}")
message("C++ Compiler: ${CMAKE_CXX_COMPILER}")

set(RS_HEADER_FILES
        src/base/type.h src/base/util.h src/base/result.h src/base/error.h src/base/base.h src/base/rsvec.h
        src/cardset/gallery.h src/cardset/cardset01.h
        src/game/card.h src/game/event.h src/game/entity.h src/game/game.h src/game/event_listener.h)

set(RS_BASE_SOURCE_FILES src/base/util.cc src/base/error.cc src/base/result.cc)
set(RS_CARD_SOURCE_FILES
        src/cardset/gallery.cc
        src/cardset/ionia_spells.cc
        src/cardset/noxus_spells.cc src/cardset/noxus_units.cc src/cardset/noxus_others.cc
        src/cardset/shadow_isles_units.cc)
set(RS_GAME_SOURCE_FILES src/game/card.cc src/game/game.cc src/game/player.cc src/game/event.cc src/game/entity.cc src/game/event_listener.cc)

add_library(rsgame SHARED ${RS_HEADER_FILES}
        ${RS_BASE_SOURCE_FILES} ${RS_CARD_SOURCE_FILES} ${RS_GAME_SOURCE_FILES})

# sim
#add_executable(sim app/cmd.cc)
#target_include_directories(sim PRIVATE game)
#target_link_libraries(sim game)

# test
enable_testing()
find_package(GTest REQUIRED)
get_filename_component(GTEST_LIBRARY_DIR ${GTEST_LIBRARY} DIRECTORY)
add_executable(unit_tests test/test.h test/main.cc test/test_deck.cc test/test_game_workflow.cc test/test_event_listener.cc)
target_include_directories(unit_tests PRIVATE src/game ${GTEST_INCLUDE_DIR})
target_link_directories(unit_tests PUBLIC ${GTEST_LIBRARY_DIR})
target_link_libraries(unit_tests rsgame gtest)
add_test(NAME rs_test COMMAND unit_tests)