#!/bin/bash

DIR="build/artifacts"

rm -rf "$DIR"; mkdir "$DIR"
g++ -O3 -shared -fPIC $(python3 -m pybind11 --includes) main/console/*.cpp -o "$DIR"/console.so
g++ -O3 -shared -fPIC $(python3 -m pybind11 --includes) main/database/*.cpp -o "$DIR"/database.so