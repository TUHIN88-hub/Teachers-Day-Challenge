# Best Time to Buy and Sell Stock (LeetCode 121)

## Difficulty

Easy

## Language

C++

## Problem Statement

Given an array prices where prices[i] is the price of a stock on the ith day, find the maximum profit you can achieve by choosing one day to buy and a later day to sell.

Return the maximum profit.

---

## Approach

Maintain:

- Minimum stock price seen so far
- Maximum profit achieved so far

For each price:

1. Update minimum price.
2. Calculate current profit.
3. Update maximum profit.

---

## C++ Solution

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {

            minPrice = min(minPrice, price);

            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
```

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

## Concepts Practiced

- Arrays
- Greedy Algorithm
- Optimization
- Dynamic Tracking
