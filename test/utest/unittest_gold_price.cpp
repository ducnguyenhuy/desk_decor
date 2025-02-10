/**
 * @file unittest_gold_price.cpp
 * @author ducnguyenhuy (ducnguyenhuy2000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2025-02-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "unittest_gold_price.h"

#include "gold_price.h"

TEST_F(gold_price_utest, dummy_test)
{
    gold_price for_test;
    for_test.get_request_stat();
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}