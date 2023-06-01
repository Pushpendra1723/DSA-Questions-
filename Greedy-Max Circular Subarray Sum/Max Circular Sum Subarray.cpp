    int maxSubarraySumCircular(vector<int>& nums) {
        //we can use Kadane Algorithm to find min sum subarray with atleast one element

        int n=nums.size();
        
        int minn=INT_MAX;
        int sum=0;
        int total=0;
        for(int i=0;i<n;i++)
        {
          total+=nums[i];
          sum+=nums[i];
          minn=min(minn,sum);
          if(sum>0)sum=0;
        }
        sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
          sum+=nums[i];
          maxi=max(maxi,sum);
          if(sum<0)sum=0;
        }
        if(maxi<0)return maxi;
        else
        {
          return max(total-minn,maxi);
        }
    }