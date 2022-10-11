// Leetcode
// 455. Assign Cookies

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0;
        int ans = 0;
        while (i < g.size() && j < s.size())
        {
            if (g[i] <= s[j])
            {
                ans++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> g, s;
    int k = 0;

    while (1)
    {
        int temp;
        cin >> temp;
        g.push_back(temp);
        if (cin.get() == '\n')
        {
            break;
        }
        k++;
    }
    k = 0;
    while (1)
    {
        int temp;
        cin >> temp;
        s.push_back(temp);
        if (cin.get() == '\n')
        {
            break;
        }
        k++;
    }
    Solution obj;
    int ans = obj.findContentChildren(g, s);
    cout << ans << endl;
    return 0;
}
