# A. Beautiful Matrix

## Problem Statement
You are given a 5×5 matrix containing exactly one `1` and twenty-four `0`s. In one move, you can swap two neighboring rows or two neighboring columns.

A matrix is considered beautiful if the `1` is located at the center of the matrix (3rd row and 3rd column). Find the minimum number of moves required to make the matrix beautiful.

## Approach
- Traverse the 5×5 matrix and find the position of the number `1`.
- Calculate the distance between its current position and the center position `(3, 3)`.
- The answer is the sum of row moves and column moves, which is the Manhattan Distance.

## Algorithm
1. Read the 5×5 matrix.
2. Store the row and column where `1` is found.
3. Calculate:
   - `abs(row - 3) + abs(column - 3)`
4. Print the result.

## Complexity Analysis
- Time Complexity: O(25) ≈ O(1)
- Space Complexity: O(1)

## Concepts Used
- Matrix Traversal
- Manhattan Distance
- Absolute Difference
