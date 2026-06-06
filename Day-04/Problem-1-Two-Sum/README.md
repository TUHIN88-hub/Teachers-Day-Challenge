# Two Sum (LeetCode 1)

## Difficulty

Easy

## Language

C++

## Problem Statement

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume exactly one solution exists.

---

## Approach

Use a Hash Map to store:

number → index

For each element:

1. Find the complement.
2. Check if complement exists.
3. Return indices if found.
4. Otherwise store current number.

---

## C++ Solution

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
```

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(n)

## Concepts Practiced

- Arrays
- Hash Maps
- Efficient Lookup
- Optimization Techniques
