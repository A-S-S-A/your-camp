add_library(yourcamp
    "your_camp/message.cpp"
    "your_camp/soldier.cpp"
    "your_camp/thecamp.cpp"
)

target_include_directories(yourcamp PUBLIC
    "${PROJECT_SOURCE_DIR}/include"
)

# If CURL_FOUND is false, then there must be a local copy
if(NOT CURL_FOUND)
    target_link_libraries(yourcamp libcurl)
else()
    target_link_libraries(yourcamp curl)
endif()

add_library(yourcamp::yourcamp ALIAS yourcamp)

add_executable(yourcamp-bin
    "main.cpp"
)

target_include_directories(yourcamp-bin PRIVATE
    "${PROJECT_SOURCE_DIR}/include"
)

target_link_libraries(yourcamp-bin yourcamp)
