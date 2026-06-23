# A. Bit++

## Problem Statement

Given a sequence of statements in the Bit++ language, determine the final value of variable `x`.

Initially:

x = 0

Operations:
- `++X` or `X++` increases x by 1.
- `--X` or `X--` decreases x by 1.

Print the final value after executing all statements.

---

## Approach

The only thing that matters is whether a statement contains:

- `"++"` → increment x
- `"--"` → decrement x

Process each statement and update the value accordingly.

---

## Algorithm

1. Initialize x = 0.
2. Read each statement.
3. If it contains `"++"`, increment x.
4. Otherwise, decrement x.
5. Print x.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## Concepts Used

- Simulation
- String Processing
- Conditional Statements
