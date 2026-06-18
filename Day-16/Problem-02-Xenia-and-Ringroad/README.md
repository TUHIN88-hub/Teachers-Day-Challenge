# B. Xenia and Ringroad

## Problem Statement
Xenia lives in a city where houses are arranged in a circular ringroad numbered from 1 to n in clockwise order. She starts from house 1 and has to complete m tasks in a given sequence.

Moving from one house to the next in clockwise direction takes one unit of time. Find the minimum time required for Xenia to complete all tasks.

## Approach
- Maintain the current house where Xenia is located.
- For every task:
  - If the destination house number is greater than or equal to the current house, move directly.
  - Otherwise, complete the remaining circle and continue from house 1 to reach the destination.
- Add the required moves to the total time.

## Algorithm
1. Initialize current position as house 1 and time as 0.
2. Traverse each task in the given order.
3. Calculate the clockwise distance:
   - Direct movement if destination ≥ current.
   - Circular movement if destination < current.
4. Update the current position.
5. Print the total time.

## Complexity Analysis
- Time Complexity: O(m)
- Space Complexity: O(1)

## Concepts Used
- Simulation
- Circular Array Logic
- Mathematical Calculation
- Large Integer Handling
