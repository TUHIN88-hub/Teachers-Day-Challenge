# Find Numbers with Even Number of Digits (LeetCode 1295)

## Difficulty

Easy

## Problem Statement

Given an array `nums` of integers, return how many of them contain an even number of digits.

### Example

Input:
nums = [12,345,2,6,7896]

Output:
2

Explanation:
12 contains 2 digits.
7896 contains 4 digits.

Therefore, there are 2 numbers with an even number of digits.

---

## Approach

* Iterate through each number in the array.
* Count the number of digits using repeated division by 10.
* Check if the digit count is even.
* Increment the counter if true.

---

## C++ Solution

```cpp
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            int digits = 0;

            while (num > 0) {
                digits++;
                num /= 10;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
```

## Complexity Analysis

* Time Complexity: O(n × d)
* Space Complexity: O(1)

## Concepts Practiced

* Arrays
* Digit Manipulation
* Iteration
* Time Complexity Analysis
