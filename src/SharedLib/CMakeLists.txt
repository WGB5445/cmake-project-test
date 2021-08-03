cmake_minimum_required(VERSION 3.16)
project(sharedlib)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_DEBUG_POSTFIX "_d")
file(GLOB INSTALL_HEAD_FILES ./include/*.h)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

add_library(sharedlib SHARED src/sharedlibrary.cpp include/sharedlibrary.h)
file(COPY  ${INSTALL_HEAD_FILES} DESTINATION ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME})