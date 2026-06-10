Problem: A. Beautiful Matrix

Platform: Codeforces

Problem Statement

Given a 5×5 matrix containing exactly one 1, determine the minimum number of row/column swaps needed to move it to the center position (3,3).

Approach
Find the coordinates of 1.
Compute Manhattan Distance to (3,3).
Output the distance.
Formula
Moves = |row - 3| + |col - 3|
Complexity Analysis
Time Complexity: O(1)
Space Complexity: O(1)
Concepts Used
Matrix Traversal
Coordinates
Manhattan Distance
