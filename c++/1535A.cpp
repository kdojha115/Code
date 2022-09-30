// Codeforces
// 1535 A. Fair Playoff

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, flag = 0;

        cin >> a >> b >> c >> d;

        int teamAWinner, teamALosser, teamBWinner, teamBLosser;

        if (a > b)
        {
            teamALosser = b;
            teamAWinner = a;
        }
        else
        {
            teamALosser = a;
            teamAWinner = b;
        }

        if (c > d)
        {
            teamBLosser = d;
            teamBWinner = c;
        }
        else
        {
            teamBLosser = c;
            teamBWinner = d;
        }

        if (teamALosser > teamBWinner || teamBLosser > teamAWinner)
        {
            flag = 1;
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}