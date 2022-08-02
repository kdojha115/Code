#include<iostream>

using namespace std;

bool find(int arr[],int i,int tar){
    if(tar == 0){
        return true;
    }
    find(arr,i++,tar-arr[i]);
    find(arr,i++,tar);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    int tar;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> tar;
    bool ans = find(arr,0,tar);
    cout <<ans;
}