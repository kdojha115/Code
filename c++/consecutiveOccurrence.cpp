// Geeksforgeeks
// Question :  Consecutive Occurrence

#include<iostream>
#include<vector>
#include<sstream>  

using namespace std;

class Solution {
  public:
    vector<string> count(int n, string s) {
        // code here
        vector<string> result;
        int arr[26] = {};
        int maxF = 1,sum = 1;
        char maxC = s[0],tempC = s[0]; 
        
        for(int i=1;i<s.length();i++)
        {

           if(s[i] != tempC )
           {
               tempC = s[i];
               sum = 1;
           }
           else{
               sum++; // 2
           }
           if(maxF < sum){
                maxF = sum;
                maxC = tempC;
           }
        }
         stringstream ss;  
        ss<<maxF;  
        string str;  
        ss>>str;  
        string c(1,maxC);
        result.push_back(c);
        result.push_back(str);
        
        return result;
    }
};

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    Solution obj;
    vector<string> result = obj.count(n, str);
    cout << result[0] << "\n" << result[1] <<endl;
    return 0;
}