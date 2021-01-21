add_library(yourcamp
    "your_camp/message.cpp"
    "your_camp/soldier.cpp"
    "your_camp/thecamp.cpp"
)

target_include_directories(yourcamp PUBLIC
    "${PROJECT_SOURCE_DIR}/include"
)

target_link_libraries(yourcamp curl)

add_library(yourcamp::yourcamp ALIAS yourcamp)

add_executable(yourcamp-bin
    "main.cpp"
)

