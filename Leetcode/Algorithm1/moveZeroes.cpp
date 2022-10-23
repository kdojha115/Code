// Leetcode
// Algorithm 1 
// Day 3
// 283. Move Zeroes

//Approach 1:

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
                
        int index = 0; 
        for (int i=0;i<nums.size();i++){
			if (nums[i]==0) index++; 
			else if (index > 0) {
				int temp = nums[i];
				nums[i]=0;
                nums[i-index]=temp;
			}
        }
    }
};

// Approach 2:

class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
	
         int j = 0;
        
         for (int i = 0; i < nums.size(); i++) {
             if (nums[i] != 0) {
                 nums[j++] = nums[i];
             }
         }
         while (j < nums.size()) {
             nums[j] = 0;
             j++;
         }
        
    }
};

// Approach 3:

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
         int left = 0, right = 1;
		 
         while(right<nums.size() && left<right)
         {
             if(nums[left] == 0 && nums[right] != 0)
             {
                 int temp = nums[left];
                 nums[left++] = nums[right];
                 nums[right++] = temp;
                
             }
             else if(nums[left] == 0 && nums[right] == 0){
                 right++;
             }else if(nums[left] != 0 ){
                 left++;
                 right++;
             }else{
                 left++;
             }
         }
    }
};

// Approach 4:

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
		for(int i=0,next=0;i<nums.size();++i){
			if(nums[i] != 0) {
				swap(nums[i],nums[next++]);
			}
		}	
    }
};

// Approach 5:

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
	
        stable_partition(begin(nums),end(nums),[](int i){return i;});
    }
};

// Approach 6:

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
        stable_partition(rbegin(nums),rend(nums),logical_not<int>());
    }
};