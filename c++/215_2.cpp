#include<iostream>
#include<vector>

using namespace std;

void printDistinct(int arr[], int n)
{
    vector<int>v;
    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;

        if (i == j)
            //v.push_back(arr[i]);

    }
    sort(v.begin(),v.end());
    int size = v.size();
    cout << v[size-3]<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    printDistinct(arr,n);
    return 0;
}