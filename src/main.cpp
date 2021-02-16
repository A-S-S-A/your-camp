#include <iostream>

#include <curl/curl.h>

#include "your_camp/constants.hpp"

int main(int argc, char* argv[])
{
    // Initialize cURL
    curl_global_init(CURL_GLOBAL_ALL);
    auto curl = curl_easy_init();

    if (!curl)
        throw std::exception();

    curl_easy_setopt(curl, CURLOPT_URL, your_camp::THE_CAMP_BASEURL);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

    auto result = curl_easy_perform(curl);

    if (result != CURLE_OK)
        std::cout << "cURL failed" << std::endl;

    // Cleanup stuff
    curl_easy_cleanup(curl);
    curl_global_cleanup();

    return 0;
}
