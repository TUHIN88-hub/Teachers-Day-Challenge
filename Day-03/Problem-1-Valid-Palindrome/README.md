# Valid Palindrome (LeetCode 125)

## Difficulty

Easy

## Language

C++

## Problem Statement

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward.

Given a string s, return true if it is a palindrome, or false otherwise.

---

## Approach

Use the Two Pointer technique.

1. Start one pointer from the beginning.
2. Start another pointer from the end.
3. Skip non-alphanumeric characters.
4. Convert characters to lowercase.
5. Compare both characters.
6. If all comparisons match, return true.

---

## C++ Solution

```cpp
class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right && !isalnum(s[left]))
                left++;

            while (left < right && !isalnum(s[right]))
                right--;

            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};
```

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

## Concepts Practiced

- Strings
- Two Pointers
- Character Processing
- Space Optimization
