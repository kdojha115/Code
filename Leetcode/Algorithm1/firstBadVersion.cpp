// Leetcode
// Algorithm 1 
// Day 1
// First Bad Version (278)

class Solution {
    public:
    int firstBadVersion(int n)
    {
        if(n == 1){
            if(isBadVersion(n))
            {
                return n;
            }
        }
        int i = 1, j = n;
        int ans;
        long int mid;
        while(i <= j)
        {
            mid = i + (j-i)/2;

            if(isBadVersion(mid))
            {
                ans = mid;
                j = mid - 1;
            }

            if(isBadVersion(mid) == false)
            {
                i = mid + 1;
            }
        }
        return ans;
    }
}