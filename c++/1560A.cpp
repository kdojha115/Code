// Codeforces
// 1560 A.Dislike of Threes

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
        int k = 0;
        for (int i = 1;; i++)
        {
            if (i % 10 == 3 || i % 3 == 0)
            {
                continue;
            }
            else
            {
                k++;
            }
            if (n == k)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}