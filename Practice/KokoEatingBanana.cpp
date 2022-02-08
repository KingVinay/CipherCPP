//Leetcode - 875. Koko Eating Banana

//Brute force Solution (O(n^2))
int minEatingSpeed(vector<int>& piles, int h) {
        
        int mx=0;
        for(int i=0;i<piles.size();i++)
        {
            mx = max(mx,piles[i]);
        }
        
        int ans=INT_MAX;
        for(int j=mx;j>0;j--)
        {
            int t=0;
            for(int i=0;i<piles.size();i++)
            {
               
                t+= ceil(1.0*piles[i]/j);
            }
            if(t<=h)
            ans= min(ans,j);
        }
        return ans;
        
    }

