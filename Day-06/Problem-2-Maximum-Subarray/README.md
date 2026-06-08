Problem 2 – Maximum Subarray
Problem Link

https://leetcode.com/problems/maximum-subarray/

Difficulty

Medium

Approach

Use Kadane's Algorithm.

For each element:

Decide whether to start a new subarray from the current element.
Or extend the previous subarray.

Maintain:

currentSum → maximum subarray ending at current position.
maxSum → overall maximum subarray sum.
Algorithm
Initialize currentSum and maxSum with the first element.
Traverse the array from index 1.
Update:
currentSum = max(nums[i], currentSum + nums[i])
Update:
maxSum = max(maxSum, currentSum)
Return maxSum.
Complexity
Time Complexity: O(n)
Space Complexity: O(1)
C++ Solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
