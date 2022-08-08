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
    int array[n][m];
    for(int i=0;i<row.size();i++)
    {
        for(int j = 0;j<m;j++)
        {    
            array[row[i]][j] = 0;
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0,k=0 ;k<m,j<col.size();k++,j++)
        {
            if(j == k){
            array[i][k] = 0;
            }
            else{
                array[i][k] = 1;
            }
        }
    }

   
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cout << array[i][j] <<" ";
        }
        cout << endl;
    }
}