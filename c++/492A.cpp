#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a=0,k=1;

    while(n>k){
        k=a;
        while(n>k){
            n -= k;
            k--;
        }
        a++;
        
    }
    cout << a-1 <<endl;
}