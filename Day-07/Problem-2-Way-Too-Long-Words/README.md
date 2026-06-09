# Way Too Long Words

## Problem

Given n words, abbreviate every word whose length is greater than 10.

The abbreviation consists of:

* First character
* Number of omitted middle characters
* Last character

## Approach

For each word:

1. Check its length.
2. If length > 10:

   * Output first character + (length - 2) + last character.
3. Otherwise output the original word.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Concepts Used

* Strings
* Conditional Statements
* Input Processing
