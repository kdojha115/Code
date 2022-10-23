// Leetcode
// Algorithm 1 
// Day 3
// 167. Two Sum II - Input Array Is Sorted

// Approach 1:

// Using Binary Search

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> sum;
        for(int x = 0; x < numbers.size(); x++)
        {
            int low = 0, high = numbers.size()-1;
            while(low <= high)
            {
                int mid = low + (high - low)/2;
                if(numbers[mid] == target - numbers[x])
                {
                    if(mid == x)
						low = mid + 1;  
                    else
                    {
                        sum = {x+1, mid+1};
                        return sum;
                    }
                }
                else if(numbers[mid] < target - numbers[x])
                    low = mid + 1;
                else
                    high = mid - 1;      
            }
        }
       return sum;
    }
};

//Approach 2:

// Using Two Pointers 

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo=0, hi=numbers.size()-1;
        while (numbers[lo]+numbers[hi]!=target){
            if (numbers[lo]+numbers[hi]<target){
                lo++;
            } else {
                hi--;
            }
        }
        return vector<int>({lo+1,hi+1});
        
    }
};