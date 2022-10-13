// Codeforces
// 1742 A. Sum

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+3);
        int sum = arr[0] + arr[1];
        int compare = arr[2];
        if(sum == compare)
        {
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}