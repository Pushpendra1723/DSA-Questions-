class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid,int n,int m,int dx[],int dy[])
    {
        grid[i][j]=0;
        for(int k=0;k<4;k++)
        {
            int ni=i+dx[k];
            int nj=j+dy[k];
            if(ni>=0&&nj>=0&&ni<n&&nj<m&&grid[ni][nj]==1&&grid[ni][nj]!=0)
            {
                dfs(ni,nj,grid,n,m,dx,dy);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        for(int j=0;j<m;j++)
        {
            if(grid[0][j]==1)
            {
                dfs(0,j,grid,n,m,dx,dy);
            }
            if(grid[n-1][j]==1)
            {
               dfs(n-1,j,grid,n,m,dx,dy); 
            }
        }

        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==1)
            {
                dfs(i,0,grid,n,m,dx,dy); 
            }
             if(grid[i][m-1]==1)
            {
                dfs(i,m-1,grid,n,m,dx,dy); 
            }
        }
       int cnt=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(grid[i][j]==1)cnt++;
           }
       }
       return cnt;
        
    }
};