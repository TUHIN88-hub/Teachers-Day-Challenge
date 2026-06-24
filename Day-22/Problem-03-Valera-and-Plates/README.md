# A. Valera and Plates

## Problem Statement

Valera has a limited number of clean bowls and plates.

- Type 1 dishes require a bowl.
- Type 2 dishes can use either a bowl or a plate.

After using a utensil it becomes dirty. If no suitable clean utensil is available, Valera must wash one.

Find the minimum number of washes required.

---

## Approach

Use a greedy strategy:

- Type 1 dishes always consume a bowl.
- For Type 2 dishes:
  - Prefer plates when bowls should be preserved.
  - Otherwise use bowls.
- If no clean utensil exists, increment the wash count.

This minimizes the number of future washes.

---

## Algorithm

1. Read n, m, k.
2. Traverse all dishes.
3. Handle type 1 dishes using bowls.
4. Handle type 2 dishes using plates or bowls greedily.
5. Count washes whenever no clean utensil remains.
6. Print the result.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(n)

---

## Concepts Used

- Greedy Algorithm
- Simulation
- Resource Allocation
- Implementation
