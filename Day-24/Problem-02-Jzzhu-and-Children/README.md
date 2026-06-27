# Problem 2: Jzzhu and Children

## Problem Statement
Jzzhu distributes candies to children standing in a queue. Each child requires a certain number of candies, and every round, the first child receives `m` candies. If the child still needs more candies, they move to the end of the queue; otherwise, they leave. Determine which child leaves the queue last.

---

## Approach

- Instead of simulating the queue, compute how many rounds each child needs.
- The number of rounds is:

Rounds = ceil(ai / m)

- This can be calculated efficiently as:

(ai + m - 1) / m

- The child requiring the maximum rounds leaves last.
- If multiple children require the same number of rounds, choose the one with the largest index.

---

## Algorithm

1. Read `n` and `m`.
2. For every child:
   - Compute `(ai + m - 1) / m`.
   - Update the answer if the current child needs more or equal rounds.
3. Print the last child's index.

---

## Time Complexity

**O(n)**

## Space Complexity

**O(1)**

---

## Concepts Used

- Mathematics
- Ceiling Division
- Greedy Observation
- Implementation
