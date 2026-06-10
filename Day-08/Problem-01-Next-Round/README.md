Problem: A. Next Round

Platform: Codeforces
Difficulty: 800

Problem Statement

Given the scores of participants in non-increasing order and the position k, determine how many participants advance to the next round.

A participant advances if:

Their score is at least the score of the participant in the k-th position.
Their score is greater than 0.
Approach
Store the score at position k.
Traverse all scores.
Count participants whose score is:
>= kthScore
> 0
Algorithm
Read n and k.
Read all scores.
Set threshold = scores[k-1].
Count scores satisfying:
score >= threshold
score > 0
Print the count.
Complexity Analysis
Time Complexity: O(n)
Space Complexity: O(1)
Concepts Used
Arrays
Traversal
Conditional Logic
Solution

Implemented in C++.
