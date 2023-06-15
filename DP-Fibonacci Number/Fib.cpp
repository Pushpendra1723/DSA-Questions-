//Recursive Time Complexicity-O(2^n) Space Complexity-O(2^n)
    int fib(int n) {
        if(n<=1)return n;
        return fib(n-1)+fib(n-2);
    }

  //Memoization Time Complexicity-O(n)  Space Complexity-O(n)
      int helper(int n,vector<int>&dp)
    {
        if(n<=1)dp[n]=n;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=helper(n-1,dp)+helper(n-2,dp);
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }

    //Tabulation  Time Complexicity-O(n) Space Complexicity-O(n)

    int fib(int n) {

         if(n==0 || n==1) return n;
        vector<int> dp(n+1,-1);
         dp[0]=0;
         dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];

    }

    //Space Optimized Tabulation  Time Complexity-O(n)    Space Complexity-O(1)

    int fib(int n) {

                if(n==0 || n==1) return n;
        int prev2=0;
        int prev=1;
        for(int i=2;i<=n;i++){
            int curr_i = prev2+prev;
            prev2=prev;
            prev=curr_i;
        }
        return prev;
    }