#ifndef KRAKEN_H
#define KRAKEN_H

#include <curl/curl.h>
#include <string>
#include "parameters.h"

namespace Kraken {

  // get quote
  double getQuote(Parameters& params, bool isBid);

  // get the current availability for usd or btc
  double getAvail(Parameters& params, std::string currency);

  // send order to the exchange and return order ID
  int sendOrder(Parameters& params, std::string direction, double quantity, double price);

  // check the status of the order
  bool isOrderComplete(Parameters& params, int orderId);

  // get the bitcoin exposition
  double getActivePos(Parameters& params);

  // get the limit price according to the requested volume
  double getLimitPrice(Parameters& params, double volume, bool isBid);

  // send a request to the exchange and return a JSON object
  json_t* authRequest(Parameters& params, std::string url, std::string request, std::string options="");

}

#endif
