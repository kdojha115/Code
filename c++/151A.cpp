// Codeforces
// 151 A. Soft Drinking

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int t1, t2, t3;

    t1 = (k * l) / nl;
    t2 = c * d;
    t3 = p / np;

    int ans = min(t1, min(t2, t3));
    
    cout << ans / n << endl;

    return 0;
}