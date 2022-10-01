// Codeforces
// 1223 B. Strings Equalization

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s, t;
        cin >> s;
        cin >> t;

        int temp = 0;

        for (int i = 0; i < s.length(); i++)
        {

            for (int j = 0; j < t.length(); j++)
            {

                if (s[i] == t[j])
                {
                    temp++;
                    break;
                }

            }

        }

        if (temp > 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}