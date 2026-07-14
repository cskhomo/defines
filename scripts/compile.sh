#!bin/bash

g++ -I include -I external src/main.cpp src/console.cpp -o bin/defines -std=c++20 -Wall
