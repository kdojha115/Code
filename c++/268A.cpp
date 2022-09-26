// Codeforces
// 268 A. Games

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h[n], g[n];

    for (int i = 0; i < n; i++)
    {

        cin >> h[i];
        cin >> g[i];
    }

    int c = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (h[i] == g[j] && i != j)
            {
                c++;
            }
        }
    }
    
    cout << c << endl;
    return 0;
}