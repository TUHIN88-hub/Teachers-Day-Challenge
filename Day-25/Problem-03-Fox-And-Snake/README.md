# Problem 03 - Fox And Snake

## Problem Link
https://codeforces.com/problemset/problem/510/A

## Difficulty
Easy

## Concepts Used
- Pattern Printing
- Nested Loops
- Conditional Statements
- Simulation

## Approach

- Traverse each row from `1` to `n`.
- For every odd-numbered row, print `m` '#' characters.
- For even-numbered rows:
  - Print the '#' at the last column for the first even row in the cycle.
  - Print the '#' at the first column for the next even row.
- Continue alternating this pattern until all rows are printed.

## Time Complexity

O(n × m)

## Space Complexity

O(1)
