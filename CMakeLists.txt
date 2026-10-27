cmake_minimum_required(VERSION 4.0)
project(BankAppV1)

set(CMAKE_CXX_STANDARD 20)

add_executable(BankAppV1 main.cpp
        BankAccount.cpp
        BankAccount.h
        BankAccount.cpp
        CheckingAccount.h)
