cmake_minimum_required(VERSION 3.14)

# set project meta infomation
project(RuneSim VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(RS_HEADER_FILES
        src/base/type.h src/base/util.h src/base/result.h src/base/error.h src/base/base.h
        src/cardset/gallery.h src/cardset/cardset01.h
        src/game/card.h src/game/event.h src/game/entity.h src/game/game.h)

set(RS_BASE_SOURCE_FILES src/base/util.cc src/base/error.cc src/base/result.cc)
set(RS_CARD_SOURCE_FILES
        src/cardset/gallery.cc
        src/cardset/ionia_spells.cc
        src/cardset/noxus_spells.cc src/cardset/noxus_units.cc src/cardset/noxus_others.cc
        src/cardset/shadow_isles_units.cc)
set(RS_GAME_SOURCE_FILES src/game/card.cc src/game/game.cc src/game/player.cc src/game/event.cc src/game/entity.cc)

add_library(rsgame SHARED ${RS_HEADER_FILES}
        ${RS_BASE_SOURCE_FILES} ${RS_CARD_SOURCE_FILES} ${RS_GAME_SOURCE_FILES})

# sim
#add_executable(sim app/cmd.cc)
#target_include_directories(sim PRIVATE game)
#target_link_libraries(sim game)

# test
# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include")
endif()

add_executable(unit_tests test/test.h test/main.cc test/test_game_init.cc)
target_include_directories(unit_tests PRIVATE src/game)
target_link_libraries(unit_tests rsgame gtest)
enable_testing()
add_test(NAME rs_test COMMAND unit_tests)