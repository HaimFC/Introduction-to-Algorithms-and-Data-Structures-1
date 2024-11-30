# Introduction to Algorithms and Data Structures - Home Assignment #1

This repository contains solutions for two problems in Home Assignment #1, focusing on bounding box optimization and pathfinding for a specific destination. The solutions are implemented in C++.

## Files in the Repository

- **`solution.cpp`**: The main implementation file containing solutions for both problems:
  - Problem 1: Best Bounding Box
  - Problem 2: Rick's Destination
- **`home1.pdf`**: Assignment description with problem statements and requirements.

## Problem Descriptions and Solutions

### Problem 1: Best Bounding Box

#### Description:
Given a 2D array representing an image, find the subarray (bounding box) with the greatest sum of pixels.

#### Input:
- First line: Two integers `ROWS` (1-200) and `COLS` (1-300) representing the dimensions of the image.
- Next `ROWS` lines: Each contains `COLS` integers representing the pixel values.

#### Output:
- A single integer representing the maximum sum of the pixels in the bounding box.

#### Implementation:
The solution uses Kadane's algorithm in 2D:
- Iterates over all possible row ranges.
- For each range, computes column sums and applies a 1D maximum subarray sum algorithm.

#### Example:
Input:
10 4 -32 8 3 -48 -32 22 47 24 14 23 19 33 15 18 -1 -45 -30 34 45 -45 -25 31 -38 -4 -46 25 1 -22 29 -45 -29 31 -21 -11 -49 4 -21 -4 -30 -26

Output:
237

The bounding box includes rows 1 to 7 and columns 2 to 3.

---

### Problem 2: Rick's Destination

#### Description:
Rick needs to reach a specific destination using a spaceship that accelerates incrementally. The spaceship can move forward or backward in each step, and it must stop exactly at the target.

#### Input:
- A single integer `target` representing Rick's destination (range: `-40` to `40`).

#### Output:
- The minimum number of steps required to reach the destination.

#### Implementation:
The algorithm calculates:
1. The minimum number of steps required to exceed or reach the absolute value of the target.
2. Additional steps needed to ensure the difference between the current position and the target is even, as the spaceship can only adjust its position in even increments beyond the initial sum.

#### Example:
Input:
4

Output:
3


Steps:
- Step 1: Move 1 unit (position: -1).
- Step 2: Move 2 units forward (position: 1).
- Step 3: Move 3 units forward (position: 4).

---

## How to Run

### Compile:
Use a C++ compiler like `g++`:
```bash
g++ -o assignment_solution solution.cpp


### Run:
For Linux:

./assignment_solution
