# Top K Frequent Elements (LeetCode 347)

## Difficulty

Medium

## Language

C++

## Problem Statement

Given an integer array nums and an integer k, return the k most frequent elements.

You may return the answer in any order.

---

## Approach

Use a combination of:

- Hash Map for frequency counting
- Min Heap for maintaining top k elements

### Steps

1. Count frequency of each number.
2. Push frequency-element pairs into a Min Heap.
3. Keep heap size at most k.
4. Extract remaining elements from heap.

---

## C++ Solution

```cpp
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > minHeap;

        for (auto &entry : freq) {

            minHeap.push({entry.second, entry.first});

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> result;

        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;
    }
};
```

## Complexity Analysis

- Time Complexity: O(n log k)
- Space Complexity: O(n)

## Concepts Practiced

- Hash Maps
- Heaps
- Priority Queues
- Frequency Counting
- Optimization
