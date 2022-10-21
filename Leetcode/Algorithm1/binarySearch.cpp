// Leetcode
// Algorithm 1 
// Day 1
// Binary Search

// (i) Without Recursion

#include<vector>

class Solution {
    public:
    
    int search(vector<int>&nums, int target)
    {
        int left = 0, right = nums.size()-1;
        while (left < right)
        {
            int mid = left + (right - left + 1)/2;

            if(nums[mid] > target) right = mid - 1;
            else left = mid ;
        }
        return nums[left] == target ? left : -1;
    }
};

// (ii) Using Recursion

class Solution{
    public:
    int searchB(vector<int>&nums, int start, int end, int target)
    {
        if( start <= end)
        {
            int mid = (start + end)/2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) return searchB( nums, start, mid - 1, target);
            else return searchB( nums, mid + 1, end, target);
        }
        else{
            return -1;
        }
    }

    int search(vector<int>&nums, int target){
        int ans = searchB( nums, 0, nums.size()-1, target);
        return ans;
    }
};


// (iii)  Using lower_bound (STL)

class Solution{
    public:
    int search(vector<int>& nums, int target){
        int ind = lower_bound( nums.begin(), nums.end(), target) - nums.begin();
        
        if(ind == nums.size()) return -1;
        return nums[ind] == target ? ind : -1;
    }
};
