# A. Park Lighting

## Problem Statement

Given a rectangular park with `n` rows and `m` columns, determine the minimum number of lanterns required to light all squares. A lantern placed on a street can illuminate at most two adjacent squares.

---

## Approach

Since each lantern can cover two squares, the minimum number of lanterns required is the ceiling of half the total number of squares.

Formula:

ceil(n × m / 2)

This can be implemented using integer arithmetic as:

(n × m + 1) / 2

---

## Algorithm

1. Read the number of test cases.
2. For each test case:
   - Calculate the total number of squares `n × m`.
   - Compute `(n × m + 1) / 2`.
   - Output the result.

---

## Complexity Analysis

- Time Complexity: O(1) per test case
- Space Complexity: O(1)

---

## Concepts Used

- Mathematics
- Ceiling Division
- Optimization
- Arithmetic Operations
