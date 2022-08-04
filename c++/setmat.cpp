#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    int arr[n][m];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin >>arr[i][j]; 
        }
    }
    vector<int>row;
    vector<int>col;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] == 0)
            {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }

    for(int i=0;i<row.size();i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[row[i]][j] = 0;
        }
    }
    for(int i = 0;i<col.size();i++)
    {
        for(int j = 0 ;j<n;j++)
        {
            arr[j][col[i]] = 0;
        }
    }

   
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}