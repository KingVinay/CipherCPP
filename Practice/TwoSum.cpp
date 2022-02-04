// Leetcode - 1. Two Sum

// Approach with O(n^2) Time Complexity (Brute Force)
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

    // Approach with O(nlogn) Time Complexity

vector<int> twoSum(vector<int>& a, int t) {
       int n=a.size();

        vector<pair<int,int>> nums;

        for(int i=0;i<n;i++)

        nums.push_back(make_pair(a[i],i)); // TO STORE THEIR INDEX
        
        sort(nums.begin(),nums.end());

        int l=0,h=n-1;

        while(l<h){
            
        if(nums[l].first+nums[h].first==t)
        {   
            int p=nums[l].second;int p1=nums[h].second;
            if(p>p1) return {p1,p};
            return {p,p1};   
            }

        else if(nums[l].first+nums[h].first<t) l++;

        else if(nums[l].first+nums[h].first>t) h--;

        }

     return {0,0};
}