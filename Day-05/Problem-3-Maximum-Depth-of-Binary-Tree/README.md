# Maximum Depth of Binary Tree (LeetCode 104)

## Difficulty
Easy

## Language
C++

## Problem Statement

Given the root of a binary tree, return its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

---

## Approach

Use recursion (Depth First Search).

### Steps

1. If root is NULL, return 0.
2. Recursively compute:
   - Left subtree depth
   - Right subtree depth
3. Return:

```text
1 + max(leftDepth, rightDepth)
```

The extra 1 counts the current node.

---

## C++ Solution

```cpp
class Solution {
public:
    int maxDepth(TreeNode* root) {

        if (root == nullptr)
            return 0;

        return 1 + max(maxDepth(root->left),
                       maxDepth(root->right));
    }
};
```

## Complexity Analysis

- Time Complexity: O(n)
- Space Complexity: O(h)

## Concepts Practiced

- Binary Trees
- Recursion
- DFS
- Tree Traversal
