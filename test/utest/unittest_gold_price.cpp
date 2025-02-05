#include "unittest_gold_price.h"

#include "gold_price.h"
#include "spdlog/spdlog.h"

TEST_F(gold_price_utest, dummy_test)
{
    gold_price for_test;
    for_test.get_request_stat();

    spdlog::info("Welcome to spdlog!");

    std::cout << "Inside api get static" << std::endl;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}