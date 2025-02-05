#ifndef __UNITTEST_GOLD_PRICE_H__
#define __UNITTEST_GOLD_PRICE_H__

#include "gtest/gtest.h"
#include <iostream>

class gold_price_utest : public testing::Test
{
    void SetUp() override
    {
        std::cout << "Here is setup program" << std::endl;
    }

    void TearDown(void) override
    {
        std::cout << "Here is teardown function" << std::endl;
    }
};

#endif   // __UNITTEST_GOLD_PRICE_H__