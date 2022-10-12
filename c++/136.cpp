// Leetcode
// 136. Single Number

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = nums[i] ^ nums[i - 1];
        }
        return nums[nums.size() - 1];
    }
};

int main()
{
    vector<int> nums;
    while (1)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
        if (cin.get() == '\n')
        {
            break;
        }
    }
    Solution obj;
    int ans = obj.singleNumber(nums);
    cout << ans << endl;
    return 0;
}