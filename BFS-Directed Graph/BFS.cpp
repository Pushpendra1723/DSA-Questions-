    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       queue<int>q;
       q.push(0);
       vector<int>ans;
       vector<int>vis(V+1);
       vis[0]=1;
       while(!q.empty())
       {
           int node=q.front();
           q.pop();
           ans.push_back(node);
           for(auto it:adj[node])
           {
               if(vis[it]==0)
               {
               q.push(it);
               vis[it]=1;
               }
               
           }
       }
       return ans;
    }