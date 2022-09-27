// Codeforces
// 1512 A. Spy Detected

#include <iostream>
using namespace std;

int spy(int n, int arr[])
{
    if (arr[0] == arr[1])
    {
        for (int i = 2; i < n; i++)
        {
            if (arr[0] != arr[i])
            {
                return i + 1;
            }
        }
    }
    else
    {
        if (arr[2] == arr[0])
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }
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
        int k = spy(n, arr);
        cout << k << endl;
    }
    return 0;
}