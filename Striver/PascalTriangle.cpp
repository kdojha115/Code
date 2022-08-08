#include<iostream>
#include<vector>

using namespace std;


vector<vector<int> >generate(int n)
{
    vector<vector<int> >r(n);
    for(int i=0;i<n;i++)
    {
        r[i].resize(i+1);
        r[i][0] = r[i][i] = 1;

        for(int j = 1;j>=i-1;j++)
        {
            r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
    }
    return r;
}


int main()
{
    int n;
    cin >> n;
    vector<vector<int> >arr;
    arr  = generate(n);
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            cout <<arr[i][j]<<" ";
        }
        cout <<endl;
    }

}
