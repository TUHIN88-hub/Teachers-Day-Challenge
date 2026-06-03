# Fizz Buzz (LeetCode 412)

## Difficulty

Easy

## Language

C++

## Problem Statement

Given an integer n, return a string array answer (1-indexed) where:

* answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
* answer[i] == "Fizz" if i is divisible by 3.
* answer[i] == "Buzz" if i is divisible by 5.
* answer[i] == i (as a string) if none of the above conditions are true.

---

## Approach

Iterate from 1 to n.

For each number:

1. Check divisibility by both 3 and 5.
2. Check divisibility by 3.
3. Check divisibility by 5.
4. Otherwise convert the number to a string.

Store the result in a vector and return it.

---

## C++ Solution

```cpp
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                result.push_back("FizzBuzz");
            else if (i % 3 == 0)
                result.push_back("Fizz");
            else if (i % 5 == 0)
                result.push_back("Buzz");
            else
                result.push_back(to_string(i));
        }

        return result;
    }
};
```

## Complexity Analysis

* Time Complexity: O(n)
* Space Complexity: O(n)

## Concepts Practiced

* Loops
* Conditional Statements
* Modulo Arithmetic
* String Manipulation
