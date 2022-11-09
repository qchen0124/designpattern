cmake_minimum_required(VERSION 3.19)
project(designpattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(simplefactorypattern simplefactorypattern/OperationAdd.cpp
                                    simplefactorypattern/OperationSub.cpp
                                    simplefactorypattern/OperationMul.cpp
                                    simplefactorypattern/OperationDiv.cpp
                                    simplefactorypattern/OperationFactory.cpp
                                    simplefactorypattern/main.cpp)

add_executable(decoratorpattern decoratorpattern/main.cpp)

add_executable(proxypattern proxypattern/main.cpp)