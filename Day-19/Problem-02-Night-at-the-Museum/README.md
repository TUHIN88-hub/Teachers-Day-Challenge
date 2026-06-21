# A. Night at the Museum

## Problem Statement

A circular alphabet wheel contains lowercase English letters. Initially, the pointer is at 'a'. For a given word, find the minimum number of rotations required to move the pointer and print all characters.

---

## Approach

The alphabet is arranged in a circle containing 26 letters.

- Start with the pointer at 'a'.
- For every character in the word:
  - Calculate the clockwise distance.
  - Calculate the counterclockwise distance.
  - Choose the smaller rotation.
- Add the chosen rotations to the answer and move the pointer to the current character.

This greedy choice ensures the minimum number of moves.

---

## Algorithm

1. Initialize the current pointer as `'a'` and moves as `0`.
2. Traverse every character of the input string.
3. Find the direct distance between the current and target character.
4. Find the circular distance `26 - direct distance`.
5. Add the minimum of both distances to the answer.
6. Update the current character.
7. Print the total moves.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## Concepts Used

- Greedy Algorithm
- String Traversal
- Circular Distance Calculation
- ASCII Character Operations
