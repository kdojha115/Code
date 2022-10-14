// Leetcode
// 53. Maximum Subarray

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int n = nums.size();
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(sum < 0)
            {
                sum = 0;
            }
            sum += nums[j];
            ans = max(ans,sum);
        }
        
        return ans;
    }
};
int main()
{
    vector<int> nums;
    while(1)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
        if(cin.get() == '\n'){
            break;
        }
    }
    Solution obj;
    int ans = obj.maxSubArray(nums);
    cout << ans <<endl;
    
    return 0; 
}