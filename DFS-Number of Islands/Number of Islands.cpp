class Solution {
public:


   void dfs(int i,int j,vector<vector<char>>& grid,int dx[],int dy[],int n,int m)
   {
      grid[i][j]='0';
      for(int r=0;r<4;r++)
      {
          int ni=i+dx[r];
          int nj=j+dy[r];
          if(ni>=0&&nj>=0&&ni<n&&nj<m&&grid[ni][nj]!='0'&&grid[ni][nj]=='1')
          {
              dfs(ni,nj,grid,dx,dy,n,m);
          }
      }
   }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    cnt++;
                    dfs(i,j,grid,dx,dy,n,m);
                }
            }
        }
        return cnt;
    }
};