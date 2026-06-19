# A. Stones on the Table

## Problem Statement

There are n stones arranged in a row, where each stone can be Red (R), Green (G), or Blue (B). The task is to find the minimum number of stones that must be removed so that no two neighboring stones have the same color.

---

## Approach

The solution uses a simple greedy observation:

- Traverse the string of stone colors from left to right.
- Compare each stone with its previous stone.
- If both colors are the same, one stone needs to be removed.
- Count every such occurrence.

The final count gives the minimum number of removals required.

---

## Algorithm

1. Read the number of stones and their colors.
2. Initialize a counter to zero.
3. Traverse the string from the second character to the last character.
4. Compare the current stone with the previous one.
5. If both are the same, increment the counter.
6. Print the counter.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## Concepts Used

- Strings
- Greedy Technique
- Character Comparison
- Iteration
