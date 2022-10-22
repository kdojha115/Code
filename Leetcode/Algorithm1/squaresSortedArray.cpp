// Leetcode
// Algorithm 1 
// Day 2
// 977. Squares of a Sorted Array


// (i) Using pre defined function

#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        for(auto &i : nums) i = i*i;
        sort(nums.begin(),nums.end());
        return nums;
    }
};

// // (ii) Using Brute Force

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0, right = nums.size() - 1;
        for (int k = nums.size() - 1; k >= 0; k--) {
            if (abs(nums[right]) > abs(nums[left])) 
                result[k] = nums[right] * nums[right--];
            else result[k] = nums[left] * nums[left++];
        }
        return result;
       
    }
};