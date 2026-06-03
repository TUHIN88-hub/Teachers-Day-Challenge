# Same Tree (LeetCode 100)

## Difficulty

Easy

## Language

C++

## Problem Statement

Given the roots of two binary trees p and q, determine if they are structurally identical and contain the same values.

Return true if they are the same tree, otherwise return false.

---

## Approach

Recursively compare corresponding nodes of both trees.

1. If both nodes are NULL → return true.
2. If one node is NULL → return false.
3. If values differ → return false.
4. Recursively compare:
   - Left subtree
   - Right subtree

Both must return true for the trees to be identical.

---

## C++ Solution

```cpp
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if (p == nullptr && q == nullptr)
            return true;

        if (p == nullptr || q == nullptr)
            return false;

        if (p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
```

## Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(h)

where:

- n = number of nodes
- h = height of the tree

## Concepts Practiced

- Binary Trees
- Recursion
- DFS
- Tree Traversal
- Structural Comparison
