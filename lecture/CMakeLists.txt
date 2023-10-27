cmake_minimum_required(VERSION 3.26)
project(lecture C)

set(CMAKE_C_STANDARD 11)

include_directories(lecture7)

add_executable(lecture
        lecture4/helloworld.c
        lecture4/ifelse.c
        lecture4/switch.c
        lecture4/ternary.c
        lecture6/struct.c
        lecture6/structFunction.c
        lecture6/structPointer.c
        lecture6/union.c
        lecture6/varUnion.c
        lecture6/varUnion2.c
        lecture7/add.c
        lecture7/commandLineInputs.c
        lecture7/enum.c
        lecture7/header.h
        lecture7/mainAdd.c
        lecture7/random.c)
