#include<iostream>
using namespace std;

int find(vector<int>& nums,int target)
{
    int i = 0, j = nums.size()-1,mid; 
    if(nums[i] == target) return i;
    if(nums[j] == target) return j;
    mid = i+(j-i-1)/2;
    if(nums[mid] == target) return mid;
    else if(nums[mid] > )
}
int main()
{
    cout << find(nums, target) <<endl;
    return 0;
}