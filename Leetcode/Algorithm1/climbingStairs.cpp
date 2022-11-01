// Leetcode
// Algorithm 1 
// Day 12
// 70. Climbing Stairs

//Approach 1:

// Using Simple Brute

class Solution
{
public:
    int climbStairs(int n)
    {
        long int a = 1, b = 1;
        while (n--) a = (b += a) - a;
        return a;
    }
};

//Approach 2:

class Solution
{
public:
    int climbStairs(int n)
    {
        if(n < 4)
        {
            return n;
        }
        int first = 1, second = 2,temp = 0,m = n/2;
        while(n > m)
        {
            temp = second;
            second += first;
            first = temp;
            n--;
        }
        while(n > 2)
        {
            temp = second;
            second += first;
            first = temp;
            n--;
        }
        return second;
        
    }
};

//Approach 3:

// Using Recursion

class Solution
{
public:
    int climbStairs(int n)
    {
        if(n<4) return n;  
        return climbStairs(n-1)+climbStairs(n-2); 
    }
};