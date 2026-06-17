Problem 1: Boy or Girl (Codeforces)
Problem Statement:

Given a username consisting of lowercase English letters, determine the gender based on the number of distinct characters.

If the number of distinct characters is even → print "CHAT WITH HER!"
If the number of distinct characters is odd → print "IGNORE HIM!"
Approach:
Store all characters of the string in a set to automatically remove duplicates.
Count the number of unique characters.
Check whether the count is even or odd and print the corresponding output.
Complexity:
Time Complexity: O(n)
Space Complexity: O(n)
Concepts Used:
Strings
Set (STL)
Counting Unique Elements
