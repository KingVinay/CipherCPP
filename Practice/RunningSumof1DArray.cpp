//Leetcode - 1480. Running Sum of 1d Array

vector<int> runningSum(vector<int>& nums) {
        
        int n = nums.size();
        int last = nums[0];
        
        for(int i=1;i<n;i++)
        {
            nums[i] = last + nums[i]; 
            last = nums[i];
        }
        
        return nums;
        
       
    }