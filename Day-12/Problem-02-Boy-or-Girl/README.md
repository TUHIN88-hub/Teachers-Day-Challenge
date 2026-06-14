# Boy or Girl

## Problem Statement

Given a username consisting of lowercase English letters, determine the gender according to the following rule:

- If the number of distinct characters is odd, print:
  IGNORE HIM!
- Otherwise, print:
  CHAT WITH HER!

## Approach

1. Insert all characters into a set.
2. Count distinct characters.
3. Check whether the count is odd or even.
4. Print the required message.

## Complexity Analysis

- Time Complexity: O(n log n)
- Space Complexity: O(n)

## Concepts Used

- Sets
- Strings
- STL
- Conditional Statements
