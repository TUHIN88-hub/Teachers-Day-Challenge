# A. Kyoya and Photobooks

## Problem Statement

Given a string representing a photobook, insert exactly one lowercase English letter at any position and determine the number of distinct photobooks that can be formed.

---

## Approach

Generate all possible strings by:

- Trying every insertion position.
- Inserting every lowercase letter ('a' to 'z').
- Storing the generated strings in a set to automatically remove duplicates.

The size of the set gives the required answer.

---

## Algorithm

1. Read the input string.
2. For every insertion position:
   - Insert each lowercase letter.
   - Store the resulting string in a set.
3. Print the size of the set.

---

## Complexity Analysis

- **Time Complexity:** O(26 × n²)
- **Space Complexity:** O(26 × n)

---

## Concepts Used

- String Manipulation
- STL Set
- Brute Force
- Implementation
