#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n>90)
    {
        cout << "Excellent";
    }
    else if(n>80 && n<=90){
        cout << "Good";
    }
    else if(n>70 && n<=80)
    {
        cout<<"Fair";
    }
    else if(n>60 && n<= 70)
    {
        cout << "Meets expectations";
    }
    else{
        cout << "Below par";
    }
    cout <<endl;
}