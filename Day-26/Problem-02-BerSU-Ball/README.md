# Problem 02 - BerSU Ball

## Problem Link
https://codeforces.com/problemset/problem/489/B

## Difficulty
1100

## Language
C++

## Concepts Used
- Greedy Algorithm
- Sorting
- Two Pointers
- Arrays

## Approach

- Read the skill levels of boys and girls.
- Sort both arrays in ascending order.
- Use two pointers to traverse both arrays.
- If the absolute difference between the current boy and girl is at most one, form a pair and move both pointers.
- Otherwise, move the pointer pointing to the smaller skill value.
- Count the maximum number of valid pairs.

## Time Complexity

O(n log n + m log m)

## Space Complexity

O(1)
