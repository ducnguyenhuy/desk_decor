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
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "gold_price.h"

#include "httplib.h"
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/spdlog.h"

#define API_HTTPS_DOMAIN "https://www.goldapi.io"
#define API_HTTP_DOMAIN  "http://www.goldapi.io"
#define API_PATH         "/api/stat"
#define CA_CERT_FILE     "www.goldapi.io.crt"

int gold_price::get_request_stat(void)
{
#ifdef CPPHTTPLIB_OPENSSL_SUPPORT
    httplib::SSLClient cli(API_HTTPS_DOMAIN);
    cli.set_ca_cert_path(CA_CERT_FILE);
    cli.enable_server_certificate_verification(true);
#else
    httplib::Client cli(API_HTTP_DOMAIN);
#endif

    if (auto res = cli.Get(API_PATH))
    {
        SPDLOG_INFO("res->status {}", res->status);
        SPDLOG_INFO("res->get_header_value(\"Content-Type\") {}",
                    res->get_header_value("Content-Type"));
        SPDLOG_INFO("res->body {}", res->body);
    }
    else
    {
        spdlog::info(">>>>> error {}", to_string(res.error()));
    }

    return 0;
}