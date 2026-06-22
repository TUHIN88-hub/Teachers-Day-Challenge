# A. Young Physicist

## Problem Statement

Given `n` force vectors in three-dimensional space, determine whether the body is in equilibrium. A body is considered to be in equilibrium if the sum of all forces along the x, y, and z axes is zero.

---

## Approach

The solution keeps track of the total force along each axis by summing all x, y, and z components separately.

If the final sums of all three axes are zero, the body is in equilibrium; otherwise, it is not.

---

## Algorithm

1. Read the number of force vectors `n`.
2. Initialize three variables to store the sum of x, y, and z components.
3. Traverse all vectors and add their respective components to the totals.
4. Check if all three sums are equal to zero.
5. Print `"YES"` if equilibrium exists; otherwise, print `"NO"`.

---

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(1)

---

## Concepts Used

- Vectors
- Mathematics
- Simulation
- Conditional Statements
- Input Handling
