# A. I Wanna Be the Guy

## Problem Statement
There are `n` levels in a game. Little X and Little Y can complete certain levels individually. Determine whether they can complete all levels together by combining the levels they can pass.

Print:
- "I become the guy." if all levels can be completed.
- "Oh, my keyboard!" otherwise.

## Approach
- Store the levels completed by both players in a set.
- Since a set stores only unique elements, duplicate levels are automatically removed.
- Compare the number of unique levels with the total number of levels `n`.
- If they are equal, all levels can be completed.

## Algorithm
1. Read the total number of levels `n`.
2. Insert all levels Little X can pass into a set.
3. Insert all levels Little Y can pass into the same set.
4. Check if the size of the set equals `n`.
5. Print the required result.

## Complexity Analysis
- Time Complexity: O(p + q)
- Space Complexity: O(n)

## Concepts Used
- Set Data Structure
- Unique Element Storage
- Input Processing
- Conditional Logic
