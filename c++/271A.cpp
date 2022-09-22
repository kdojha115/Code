// Codeforces
// 271 A. Beautiful Year

#include <iostream>

using namespace std;

int beautifulYear(int n)
{
    int arr[10];
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }
    int temp = n;
    while (temp > 0)
    {
        arr[temp % 10] = 1;
        temp /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }

    if (count == 4)
    {
        return n;
    }
    else
    {
        n = n + 1;
        return beautifulYear(n);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int ans = beautifulYear(n + 1);
    cout << ans << endl;
    return 0;
}