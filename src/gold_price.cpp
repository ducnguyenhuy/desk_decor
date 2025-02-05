/**
 * @file gold_price.cpp
 * @author ducnguyenhuy (ducnguyenhuy2000@gmail.com)
 * @brief
 * @version 0.1
 * @date 2025-01-18
 *
 * @copyright Copyright (c) 2025
 *
 */

#include "gold_price.h"

#include "httplib.h"


int gold_price::get_request_stat(void)
{
    httplib::Client cli("http://www.goldapi.io");

    if (auto res = cli.Get("/api/stat"))
    {
        std::cout << res->status << std::endl;
        std::cout << res->get_header_value("Content-Type") << std::endl;
        std::cout << res->body << std::endl;
    }
    else
    {
        std::cout << "error code: " << res.error() << std::endl;
    }

    return 0;
}