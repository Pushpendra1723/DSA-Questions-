     void dfs(int i,int j,vector<vector<int>>&grid,vector<pair<int,int>>&v,int n,int m,int dx[],int dy[],int i0,int j0)
     {
         grid[i][j]=0;
         v.push_back({i-i0,j-j0});
         for(int k=0;k<4;k++)
         {
             int ni=i+dx[k];
             int nj=j+dy[k];
             if(ni>=0&&nj>=0&&ni<n&&nj<m&&grid[ni][nj]!=0&&grid[ni][nj]==1)
             {
                 dfs(ni,nj,grid,v,n,m,dx,dy,i0,j0);
             }
         }
     }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        set<vector<pair<int,int>>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(grid[i][j]==1)
               {
                   vector<pair<int,int>>v;
                   dfs(i,j,grid,v,n,m,dx,dy,i,j);
                   s.insert(v);
               }
            }
        }
        
        return s.size();
    }