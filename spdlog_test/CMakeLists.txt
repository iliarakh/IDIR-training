cmake_minimum_required(VERSION 3.11)# Specifies the minimum version of CMake required to build the project.
project(HelloWorld)# Defines the project name. This name is used throughout the CMake scripts to refer to the project.

find_package(spdlog REQUIRED)# telling the computer to get spdlog::spdlog

add_executable(${PROJECT_NAME} FileLogger.cpp)# taking the project (main.cpp) and namining it to the project name

target_link_libraries(${PROJECT_NAME} # link the library into the project for it to be used
	PUBLIC 
	spdlog::spdlog
)
