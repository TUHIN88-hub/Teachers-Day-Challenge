# Remove Linked List Elements (LeetCode 203)

## Difficulty

Easy

## Problem Statement

Given the head of a linked list and an integer val, remove all nodes that have Node.val == val, and return the new head.

---

## Approach

To handle cases where the head node itself needs to be removed, use a dummy node before the head.

1. Create a dummy node.
2. Traverse the list.
3. If the next node contains the target value, skip it.
4. Otherwise move forward.
5. Return dummy->next.

---

## C++ Solution

```cpp
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* current = dummy;

        while (current->next != nullptr) {
            if (current->next->val == val) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }

        return dummy->next;
    }
};
```

## Complexity Analysis

* Time Complexity: O(n)
* Space Complexity: O(1)

## Concepts Practiced

* Linked Lists
* Dummy Nodes
* Pointer Manipulation
* Traversal
* Edge Case Handling
