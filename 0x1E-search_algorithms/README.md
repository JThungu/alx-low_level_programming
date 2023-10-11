# alx 0x1E - C - Search Algorithms

![ALX School](https://www.holbertonschool.com/holberton-logo.png)

This repository contains solutions and code for the project "alx 0x1E - C - Search Algorithms," which is part of the ALX School's curriculum. This project focuses on implementing various search algorithms in the C programming language.

## Table of Contents
- [Description](#description)
- [Requirements](#requirements)
- [Algorithms](#algorithms)
- [Usage](#usage)

## Description
In this project, you will find C implementations of various search algorithms, including linear search, binary search, and more. The goal is to learn and understand how these algorithms work and their time complexity.

## Requirements
To compile and run the code in this repository, you need to have the following installed:
- GCC (GNU Compiler Collection)
- A C development environment

## Algorithms
The following search algorithms are implemented in this project:

- [Linear Search](./0-linear.c): A simple algorithm that searches for an element sequentially in an array.
- [Binary Search](./1-binary.c): A more efficient algorithm that works on sorted arrays by repeatedly dividing the search interval in half.
- [Jump Search](./2-jump.c): An algorithm that jumps ahead by a fixed step, then performs linear search in the subarray.
- [Interpolation Search](./3-interpolation.c): A search algorithm that estimates the position of the target element based on its value and the range of elements.
- [Exponential Search](./100-exponential.c): A search algorithm that works by doubling the position until a range is found and then performing binary search.

## Usage
You can compile the C files using GCC. For example, to compile the `0-linear.c` file, you can use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-linear.c -o 0-linear

