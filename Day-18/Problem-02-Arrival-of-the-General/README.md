# A. Arrival of the General

## Problem Statement

Given the heights of soldiers standing in a line, find the minimum number of adjacent swaps required to bring the tallest soldier to the beginning of the line and the shortest soldier to the end.

---

## Approach

Traverse the array to locate:
- The first occurrence of the maximum height.
- The last occurrence of the minimum height.

The total swaps are calculated as:
- Swaps needed to move the tallest soldier to the front.
- Swaps needed to move the shortest soldier to the end.

If the tallest soldier is originally positioned after the shortest soldier, subtract one move because their positions overlap during the swapping process.

---

## Algorithm

1. Read the number of soldiers and their heights.
2. Find the first occurrence of the maximum height.
3. Find the last occurrence of the minimum height.
4. Calculate the required swaps.
5. If the maximum position is after the minimum position, subtract one.
6. Print the minimum number of swaps.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## Concepts Used

- Arrays
- Greedy Approach
- Index Manipulation
- Simulation
