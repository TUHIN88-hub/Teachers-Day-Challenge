# A. Bit++

## Problem Statement

Given a sequence of Bit++ statements, determine the final value of variable `x`, initially set to 0. The operations can either increase or decrease the value of `x` by 1.

---

## Approach

Each statement consists of three characters and contains either `++` or `--`. The middle character uniquely identifies the operation.

- If the middle character is `+`, increment `x`.
- If the middle character is `-`, decrement `x`.

After processing all statements, output the final value of `x`.

---

## Algorithm

1. Initialize `x = 0`.
2. Read all statements one by one.
3. Check the second character of each statement.
4. Update `x` accordingly.
5. Print the final value of `x`.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## Concepts Used

- Strings
- Simulation
- Conditional Statements
- Basic C++ Programming
