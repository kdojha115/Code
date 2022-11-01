// Leetcode
// Algorithm 1 
// Day 12
// 198. House Robber

// Approach 1:

// Using Simple Brute-force

class Solution {
public:
    int rob(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        int n = nums.size();
        for (int i=0; i<n; i++)
        {
            if (i%2==0)
            {
                sum1 = max(sum1+nums[i], sum2);
            }
            else
            {
                sum2 = max(sum1, sum2+nums[i]);
            }
        }

        return max(sum1, sum2);
    }
};