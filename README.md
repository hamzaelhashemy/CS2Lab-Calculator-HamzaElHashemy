# CS2Lab-Calculator-HamzaElHashemy
This repository contains the code for a simple calculator that supports  mathematical operations, including addition, subtraction, multiplication, division, factorial calculation, greatest common divisor (GCD), least common multiple (LCM), and random number generation in a specified range. The project was completed using feature branches on GitHub.

## Project Structure

- calculator.h – Contains the function declarations for the calculator operations.
- calculator.cpp – Implements the functions declared in calculator.h.
- test.cpp – Contains the main function for testing the calculator's functionality.
- CMakeLists.txt – CMake build file to compile the project.
- README.md – Documentation for the project and instructions for building and running the tests.

## Build Instructions

### With g++

bash
g++ test.cpp calculator.cpp -o calculator_test

./calculator_test


### With CMake

bash

mkdir build

cd build

cmake ..

make

./calculator_test


## Features Implemented

- Addition – Adds two integers.
- Subtraction – Subtracts the second integer from the first.
- Multiplication – Multiplies two integers.
- Division – Divides the first integer by the second. Handles division by zero.
- Factorial – Computes the factorial of a non-negative integer.
- GCD – Finds the greatest common divisor of two integers.
- LCM – Finds the least common multiple of two integers.
- Random in Range – Generates a random integer within a specified range.

## Commit History and Feature Branches

Each feature of the project was developed in its own feature branch:

1. feature-calculator.h – Added the function declarations in calculator.h.
2. feature-calculator.cpp – Implemented the calculator functions in calculator.cpp.
3. feature-test-file – Created a test file (test.cpp) to validate the functions.
4. feature-cmake-file – Added a CMakeLists.txt file for building the project.
