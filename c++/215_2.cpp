// leetcode
// 414. Third Maximum Number

#include <iostream>
#include <vector>

using namespace std;

int thirdMax(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v;
    int c=0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (nums[i] == nums[j])
                break;

        if (i == j)
            v.push_back(nums[i]);
        else{
            c++;
            v.push_back(nums[i]);
        }
        
    }
    sort(v.begin(), v.end());
    int size = v.size();

    if (size < 3)
    {
        return v[size - 1];
    }
    else
    {
        return v[size - 3-c];
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    int k = thirdMax(nums);
    cout << k << endl;

    return 0;
}


