// Leetcode - 1464. Maximum Product of Two Elements in an Array

int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int m1=INT_MIN,m2=INT_MIN;
        int ans,j=0;
        for(int i=0;i<n;i++)
        {
            m1 = max(nums[i],m1);
            if(nums[i]==m1)
            j=i;
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]<m1){
            m2 = max(nums[i],m2); }
            
            if(j!=i){m2 = max(nums[i],m2);}
            
        }
        ans = (m2-1) * (m1 -1);
        return ans;
        
    }