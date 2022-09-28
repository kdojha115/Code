// Codeforces
// 32 B. Borze

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            cout << "0";
        }

        else if (s[i] == '-')
        {
            if (s[i + 1] == '.')
            {
                cout << "1";
                i++;
            }

            else if (s[i + 1] == '-')
            {
                cout << "2";
                i++;
            }

            else
            {
                cout << endl;
            }
        }
        
        else
        {
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}