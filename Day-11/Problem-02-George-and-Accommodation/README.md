# 467A - George and Accommodation

## Problem Statement

Given the current occupancy and capacity of each room in a dormitory, determine how many rooms have space for at least two more students.

## Approach

For every room:

- Read current occupants (p)
- Read room capacity (q)
- If q - p >= 2, increment the answer.

Print the total count.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

## Concepts Used

- Implementation
- Conditional Checking
- Iteration
