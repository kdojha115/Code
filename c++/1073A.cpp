// Codeforces
// 1073 A. Diverse Substring

#include <iostream>
using namespace std;

int diverse(string str, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            cout << "YES" << endl;
            cout << str[i] << str[i + 1] << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    diverse(str, n);
    return 0;
}