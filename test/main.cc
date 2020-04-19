//
// Created by Hengruo Zhang on 4/18/20.
//

#include "test.h"

using namespace std;

int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  init_gallery();
  auto result = RUN_ALL_TESTS();
  clear_gallery();
  return result;
}