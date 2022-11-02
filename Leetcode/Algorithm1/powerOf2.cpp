// Leetcode
// Algorithm 1 
// Day 13
// 231. Power of Two

// Approach 1:

// Using Math function

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n <= 0) return false;
        return ceil(log2(n)) == floor(log2(n));
        
    }
};

// Approach 2:

// Using Bitwise

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0) return false;
        return ((n&(n-1))==0);
        
    }
};

// Approach 3:

// Using Bitwise in loop

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if (n == 0)    return false;
        for (ulong power = 1; power > 0; power = power << 1)
        {
            if (power == n)    return true;
            if (power > n)     return false;
        }
        return false;
        
    }
};