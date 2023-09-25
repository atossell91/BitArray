cmake_minimum_required(VERSION 3.11.2)

project(BitArray)

set(INC ${CMAKE_SOURCE_DIR}/include)
set(SRC ${CMAKE_SOURCE_DIR}/src)

include_directories(${INC})

set(SRCS
    ${SRC}/Bit.cpp
    ${SRC}/BitArray.cpp)

set(PROG_SRCS
    ${SRC}/main.cpp
    ${SRCS})

add_executable(BitArray ${PROG_SRCS})
