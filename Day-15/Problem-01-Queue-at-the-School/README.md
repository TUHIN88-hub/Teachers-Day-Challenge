Problem 1: Queue at the School (Codeforces)
Problem Statement:

Given the initial arrangement of boys and girls in a queue, determine the arrangement after t seconds where every second each boy standing directly before a girl lets her move forward.

Approach:
Simulate the queue movement for each second.
Check every adjacent pair in the string.
Swap "BG" with "GB" whenever found.
Skip the next position after a swap to avoid moving the same child twice in one second.
Complexity:
Time Complexity: O(n × t)
Space Complexity: O(1)
Concepts Used:
Strings
Simulation
Swapping
Iteration
