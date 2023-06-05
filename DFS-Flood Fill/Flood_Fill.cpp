class Solution {
public:
  void dfs(int i,int j,vector<vector<int>>& image,int icolor,int color)
  {
      image[i][j]=color;
      int n=image.size();
      int m=image[0].size();
      int dx[4]={1,-1,0,0};
      int dy[4]={0,0,1,-1};
      for(int r=0;r<4;r++)
      {
          int ni=i+dx[r];
          int nj=j+dy[r];
          if(ni>=0&&nj>=0&&ni<n&&nj<m&&image[ni][nj]==icolor&&image[ni][nj]!=color)
          {
              dfs(ni,nj,image,icolor,color);
          }
        
      }
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int icolor=image[sr][sc];
        dfs(sr,sc,image,icolor,color);
        return image;
    }
};