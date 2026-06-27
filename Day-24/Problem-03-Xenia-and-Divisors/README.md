# Problem 03 - Xenia and Divisors

## Problem Link
https://codeforces.com/problemset/problem/342/A

## Difficulty
Easy

## Concepts Used
- Greedy Algorithm
- Frequency Counting
- Constructive Algorithm
- Arrays

## Approach

The valid triplets are only:

- (1, 2, 4)
- (1, 2, 6)
- (1, 3, 6)

Count the frequency of every number.

- If numbers 5 or 7 appear, the answer is impossible.
- Greedily create valid groups while decreasing their frequencies.
- If all frequencies become zero, print the groups.
- Otherwise, print **-1**.

## Time Complexity
O(n)

## Space Complexity
O(1)
