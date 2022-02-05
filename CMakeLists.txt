cmake_minimum_required(VERSION 3.21)
project(c_study C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(1
        c_struct.c
        )

add_executable(2
        c_pointer.c
        )

add_executable(3
        c_pointer_ref.c
        )

add_executable(4
        c_pointer_add.c
        )

add_executable(5
        c_pointer_op.c
        )

add_executable(6
        c_pointer_and_array.c
        )

add_executable(7
        c_array_and_malloc.c
        )