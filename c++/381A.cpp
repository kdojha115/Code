// Codeforce
// 381 A. Sereja and Dima

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int s = 0;
    int d = 0;
    int i = 1;

    while (v.size() > 0)
    {
        if (i % 2 == 1)
        {
            if (v[v.size() - 1] > v[0])
            {
                s += v[v.size() - 1];
                v.pop_back();
            }
            else
            {
                s += v[0];
                v.erase(v.begin());
            }
        }
        else
        {
            if (v[v.size() - 1] > v[0])
            {
                d += v[v.size() - 1];
                v.pop_back();
            }
            else
            {
                d += v[0];
                v.erase(v.begin());
            }
        }
        i++;
    }
    
    cout << s << " " << d << endl;
    return 0;
}