// Leetcode
// Algorithm 1 
// Day 1
// Search Insert Position ( 35 )

// (i) Using Binary Search 

#include<vector>

class Solution {
    public:

    int searchInsert( vector<int>& nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return left;
    }
};

// (ii) Using Lower_bound ( STL )

class Solution { 
    public:
    
    int searchInsert( vector<int> & nums, int target)
    {
        int position = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return position;
    }
};