cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_COMPILER     "/usr/bin/g++")
set(CMAKE_CXX_FLAGS "-std=c++11 -O2 -pthread" )
ADD_DEFINITIONS("-DHAVE_CXX_STDHEADERS")

AUX_SOURCE_DIRECTORY(src/uvm UVM_SRC)
INCLUDE_DIRECTORIES( "include" )

add_library(uvm ${UVM_SRC})





