# Problem 03 - Soldier and Cards

## Problem Link
https://codeforces.com/problemset/problem/546/C

## Difficulty
1400

## Language
C++

## Concepts Used
- Queue
- Simulation
- STL Queue
- Set
- State Tracking

## Approach

- Store both players' cards in separate queues.
- Simulate each round by comparing the front cards.
- The winner appends the opponent's card followed by their own card to the back of their queue.
- Maintain a set of previously visited game states.
- If a state repeats, the game enters an infinite loop, so print `-1`.
- Otherwise, continue until one player's queue becomes empty.

## Time Complexity

O(Number of States × n)

## Space Complexity

O(Number of States × n)
