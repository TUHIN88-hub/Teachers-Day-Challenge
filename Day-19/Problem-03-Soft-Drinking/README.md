# A. Soft Drinking

## Problem Statement

A group of friends wants to make as many toasts as possible using soft drink, lime slices, and salt. Each toast requires a fixed amount of drink, one lime slice, and a fixed amount of salt. Find the maximum number of toasts each friend can make.

---

## Approach

The total number of possible toasts depends on three resources:

- Drink available
- Lime slices available
- Salt available

Calculate the number of toasts possible from each resource and choose the minimum value, as the resource that runs out first limits the total number of toasts.

Finally, divide the total number of possible toasts by the number of friends.

---

## Algorithm

1. Read all input values.
2. Calculate toasts possible from the drink.
3. Calculate available lime slices.
4. Calculate toasts possible from salt.
5. Find the minimum among all possible toasts.
6. Divide it by the number of friends.
7. Print the result.

---

## Complexity Analysis

- Time Complexity: O(1)
- Space Complexity: O(1)

---

## Concepts Used

- Mathematics
- Integer Division
- Minimum Calculation
- Implementation
- Resource Optimization
