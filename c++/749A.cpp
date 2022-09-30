// Codeforces
// 749 A. Bachgold Problem

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;
    m = n / 2;
    cout << m << endl;
    
    for (int i = 0; i < m; i++)
    {
        if (n % 2 == 1 && i == m - 1)
        {
            cout << "3";
            break;
        }
        cout << "2"
             << " ";
    }
    cout << endl;
    return 0;
}