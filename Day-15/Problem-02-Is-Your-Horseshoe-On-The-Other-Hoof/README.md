Problem 2: Is your horseshoe on the other hoof? (Codeforces)
Problem Statement:

Valera has four horseshoes, each with a color represented by an integer. Determine the minimum number of horseshoes he needs to buy so that all four horseshoes have different colors.

Approach:
Use a set to store the colors of the horseshoes.
A set automatically removes duplicate colors.
Count the number of unique colors.
Subtract the count from 4 to get the number of new horseshoes needed.
Complexity:
Time Complexity: O(1)
Space Complexity: O(1)
Concepts Used:
STL Set
Unique Elements Counting
Basic Mathematics
