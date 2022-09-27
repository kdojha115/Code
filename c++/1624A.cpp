// Codeforces
// 1624 A. Plus One on the Subset

#include <iostream>
using namespace std;

int maxf(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (res < arr[i])
        {
            res = arr[i];
        }
    }
    return res;
}

int minf(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (res > arr[i])
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max = maxf(arr, n);
        int min = minf(arr, n);
        
        int ans = max - min;

        cout << ans << endl;
    }
    return 0;
}