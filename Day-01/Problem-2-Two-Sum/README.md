# Two Sum (LeetCode 1)

## Difficulty
Easy

## Language
C++

## Time Complexity
O(n)

## Space Complexity
O(n)

## Approach

Use a Hash Map (unordered_map) to store previously visited numbers and their indices.

For each number:
1. Calculate the complement.
2. Check if it exists in the map.
3. If found, return both indices.
4. Otherwise store the current number.

## Concepts Practiced

- Arrays
- Hash Maps
- Optimization
- One-Pass Traversal
