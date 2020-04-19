//
// Created by Hengruo Zhang on 4/18/20.
//

#include "test.h"

using namespace std;

vec<pair<RSID, isize>> deck1 = {
    {50, 3},
    {271,3},
    {176,3},
    {199,3},
    {127,3},
    {360,3},
    {405,3},
    {336,2},
    {27,3},
    {297,2},
    {288,3},
    {306,3},
    {268,3},
    {365,3},
    {411,1}
};

int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  init_gallery();
  auto result = RUN_ALL_TESTS();
  clear_gallery();
  return result;
}