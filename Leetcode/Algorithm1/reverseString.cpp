// Leetcode
// Algorithm 1 
// Day 4
// 344. Reverse String

// Approach 1:

// Using Two Pointers

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size()-1;
        while(left<right)
        {
            char temp = s[right];
            s[right--] = s[left];
            s[left++] = temp;
        }
        
    }
};

// Approach 2:

// Using recursion

class Solution {
public:

    void solve(vector<char>& s, int left, int right){
        if(left >= right) return;
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        solve(s, ++left, --right);
    }

    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        solve(s, left, right);
    }
    
};

// Approach 3:

// Using stack


class Solution {
public:
    void reverseString(vector<char>& s) {
        
        stack<char> tempStack;
        int i=0;
        while(i<s.size()){
            tempStack.push(s[i++]);
        }
        
        s.clear();
        while(!tempStack.empty()){
            s.push_back(tempStack.top());
            tempStack.pop();
        }
    }
};