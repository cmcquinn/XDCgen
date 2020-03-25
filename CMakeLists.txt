cmake_minimum_required(VERSION 3.14)
project("xdcgen")

set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -Wall -Wextra")

include_directories(${CMAKE_SOURCE_DIR}/include)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(SOURCES ${SOURCE_DIR}/main.cpp  ${SOURCE_DIR}/XDCgen.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})