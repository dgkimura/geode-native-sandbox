cmake_minimum_required(VERSION 3.4)
project(hybrid)

set(SOURCES
    cache.cpp
    factory.cpp
    main.cpp
    pool.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)
