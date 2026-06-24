# A. Kefa and First Steps

## Problem Statement

Given a sequence of integers, determine the length of the longest continuous non-decreasing subsegment.

A subsegment is non-decreasing if every element is greater than or equal to the previous element.

---

## Approach

Traverse the array while maintaining:

- Current non-decreasing segment length
- Maximum segment length found so far

If the current element is greater than or equal to the previous one, extend the current segment. Otherwise, start a new segment.

---

## Algorithm

1. Read n and the array.
2. Initialize current = 1 and maximum = 1.
3. Traverse from index 1 to n-1:
   - If a[i] ≥ a[i-1], increment current.
   - Otherwise reset current to 1.
   - Update maximum.
4. Print maximum.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(n)

---

## Concepts Used

- Arrays
- Linear Traversal
- Greedy Observation
- Longest Continuous Segment
