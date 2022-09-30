// Codeforces
// 1692 A. Marathon

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < 4; i++)
        {
            if (arr[0] < arr[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}