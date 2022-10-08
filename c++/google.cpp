// Google coding challenge
// GOCC56
//#include <bits/stdc++.h>

#include <iostream>
#include <cmath>
using namespace std;

int find(int n, int m, int arr[])
{
    int k = 1, test = INT_MAX;
    while (test >= m)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % k == 0)
            {
                sum += arr[j] / k;
            }
            else
            {
                sum += (arr[j] / k) + 1;
            }
        }
        if (sum <= m)
        {
            return k;
        }
        test = sum;
        k++;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << find(n, m, arr);
    return 0;
}