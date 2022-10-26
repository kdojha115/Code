// Leetcode
// Algorithm 1 
// Day 5
// 3. Longest Substring Without Repeating Characters

//Approach 1:

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> array(256, -1);
        int maxSubstring = 0, first = -1;
        for (int i = 0; i != s.length(); i++) {
            if (array[s[i]] > first){
                first = array[s[i]];
            }
            array[s[i]] = i;
            maxSubstring = max(maxSubstring, i - first);
        }
        return maxSubstring;
        
    }
};