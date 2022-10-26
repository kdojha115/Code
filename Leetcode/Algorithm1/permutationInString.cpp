// Leetcode
// Algorithm 1 
// Day 6
// 567. Permutation in String

// Approach 1:

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int array[26] = {0},j = 0, i = 0, count = s1.size();
        
        for(char a : s1){
            array[a - 'a']++;
        }
        
        while(j < s2.size()){
            if(array[s2.at(j++) - 'a']-- > 0){
                count--;
            }
            if(count == 0){
                return true;
            }
            if(j - i == s1.size() && array[s2.at(i++) - 'a']++ >= 0)
            {
                count++;
            }
        }
        return false;
        
    }
};