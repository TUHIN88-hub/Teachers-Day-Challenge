# A. Elephant

## Problem Statement

An elephant starts at position 0 and wants to reach position x. In one move, it can travel 1, 2, 3, 4, or 5 units.

Determine the minimum number of moves required to reach the destination.

---

## Approach

Use a greedy strategy by always taking the maximum possible step of 5 units.

The answer is the ceiling of x ÷ 5, which can be computed using integer arithmetic:

(x + 4) / 5

---

## Algorithm

1. Read the destination `x`.
2. Compute `(x + 4) / 5`.
3. Print the result.

---

## Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

---

## Concepts Used

- Greedy Algorithm
- Mathematics
- Integer Arithmetic
