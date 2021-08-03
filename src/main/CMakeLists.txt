cmake_minimum_required(VERSION 3.16)
project(sub1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_DEBUG_POSTFIX "_d")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)


include_directories("${CMAKE_SOURCE_DIR}/include")


link_directories("${CMAKE_SOURCE_DIR}/lib")

add_executable(a.out  main.cpp)


target_link_libraries(a.out debug libstaticlib_d.a)
target_link_libraries(a.out optimized libstaticlib.a)
target_link_libraries(a.out debug libsharedlib_d.so)
target_link_libraries(a.out optimized libsharedlib.so)





