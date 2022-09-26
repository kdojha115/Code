// Leetcode
// 215. Kth Largest Element in an Array

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    stack<int> st;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        st.push(nums[i]);
    }
    for (int i = 0; i < k - 1; i++)
    {
        st.pop();
    }
    return st.top();
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int k=3;
    int a = findKthLargest(v, k);
    cout << a << endl;
    return 0;
}