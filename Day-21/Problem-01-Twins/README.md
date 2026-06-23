# A. Twins

## Problem Statement

Given a collection of coins, determine the minimum number of coins needed such that the sum of the selected coins is strictly greater than the sum of the remaining coins.

---

## Approach

To minimize the number of selected coins, always choose the highest-value coins first.

After sorting the coins in descending order, keep adding coins until the selected sum becomes greater than the remaining sum.

This greedy strategy guarantees the minimum number of coins required.

---

## Algorithm

1. Read the number of coins and their values.
2. Compute the total sum of all coins.
3. Sort the coins in descending order.
4. Pick coins from largest to smallest.
5. Maintain the selected sum.
6. Stop when:

   selectedSum > totalSum - selectedSum

7. Output the number of selected coins.

---

## Complexity Analysis

- Time Complexity: O(n log n)
- Space Complexity: O(n)

---

## Concepts Used

- Greedy Algorithm
- Sorting
- Arrays
- Prefix Sum
- Optimization
