// Codeforces
// 1360 B. Honest Coach

#include<iostream>

using namespace std;

int honestCoach(int arr[],int n){

    int min = INT_MAX;
    for(int i=1;i<n;i++){
        int temp  = abs(arr[i] - arr[i-1]);
        if(temp < min){
            min = temp;
        }
    }
    return min;
}

int main(){
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin  >>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << honestCoach(arr,n) <<endl;
    }
    return 0;
    
}