#include<iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int m = 0;
    while(n>0){
        if(n%10 == 4 || n%10 == 7){
            m++;
        }
        n/=10;
    }
    if(m == 4 || m == 7){
        cout << "YES"<<endl;
    }else{
        cout << "NO" <<endl;
    }
    return 0;
}
