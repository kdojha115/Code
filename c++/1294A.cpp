#include<iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--){
        long long int a,b,c,n,x=0;
        cin >>a >>b >>c >> n;
        if(a>=b && a>=c){
            x += (2*a)-b-c;
        }
        else if(b>c && b>a){
            x += (2*b)-a-c;
        }else{
            x += (2*c)-a-b;
        }
        n =n- x;
        if(n%3 == 0 && n>=0){
            cout << "YES"<<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}