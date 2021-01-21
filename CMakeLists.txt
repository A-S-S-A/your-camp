cmake_minimum_required(VERSION 3.12)

project("your-camp" CXX)

# Import libraries if required
find_library(LIBCURL libcurl)
if(NOT libcurl_FOUND)
    message("LIBCURL NOT FOUND")
    add_subdirectory("external/curl")
endif()

# Add source subdirectory
add_subdirectory("src")

include_directories("include")

