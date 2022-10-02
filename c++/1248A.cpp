// Codeforces
// 1248 A. Integer Points

#include <iostream>
using namespace std;

int main()
{
    long long int testcase;
    cin >> testcase;

    while (testcase--)
    {
        long long int dls, evenDls = 0;
        ;
        cin >> dls;

        long long p[dls];

        for (int i = 0; i < dls; i++)
        {
            cin >> p[i];

            if (p[i] % 2 == 0)
                evenDls++;
        }

        long long int jls, evenJls = 0;
        cin >> jls;

        long long int q[jls];

        for (int i = 0; i < jls; i++)
        {
            cin >> q[i];

            if (q[i] % 2 == 0)
                evenJls++;
        }

        cout << (evenDls * evenJls) + ((dls - evenDls) * (jls - evenJls)) << endl;
    }
    return 0;
}