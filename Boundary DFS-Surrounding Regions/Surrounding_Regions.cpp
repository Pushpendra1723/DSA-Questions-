class Solution {
public:
   void dfs(int i,int j,vector<vector<char>>& board,int n,int m,int dx[],int dy[])
   {
       board[i][j]='k';
       for(int k=0;k<4;k++)
       {
           int ni=i+dx[k];
           int nj=j+dy[k];
           if(ni>=0&&nj>=0&&ni<n&&nj<m&&board[ni][nj]=='O'&&board[ni][nj]!='k'&&board[i][j]!='X')
           {
               dfs(ni,nj,board,n,m,dx,dy);
           }
       }
   }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        int dx[4]={0,-1,0,1};
        int dy[4]={1,0,-1,0};

        for(int i=0;i<n;i++)
        {
           if(board[i][0]=='O')dfs(i,0,board,n,m,dx,dy);
           if(board[i][m-1]=='O')dfs(i,m-1,board,n,m,dx,dy);
        }
        for(int j=0;j<m;j++)
        {
            if(board[0][j]=='O')dfs(0,j,board,n,m,dx,dy);
            if(board[n-1][j]=='O')dfs(n-1,j,board,n,m,dx,dy);
        }
                for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O')board[i][j]='X';
            }
        }
                        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='k')board[i][j]='O';
            }
        }

        
    }
};