
       vector<int>res;
	    queue<int>q;
	   vector<bool>visited(V,false);
	    
	    q.push(0);
	    visited[0]=true;
	    
	    while(!q.empty())
	    {
	        int node=q.front();
	        res.push_back(node);
	        q.pop();
	        
	        
	        int n=adj[node].size();
	        
	        for(int i=0;i<n;i++)
	        {
	            int child=adj[node][i];
	            
	            if(!visited[child])
	            {
	                visited[child]=true;
	                q.push(child);
	            }
	        }
	    }
	    
	    return res;
	    