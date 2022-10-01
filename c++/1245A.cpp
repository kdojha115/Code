// Codeforces
// 1245 A. Good ol' Numbers Coloring

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }

    return a;
}

int main()
{
    int t;
    for (cin >> t; t--;)

    {
        int a, b;
        cin >> a >> b;

        if (gcd(a, b) == 1)
            cout << "Finite" << '\n';
        else
            cout << "Infinite" << '\n';
    }

    return 0;
}