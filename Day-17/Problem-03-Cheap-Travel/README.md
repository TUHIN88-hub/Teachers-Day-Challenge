# A. Cheap Travel

## Problem Statement

Ann needs to travel using the subway `n` times. A single ride ticket costs `a` rubles, while a special ticket covering `m` rides costs `b` rubles.

Find the minimum amount of money required to complete all rides.

---

## Approach

Check all possible economical choices:

1. Buy all rides using single tickets.
2. Buy special tickets for complete groups and choose the cheaper option for the remaining rides.
3. Buy only special tickets, even if some rides are left unused.

The minimum cost among these possibilities is the answer.

---

## Algorithm

1. Read `n`, `m`, `a`, and `b`.
2. Calculate the cost of buying only single tickets.
3. Calculate the cost of using special tickets for full groups and the best option for the remaining rides.
4. Calculate the cost of buying only special tickets.
5. Print the minimum of all three costs.

---

## Complexity Analysis

- Time Complexity: O(1)
- Space Complexity: O(1)

---

## Concepts Used

- Greedy Approach
- Mathematical Optimization
- Conditional Comparison
