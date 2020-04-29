cmake_minimum_required(VERSION 3.14)

# set project meta infomation
project(RuneSim VERSION 0.6 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
message("C Compiler: ${CMAKE_C_COMPILER}")
message("C++ Compiler: ${CMAKE_CXX_COMPILER}")

set(RS_HEADER_FILES
        src/base/type.h src/base/util.h src/base/result.h src/base/error.h src/base/base.h src/base/rsvec.h
        src/cardset/gallery.h src/cardset/initiator.h
        src/game/card.h src/game/event.h src/game/entity.h src/game/game.h src/game/event_listener.h
        src/game/game_state.h src/game/action.h src/game/frontier.h src/game/lor_deck_codes.h)

set(RS_BASE_SOURCE_FILES src/base/util.cc src/base/error.cc src/base/result.cc)
set(RS_CARD_SOURCE_FILES
        src/cardset/gallery.cc src/cardset/cardset01.cc src/cardset/cardset02.cc
        src/cardset/ionia_spells.cc
        src/cardset/noxus_spells.cc src/cardset/noxus_units.cc
        src/cardset/shadow_isles_units.cc)
set(RS_GAME_SOURCE_FILES
        src/game/game.cc src/game/player.cc src/game/event.cc
        src/game/entity.cc src/game/event_listener.cc src/game/action.cc src/game/frontier.h)

add_library(rsgame SHARED ${RS_HEADER_FILES}
        ${RS_BASE_SOURCE_FILES} ${RS_CARD_SOURCE_FILES} ${RS_GAME_SOURCE_FILES} src/runesim.h)

# rscmd
add_executable(rscmd src/app/cmd.cc)
target_include_directories(rscmd PRIVATE rsgame)
target_link_libraries(rscmd rsgame)

# test
enable_testing()
find_package(GTest REQUIRED)
get_filename_component(GTEST_LIBRARY_DIR ${GTEST_LIBRARY} DIRECTORY)
add_executable(unit_tests
        test/test.h src/runesim.h test/json.hpp
        test/main.cc test/test_game_workflow.cc test/test_game_component.cc test/test_base.cc)
target_include_directories(unit_tests PRIVATE src/game ${GTEST_INCLUDE_DIR})
target_link_directories(unit_tests PUBLIC ${GTEST_LIBRARY_DIR})
if (APPLE)
    target_link_libraries(unit_tests rsgame gtest)
elseif (UNIX)
    target_link_libraries(unit_tests rsgame gtest pthread)
endif ()

add_test(NAME rs_test COMMAND unit_tests)