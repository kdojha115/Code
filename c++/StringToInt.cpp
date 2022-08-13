#include<iostream>

using namespace std;

void convert(string s)
{
    int n = s.length();
    int num = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '.')
        {
            continue;
        }
        num = num*10 + ((int)s[i] - 48);

    }
    cout <<num<<endl;
}
int main()
{
    string s;
    cin>>s ;
    convert(s);
    return 0;
}