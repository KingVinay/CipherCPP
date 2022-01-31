// Leetcode - 1. Two Sum

vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0,j=1;
        vector<int> ans;
        
        while(i<nums.size())
        {
          if(i==j){j++;}
          else if(nums[i]+nums[j]==target){ans.push_back(i);ans.push_back(j);break;}
              
          j++;
          if(j==nums.size()){j=0;i++;}
              
          
        }
        return ans;
        
    }