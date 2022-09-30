// Codeforces
// 1551 A. Polycarp and Coins

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s, d;
        if (n % 3 == 1)
        {
            s = n / 3 + 1;
            d = n / 3;
        }
        else if (n % 3 == 2)
        {
            s = n / 3;
            d = n / 3 + 1;
        }
        else
        {
            s = n / 3;
            d = n / 3;
        }

        cout << s << " " << d << endl;
        return 0;
    }
}