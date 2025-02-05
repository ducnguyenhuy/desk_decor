/**
 * @file gold_price.h
 * @author ducnguyenhuy (ducnguyenhuy2000@gmail.com)
 * @brief
 * @version 0.1
 * @date 2025-01-18
 *
 * @copyright Copyright (c) 2025
 *
 */

#ifndef __GOLD_PRICE_H__
#define __GOLD_PRICE_H__

#include <iostream>

class gold_price
{
  private:
    int requests_today;
    int requests_yesterday;
    int requests_month;
    int requests_last_month;

  public:
    int get_request_stat(void);
    int get_gold_price(void);
};

#endif   // __GOLD_PRICE_H__