# A. Sereja and Dima

## Problem Statement

Sereja and Dima are playing a game with cards arranged in a row. On each turn, a player can choose either the leftmost or rightmost card. Both players always choose the card with the greater value. Determine the final scores of Sereja and Dima after all cards are picked.

---

## Approach

Use the two-pointer technique:

- Maintain one pointer at the start and another at the end of the array.
- Compare the values at both ends.
- Select the larger card and update the respective player's score.
- Alternate turns between Sereja and Dima until no cards remain.

---

## Algorithm

1. Read the number of cards and their values.
2. Initialize two pointers: left and right.
3. Initialize scores for Sereja and Dima.
4. While cards remain:
   - Choose the larger value from either end.
   - Add it to the current player's score.
   - Move the corresponding pointer.
   - Switch the turn.
5. Print both players' scores.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(n)

---

## Concepts Used

- Arrays
- Greedy Algorithm
- Two Pointer Technique
- Simulation
