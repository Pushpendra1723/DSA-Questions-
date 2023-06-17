//DFS Algorithm
    bool dfs(int node,vector<vector<int>>& graph,vector<int>&color,int nc)
    {
        color[node]=nc;
        for(auto it:graph[node])
        {
            if(color[it]==-1)
            {
                if(dfs(it,graph,color,!nc)==false)
                return false;
            }
            else if(color[it]==nc)return false;
            
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        //DFS Algorithm
        int n=graph.size();
        vector<int>color(n,-1);
        int nc=1;
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(dfs(i,graph,color,nc)==false)return false;
            }
        }

        return true;
    }

    //BFS Algorithm
        bool bfs(int i,vector<vector<int>>& graph,vector<int>&color,int nc)
    {
        color[i]=nc;
        queue<int>q;
        q.push(i);
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:graph[node])
            {
                
                if(color[it]==-1)
                {
                    color[it]=!color[node];
                    q.push(it);
                }
                else if(color[it]==color[node])return false;
            }
        }
        return true;
    }
	bool isBipartite(vector<vector<int>>& graph)
    {
	    // BFS Algorithm
        int n=graph.size();
	    vector<int>color(n,-1);
	    int nc=1;
	    for(int i=0;i<n;i++)
	    {
	        if(color[i]==-1)
	        {
	            if(bfs(i,graph,color,nc)==false)return false;
	        }
	    }
	    return true;
	}
