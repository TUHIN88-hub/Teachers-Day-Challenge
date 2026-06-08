Problem 3 – Reverse Linked List
Problem Link

https://leetcode.com/problems/reverse-linked-list/

Difficulty

Easy

Approach

Use an iterative pointer-based solution.

Maintain:

prev → Previous node
curr → Current node
nextNode → Next node

Reverse links one by one until the end of the list is reached.

Algorithm
Initialize prev = nullptr.
Set curr = head.
While curr is not null:
Store next node.
Reverse current link.
Move prev and curr forward.
Return prev as the new head.
Complexity
Time Complexity: O(n)
Space Complexity: O(1)
C++ Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};
