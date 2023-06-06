class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();

       queue<pair<int,int>>q;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
             if(grid[i][j]==2)
             {
                 q.push({i,j});
             }
           }
       } 
       int dx[4]={0,0,-1,1};
       int dy[4]={1,-1,0,0};
       int minute=0;
       while(!q.empty())
       {

           int size=q.size();
           int change=0;
           while(size--)
           {
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
               for(int i=0;i<4;i++)
               {
                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr>=0&&nc>=0&&nr<n&&nc<m&&grid[nr][nc]!=2&&grid[nr][nc]==1)
                {
                    grid[nr][nc]=2;
                    q.push({nr,nc});
                    change=1;
                }
               }
               
           }
           if(change==1)minute++;
           
       }

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(grid[i][j]==1)return -1;
           }
       }
       return minute;
    }
};