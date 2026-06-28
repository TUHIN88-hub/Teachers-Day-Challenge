# Problem 02 - Tavas and SaDDas

## Problem Link
https://codeforces.com/problemset/problem/535/B

## Difficulty
Medium

## Concepts Used
- Binary Representation
- Bit Manipulation
- Strings
- Mathematical Observation
- Implementation

## Approach

- Count all lucky numbers having fewer digits than the given number.
- Treat digit '4' as binary 0 and digit '7' as binary 1.
- Traverse the string from left to right to compute its binary value.
- The answer is:
  - Numbers with shorter lengths
  - Plus the binary index of the current number
  - Plus one (1-based indexing).

## Time Complexity

O(n)

## Space Complexity

O(1)
