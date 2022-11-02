// Leetcode
// Algorithm 1 
// Day 13
// 191. Number of 1 Bits

// Approach 1:

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
    
        while (n) {
            n &= (n - 1);
            count++;
        }

        return count;
    }
};