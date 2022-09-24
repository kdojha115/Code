// Codeforces
//  469A. I Wanna Be the Guy

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int parr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> parr[i];
    }
    int q;
    cin >> q;
    int qarr[q];
    for (int i = 0; i < q; i++)
    {
        cin >> qarr[i];
    }
    vector<int> v;
    for (int i = 0; i < p; i++)
    {
        int j;
        for (j = 0; j < v.size(); j++)
        {
            if (parr[i] == v[j])
            {
                break;
            }
        }
        if (v.size() == 0)
        {
            v.push_back(parr[0]);
        }
        if (j == v.size())
        {
            v.push_back(parr[i]);
        }
    }
    for (int i = 0; i < q; i++)
    {
        int j;
        for (j = 0; j < v.size(); j++)
        {
            if (qarr[i] == v[j])
            {
                break;
            }
        }
        if (v.size() == 0)
        {
            v.push_back(qarr[0]);
        }
        if (j == v.size())
        {
            v.push_back(qarr[i]);
        }
    }
    if (v.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}