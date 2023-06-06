  void dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&ans)
  {
      vis[node]=1;
      ans.push_back(node);
      for(auto it:adj[node])
      {
          if(vis[it]==0)
          {
              dfs(it,adj,vis,ans);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<int>vis(v,0);
        for(int i=0;i<v;i++)
        {
         if(vis[i]==0)
         {
             dfs(i,adj,vis,ans);
         }
        }
        return ans;
    }