// Leetcode - 283. Move Zeroes

void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                continue;
            }
            nums[k]=nums[i];
            k++;
        }
        for(int i=k;i<nums.size();i++)
        {
            nums[i]=0;
        }
        
    }