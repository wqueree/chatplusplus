cmake_minimum_required(VERSION 3.26)
project(chatplusplus)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(chatplusplus
        src/main.cpp
        include/ChatServer.cpp
        include/ChatClient.cpp)
