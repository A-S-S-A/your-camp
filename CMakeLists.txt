cmake_minimum_required(VERSION 3.12)

project("your-camp" CXX)

# Import libraries if required
find_package(CURL REQUIRED)
if(NOT CURL_FOUND)
    message("CURL IS NOT FOUND! Trying local directory...")
    add_subdirectory("external/curl")
    find_library(libcurl REQUIRED)
endif()

# Add source subdirectory
add_subdirectory("src")

include_directories("include")

