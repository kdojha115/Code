#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int arr[n],s=INT_MAX;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(s>arr[i]){
                s = arr[i];
            }
        }
        int ans  =0;
        for(int i=0;i<n;i++){
            if(arr[i]%arr[0] != 0){
                ans = 1;
            }
        }
        if(ans == 1){
            cout <<"NO"<<endl;
        }else{
            cout <<"YES" <<endl;
        }
    }
    return 0;
}