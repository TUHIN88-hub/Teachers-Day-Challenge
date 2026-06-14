# Stones on the Table

## Problem Statement

Given a row of colored stones represented by a string, determine the minimum number of stones to remove so that no two neighboring stones have the same color.

## Approach

1. Traverse the string from left to right.
2. Compare each character with the previous one.
3. If both are the same, increment the removal count.
4. Print the total count.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

## Concepts Used

- Strings
- Greedy Observation
- Linear Traversal
