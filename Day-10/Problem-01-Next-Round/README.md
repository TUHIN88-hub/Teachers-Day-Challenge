# A. Next Round

## Problem Statement

Given the scores of contest participants in non-increasing order, determine how many participants advance to the next round.

A participant advances if:
- Their score is at least the score of the k-th participant.
- Their score is positive.

## Approach

1. Store all participant scores.
2. Take the score at position k as the threshold.
3. Count participants whose score:
   - Is greater than or equal to the threshold.
   - Is greater than zero.

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

## Concepts Used

- Arrays
- Counting
- Conditional Logic
- Implementation
