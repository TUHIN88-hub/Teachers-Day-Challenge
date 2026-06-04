# Invert Binary Tree (LeetCode 226)

## Difficulty

Easy

## Language

C++

## Problem Statement

Given the root of a binary tree, invert the tree and return its root.

---

## Approach

For each node:

1. Swap left and right children.
2. Recursively invert left subtree.
3. Recursively invert right subtree.

---

## C++ Solution

```cpp
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if (root == nullptr)
            return nullptr;

        swap(root->left, root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
```

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(h)

## Concepts Practiced

- Binary Trees
- Recursion
- Tree Traversal
