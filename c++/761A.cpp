// Codeforces
// 761 A. Dasha and Stairs

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = abs(n - m);

    if (n == 0 && m == 0)
    {
        cout << "NO" << endl;
    }
    else if (ans < 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}