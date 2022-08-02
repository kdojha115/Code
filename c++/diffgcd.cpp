#include<iostream>
using namespace std;

int gcd(int a,int b){
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

void find(int n,int l,int r){
    for(int i=1;i<=n;i++){
        int k =gcd(1,l);
        l++;
        cout << k <<" ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,l,r;
        cin >> n >> l >>r;
        int tot = r-l+1;
        if(n>tot){
            cout << "NO"<<endl;
        }
        else{
            cout <<"YES"<<endl;
            find(n,l,r);
            cout<<endl;
        }
    }
    return 0;
}
