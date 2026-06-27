# Problem 1: Soldier and Bananas

## Problem Statement
A soldier wants to buy `w` bananas. The price of the first banana is `k` dollars, the second costs `2k`, the third `3k`, and so on.

Given the amount of money the soldier initially has (`n`), determine how much additional money he must borrow to buy all the bananas.

---

## Approach

- The total price follows an arithmetic progression.
- Calculate the total cost using the formula:

Total Cost = k × w × (w + 1) / 2

- If the total cost exceeds the available money, output the difference.
- Otherwise, output `0`.

---

## Algorithm

1. Read `k`, `n`, and `w`.
2. Compute the total cost using the arithmetic series formula.
3. Compare it with the available money.
4. Print the borrowed amount or `0`.

---

## Time Complexity

**O(1)**

## Space Complexity

**O(1)**

---

## Concepts Used

- Mathematics
- Arithmetic Progression
- Formula-Based Computation
- Implementation
