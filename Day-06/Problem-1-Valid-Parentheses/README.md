Problem 1 – Valid Parentheses
Problem Link

https://leetcode.com/problems/valid-parentheses/

Difficulty

Easy

Approach

Use a stack to keep track of opening brackets.

Push opening brackets onto the stack.
For every closing bracket:
Check whether the stack is empty.
Verify that the top bracket matches.
If all brackets match correctly and the stack is empty at the end, the string is valid.
Algorithm
Create an empty stack.
Traverse the string.
Push opening brackets.
For closing brackets:
Check for empty stack.
Compare with stack top.
Return true if stack is empty after traversal.
Complexity
Time Complexity: O(n)
Space Complexity: O(n)
C++ Solution
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
