cmake_minimum_required(VERSION 3.16)
project(cpp_study)

set(CMAKE_CXX_STANDARD 14)

add_executable(work_manager main.cpp workManager.h workManager.cpp
        Employee.cpp Employee.h Boss.cpp Boss.h Manager.cpp Manager.h)