// Leetcode - 414. Third Maximum Number

int thirdMax(vector<int>& nums) {
        
        int n = nums.size(),c=0;
        
        int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            m1 = max(m1,nums[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==m1)
            {
            c++;
            continue;
            
            }
            if(nums[i]<m1)
            {
                m2 = max(m2,nums[i]);
            }
            
        }
        
        if(c == n){return m1;}
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==m2)
            {
                c++;
                continue;
            }
            
            if(nums[i]<m2)
            {
                m3 = max(m3,nums[i]);
            }
            
         }
         if(c == n){return m1;}
        
         return m3;
        
        
    }