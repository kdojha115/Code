// Ordinary Numbers

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int temp = n, count = 0, ans = 0;

        while (temp > 0)
        {
            count++;
            temp /= 10;
        }
        if (count > 1)
        {
            ans += (count - 1) * 9;
            count = round(pow(10, count) - 1) / 9;
            ans += n / count;
            cout << ans << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}