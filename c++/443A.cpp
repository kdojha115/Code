#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    
    string s;
    getline(cin ,s);
    vector<char>v; 
    for(int i = 0;i<s.length();i++){
        if(s[i] != ','|| s[i] != '{' || s[i] != '}'){
            v.push_back(s[i]);
        }
        //cout << v[i] <<" ";
    }
    int arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i] = 0;
    }
    for(int i=0;i<v.size();i++)
    {
        arr[int(v[i])-97] = 1;
        cout << int(v[i])-97 <<" ";
    }
    int d= 0;
    for(int i=0;i<26;i++)
    {
        if(arr[i] == 1){
            d++;
        }
    }
    cout<<d <<endl;
    return 0;
}