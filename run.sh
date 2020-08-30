#!/bin/bash

if [ -z $1 ]; then
    echo """Usage run.sh [input-file]

General overview: https://github.com/baquiax/cpp"""
    exit 1
fi

source_filename=$1
binary_filename=${source_filename/.cpp/.o}

# -std=c++11 follows the C+11 standard
# -O2 optimizes the code
# -Wall enables all the warnings about possible errors
g++ -std=c++11 -O2 -Wall $1 -o $binary_filename

./$binary_filename