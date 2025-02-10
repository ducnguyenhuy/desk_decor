/**
 * @file unittest_gold_price.h
 * @author ducnguyenhuy (ducnguyenhuy2000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2025-02-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef __UNITTEST_GOLD_PRICE_H__
#define __UNITTEST_GOLD_PRICE_H__

#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/spdlog.h"

#include "gtest/gtest.h"
#include <iostream>

class gold_price_utest : public testing::Test
{
    void SetUp() override
    {
        auto console = spdlog::stdout_color_mt("console");

        spdlog::set_pattern("[%Y-%m-%d %T.%e] [%^%l%$] [%s:%#] %^%v%$");
    }

    void TearDown(void) override
    {
    }
};

#endif   // __UNITTEST_GOLD_PRICE_H__