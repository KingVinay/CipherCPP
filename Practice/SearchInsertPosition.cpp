// Leetcode - 35. - Search Insert Position

int searchInsert(vector<int>& nums, int target) {
        
        int mid , start , end;
        start = 0;
        end = nums.size()-1;
        while(start <= end)
        {
            mid = start + (end-start)/2;
            if(nums[mid] == target)
                return mid;
            if( target > nums[mid])
                start = mid+1;
            else
                end = mid-1;
        }
         
        return end+1; // or return start
        
        
        
        
    }