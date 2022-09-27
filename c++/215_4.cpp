// leetcode
// 414. Third Maximum Number

#include <iostream>

using namespace std;

int thirdMax(int nums)
{
    int n = nums.size();
    int c=0;
    sort(nums,nums+n);
    int com = nums[0];
    for (int i = 1; i < n; i++)
    {
        
        if (com == nums[i])
            c++;
        else{
            com = nums[i];
        }
        
    }
    if (n < 3)
    {
        return nums[n - 1];
    }
    else
    {
        return nums[n - 3-c];
    }

}

int main()
{
    int n;
    cin >> n;
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k = thirdMax(nums);
    cout << k << endl;

    return 0;
}


