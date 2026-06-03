# Group Anagrams (LeetCode 49)

## Difficulty

Medium

## Language

C++

## Problem Statement

Given an array of strings strs, group the anagrams together.

You may return the answer in any order.

---

## Approach

Two strings are anagrams if their sorted forms are identical.

Example:

eat → aet

tea → aet

ate → aet

Use a Hash Map where:

* Key = Sorted string
* Value = List of strings having the same sorted form

Finally return all groups.

---

## C++ Solution

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }

        vector<vector<string>> result;

        for (auto &pair : mp) {
            result.push_back(pair.second);
        }

        return result;
    }
};
```

## Complexity Analysis

Time Complexity:

O(n × k log k)

Space Complexity:

O(n × k)

where:

* n = number of strings
* k = maximum string length

## Concepts Practiced

* Strings
* Sorting
* Hash Maps
* Grouping Techniques
* Pattern Recognition
