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
