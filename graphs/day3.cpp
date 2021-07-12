// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    
    
    
    public:
    //Function to detect cycle in an undirected graph.
    
    bool isCycleHelper(int V, vector<int>adj[],int s,vector<bool>& visited)
    {
	   queue<int>q;
	 
	    q.push(s);
	    visited[s]=true;
	    vector<int>parent(V,-1);
	    
	    
	    while(!q.empty())
	    {
	        int node=q.front();
	        q.pop();
	        
	        
	        int n=adj[node].size();
	        
	        for(int i=0;i<n;i++)
	        {
	            int child=adj[node][i];
	            
	            if(visited[child] && child!=parent[node] && child!=node)
	            return true;
	            
	            
	            if(!visited[child])
	            {
	                parent[child]=node;
	                visited[child]=true;
	                q.push(child);
	            }
	        }
	    }
	    
	    return false;
        
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    
	    
       	   vector<bool>visited(V,false);

	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i])
	          continue;
	          
	          bool res=isCycleHelper(V,adj,i,visited);
	          
	          if(res)
	          return res;
	    }
	    
	    return false;
	    
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends






// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    
    
    
    public:
    //Function to detect cycle in an undirected graph.
    
    bool isCycleHelper(int V, vector<int>adj[],int s,vector<bool>& visited)
    {
	   queue<int>q;
	 
	    q.push(s);
	    visited[s]=true;
	    vector<int>parent(V,-1);
	    
	    
	    while(!q.empty())
	    {
	        int node=q.front();
	        q.pop();
	        
	        
	        int n=adj[node].size();
	        
	        for(int i=0;i<n;i++)
	        {
	            int child=adj[node][i];
	            
	            if(visited[child] && child!=parent[node] && child!=node)
	            return true;
	            
	            
	            if(!visited[child])
	            {
	                parent[child]=node;
	                visited[child]=true;
	                q.push(child);
	            }
	        }
	    }
	    
	    return false;
        
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    
	    
       	   vector<bool>visited(V,false);

	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i])
	          continue;
	          
	          bool res=isCycleHelper(V,adj,i,visited);
	          
	          if(res)
	          return res;
	    }
	    
	    return false;
	    
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends




// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	    vector<int>res;
	    vector<int>inDegree(V,0);
	    
	    for(int i=0;i<V;i++)
	    {
	        vector<int>children=adj[i];
	        int n=children.size();
	        
	        for(int j=0;j<n;j++)
	        {
	            inDegree[children[j]]++;
	        }
	    }
	    
	   
	    
	    queue<int>q;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!inDegree[i])
	        {q.push(i);
	        }
	    }
	    
	    
	    while(!q.empty())
	    {
	        int node=q.front();
	        res.push_back(node);
	        q.pop();
	        
	       
	        vector<int>children=adj[node];
	        int n=children.size();
	        
	        for(int j=0;j<n;j++)
	        {
	            inDegree[children[j]]--;
	            
	            if(!inDegree[children[j]])
	            q.push(children[j]);
	        }	    
	        
	    }
	    
	    return res;
	    
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends