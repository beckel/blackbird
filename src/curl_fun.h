#ifndef CURL_FUN_H
#define CURL_FUN_H

#include <string>
#include <jansson.h>
#include <curl/curl.h>
#include "parameters.h"

// general curl callback
size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp);

// return JSON data from not authentificated address
json_t* getJsonFromUrl(Parameters& params, std::string url, std::string postField);

#endif
