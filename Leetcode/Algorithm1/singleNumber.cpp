// Leetcode
// Algorithm 1 
// Day 14
// 136. Single Number

// Approach 1:

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i] = nums[i]^nums[i-1];
        }
        return nums[nums.size()-1];
    }
};