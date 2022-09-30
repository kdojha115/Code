// Codeforces
// 492 A. Vanya and Cubes

#include <iostream>

using namespace std;

int sumOfK(int n)
{
    if (n == 1)
        return 1;
    return n + sumOfK(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int a = 1, k = 1;

    while (n >= k)
    {
        a++;
        k += sumOfK(a);
    }
    cout << a - 1 << endl;
    return 0;
}