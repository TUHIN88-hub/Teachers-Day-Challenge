# A. Even Odds

## Problem Statement

Given integers n and k, arrange numbers from 1 to n such that all odd numbers come first in ascending order, followed by all even numbers in ascending order.

Determine the number at the k-th position in the resulting sequence.

---

## Approach

The sequence contains:

1. All odd numbers
2. All even numbers

First calculate how many odd numbers exist:

oddCount = (n + 1) / 2

If k is within the odd section, directly compute the k-th odd number.

Otherwise, find the corresponding position in the even section and compute the required even number.

---

## Algorithm

1. Read n and k.
2. Compute oddCount.
3. If k ≤ oddCount:
   - Answer = 2 × k − 1
4. Else:
   - Answer = 2 × (k − oddCount)
5. Print the answer.

---

## Complexity Analysis

- Time Complexity: O(1)
- Space Complexity: O(1)

---

## Concepts Used

- Mathematics
- Number Theory
- Pattern Observation
- Constant Time Computation
