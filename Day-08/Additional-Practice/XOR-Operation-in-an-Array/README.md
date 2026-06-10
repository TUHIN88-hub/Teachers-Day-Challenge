Problem: 1486. XOR Operation in an Array

Platform: LeetCode
Difficulty: Easy

Problem Statement

Given integers n and start, construct an array where:

nums[i] = start + 2 * i

Return the bitwise XOR of all elements in the array.

Approach
Initialize xor = 0.
Iterate from 0 to n-1.
Generate each element using:
start + 2 * i
XOR it with the current answer.
Return the final result.
Complexity Analysis
Time Complexity: O(n)
Space Complexity: O(1)
Concepts Used
Bit Manipulation
XOR Operation
Iteration
Solution Language

Java
