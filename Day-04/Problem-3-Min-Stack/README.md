# Min Stack (LeetCode 155)

## Difficulty

Medium

## Language

C++

## Problem Statement

Design a stack that supports:

- push()
- pop()
- top()
- getMin()

All operations must run in O(1) time.

---

## Approach

Use two stacks:

1. Main Stack
   - Stores all values.

2. Min Stack
   - Stores minimum values encountered so far.

Whenever a value smaller than or equal to the current minimum is inserted, push it into the min stack.

When removing elements, remove from min stack as well if the removed element is the current minimum.

---

## C++ Solution

```cpp
class MinStack {
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {

    }

    void push(int val) {
        st.push(val);

        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        }

        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};
```

## Complexity Analysis

| Operation | Complexity |
|------------|------------|
| push | O(1) |
| pop | O(1) |
| top | O(1) |
| getMin | O(1) |

Space Complexity: O(n)

## Concepts Practiced

- Stack
- Design Problems
- Auxiliary Data Structures
- Constant Time Operations
