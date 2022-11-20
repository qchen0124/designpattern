cmake_minimum_required(VERSION 3.19)
project(designpattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(simplefactorypattern simplefactorypattern/OperationFactory.cpp
                                    simplefactorypattern/main.cpp)
add_executable(factorymethodpattern factorymethodpattern/main.cpp)

add_executable(decoratorpattern decoratorpattern/main.cpp)

add_executable(proxypattern proxypattern/main.cpp)

add_executable(prototypepattern prototypepattern/main.cpp)

add_executable(templatemethodpattern templatemethodpattern/main.cpp)

add_executable(facadepattern facadepattern/main.cpp)

add_executable(builderpattern builderpattern/main.cpp)
