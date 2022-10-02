#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    while (n--)
    {
        string a;
        cin >> a;
        long long int zero = 0, even = 0, sum = 0, i = 0;
        for (int i = 0; i < a.length(); i++)
        {
            int temp = stoi(a[i]);

            sum += temp;
            cout << sum << " ";
            if (temp == 0)
            {
                zero++;
            }
            if (temp % 2 == 0)
            {
                even++;
            }
        }
        cout << endl;

        if (sum % 3 == 0 && zero > 0 && even > 1)
        {
            cout << "red" << endl;
        }
        else
        {
            cout << "cyan" << endl;
        }
    }
    return 0;
}

