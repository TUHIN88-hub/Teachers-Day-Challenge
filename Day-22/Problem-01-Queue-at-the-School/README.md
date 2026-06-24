# B. Queue at the School

## Problem Statement

Given the initial arrangement of boys (B) and girls (G) in a queue, determine the arrangement after t seconds.

Each second, whenever a boy stands immediately before a girl, they swap positions.

---

## Approach

Simulate the queue for t seconds.

For each second:

- Traverse the queue from left to right.
- If "BG" is found, swap it to "GB".
- Skip the next position after a swap.

After performing all t iterations, print the final queue.

---

## Algorithm

1. Read n, t and the initial string.
2. Repeat t times:
   - Traverse the string.
   - Swap every occurrence of "BG".
   - Skip the next position after swapping.
3. Print the final string.

---

## Complexity Analysis

- Time Complexity: O(n × t)
- Space Complexity: O(1)

---

## Concepts Used

- Simulation
- String Manipulation
- Implementation
- Greedy Swapping
