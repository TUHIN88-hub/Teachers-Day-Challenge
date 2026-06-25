# A. GukiZ and Contest

## Problem Statement

Given the ratings of all students, determine the contest position of each student.

A student's position is:

Position = 1 + (Number of students having a strictly higher rating)

Students with equal ratings share the same position.

---

## Approach

For every student:

- Compare their rating with every other student's rating.
- Count the number of students with a higher rating.
- Add one to obtain the final rank.

Since the maximum number of students is only 2000, an O(n²) solution is efficient enough.

---

## Algorithm

1. Read all student ratings.
2. For each student:
   - Count ratings greater than the current rating.
   - Output count + 1.
3. Print all positions.

---

## Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

---

## Concepts Used

- Arrays
- Nested Loops
- Ranking
- Brute Force
- Implementation
