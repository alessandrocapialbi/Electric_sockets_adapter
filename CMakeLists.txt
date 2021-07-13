cmake_minimum_required(VERSION 3.19)
project(Electric_sockets_adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Electric_sockets_adapter main.cpp Adapter.h ItalianSocket.h USASocket.h Oven.h)