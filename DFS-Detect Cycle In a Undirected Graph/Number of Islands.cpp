  bool dfs(int node,vector<int>adj[],vector<int>&vis,int par)
  {
      vis[node]=1;
      bool ans=false;
      for(auto it:adj[node])
      {
          if(vis[it]==0)
          {
              ans=ans||dfs(it,adj,vis,node);
          }
          else if(it!=par)return true;
      }
      return ans;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        vector<int>vis(v,0);
        for(int i=0;i<v;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(i,adj,vis,-1))return true;
            }
        }
        return false;
    }