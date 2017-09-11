cmake_minimum_required(VERSION 3.4)
project(pointers)

set(SOURCES
    cache.cpp
    factory.cpp
    main.cpp
    pool.cpp
)

add_executable(pointers ${SOURCES})
set_property(TARGET pointers PROPERTY CXX_STANDARD 11)
