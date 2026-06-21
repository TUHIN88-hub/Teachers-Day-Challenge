# A. Domino Piling

## Problem Statement

Given a board of size M × N and unlimited dominoes of size 2 × 1, find the maximum number of dominoes that can be placed on the board without overlapping and without going outside the board.

---

## Approach

Each domino occupies exactly two squares.

- Calculate the total number of squares in the board using M × N.
- Divide the total number of squares by 2.
- The integer result gives the maximum number of dominoes that can be placed.

---

## Algorithm

1. Read the values of M and N.
2. Calculate total squares = M × N.
3. Divide the total squares by 2.
4. Print the result.

---

## Complexity Analysis

- Time Complexity: O(1)
- Space Complexity: O(1)

---

## Concepts Used

- Mathematics
- Greedy Thinking
- Arithmetic Operations
- Optimization
