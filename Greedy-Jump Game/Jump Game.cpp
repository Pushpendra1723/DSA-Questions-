    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int max_jump=nums[0];
        
        for( i=1;i<n;i++)
        {
         if(i<=max_jump)
         {
            max_jump=max(max_jump,i+nums[i]);
         }
         else return false;
        }
        if(i>=n-1)return true;
        else return false;
    }