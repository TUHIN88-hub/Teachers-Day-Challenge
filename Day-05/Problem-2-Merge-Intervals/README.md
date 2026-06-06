# Merge Intervals (LeetCode 56)

## Difficulty
Medium

## Language
C++

## Problem Statement

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals and return an array of non-overlapping intervals that cover all intervals in the input.

---

## Approach

1. Sort all intervals according to their starting point.
2. Add the first interval to the result.
3. Traverse the remaining intervals.
4. If the current interval overlaps with the last interval in the result:
   - Merge them by updating the ending point.
5. Otherwise:
   - Add the interval as a new entry.
6. Return the merged intervals.

---

## C++ Solution

```cpp
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> result;

        result.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {

            if (intervals[i][0] <= result.back()[1]) {
                result.back()[1] =
                    max(result.back()[1], intervals[i][1]);
            } else {
                result.push_back(intervals[i]);
            }
        }

        return result;
    }
};
```

## Complexity Analysis

- Time Complexity: O(n log n)
- Space Complexity: O(n)

## Concepts Practiced

- Sorting
- Greedy Algorithms
- Interval Problems
- Vector Operations
