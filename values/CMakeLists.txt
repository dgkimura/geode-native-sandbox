cmake_minimum_required(VERSION 3.4)
project(values)

set(SOURCES
    cache.cpp
    factory.cpp
    main.cpp
    pool.cpp
)

add_executable(values ${SOURCES})
set_property(TARGET values PROPERTY CXX_STANDARD 11)
