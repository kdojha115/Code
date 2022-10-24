// Leetcode
// Algorithm 1 
// Day 4
// 57. Reverse Words in a String III

// Approach 1:

// Using stack

class Solution {
public:
    
    void fun(stack<char>&st, vector<char>& str)
    {
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        
    }
    string reverseWords(string s) {
        vector<char>str;
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(i == s.length()-1) str.push_back(s[i]);
            if(s[i] == ' ' || i == s.length()-1)
            {
                fun(st,str);
                if(i != s.length()-1) str.push_back(s[i]);
            }
            else{
                st.push(s[i]);
            }
            
        }
        s.clear();
        string res(str.begin(),str.end());
        return res;  
    }
};

// Approach 2:


class Solution {
public:
    
    string reverseWords(string s) {
        
        for (int left = 0; left < s.length(); left++) {
            if (s[left] != ' ') {   
                int right = left;
                for (; right < s.length() && s[right] != ' '; right++) { } 
                reverse(s.begin() + left, s.begin() + right);
                left = right;
            }
        }
        
        return s;
        
    }
};