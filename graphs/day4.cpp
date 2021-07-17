// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
    bool DFS(int src,vector<int>adj[],vector<int> & visited,int parentColor)
    {
        
        int color;
        
        if(parentColor==-1)
        {
            color=0;
        }
        else if(parentColor==0)
        {
            color=1;
        }
        else if(parentColor==1)
        {
            color=0;
        }
        
        visited[src]=color;
        
        vector<int>children=adj[src];
        int n=children.size();
        
        for(int i=0;i<n;i++)
        {
            int child=children[i];
            
            
            
            if(visited[child]!=-1 && visited[child]==color)
            return false;
            
              if(visited[child]!=-1)
              continue;
            
            visited[child]=color;
            
             int ans=DFS(child,adj,visited,color);
             
             if(!ans)
             return false;
        }
        
        
        return true;
    }
    
public:
	bool isBipartite(int V, vector<int>adj[]){
	    
	    //-1,0,1
	    
	    vector<int>visited(V,-1);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==-1)
	        {
	            bool ans=DFS(i,adj,visited,-1);
	            
	            if(!ans)
	            return false;
	        }
	        
	    }
	    
	    return true;
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
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends






// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
    bool DFS(int src,vector<int>adj[],vector<int> & visited,int parentColor)
    {
        
        int color;
        
        if(parentColor==-1)
        {
            color=0;
        }
        else if(parentColor==0)
        {
            color=1;
        }
        else if(parentColor==1)
        {
            color=0;
        }
        
        visited[src]=color;
        
        vector<int>children=adj[src];
        int n=children.size();
        
        for(int i=0;i<n;i++)
        {
            int child=children[i];
            
            
            
            if(visited[child]!=-1 && visited[child]==color)
            return false;
            
              if(visited[child]!=-1)
              continue;
            
            visited[child]=color;
            
             int ans=DFS(child,adj,visited,color);
             
             if(!ans)
             return false;
        }
        
        
        return true;
    }
    
public:
	bool isBipartite(int V, vector<int>adj[]){
	    
	    //-1,0,1
	    
	    vector<int>visited(V,-1);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==-1)
	        {
	            bool ans=DFS(i,adj,visited,-1);
	            
	            if(!ans)
	            return false;
	        }
	        
	    }
	    
	    return true;
	}

};





// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#define p pair<int,int>
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<p>q;
        
        int m=grid.size();
        int n=grid[0].size();
        
        bool visited[m][n];
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                visited[i][j]=false;
                
            }
        }
        
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                visited[i][j]=false;
                
                if(grid[i][j]==2)
                {
                    visited[i][j]=true;
                    q.push({i,j});
                }
            }
        }
        
        int time=0;
        
        while(!q.empty())
        {

            int k=q.size();
            
            for(int i=0;i<k;i++)
            {
                 p node=q.front();
                 q.pop();
                 
                 int x=node.first;
                 int y=node.second;
                 
                

                
                for(int g=-1;g<=1;g++)
                {
                    for(int h=-1;h<=1;h++)
                    {
                        if( (g==-1 && h==0) ||  (g==0 && h==-1) || (g==1 && h==0) ||(g==0 && h==1))
                           {
                            
                            int xIndex=x+g; 
                            int yIndex=y+h; 
                            
                            
                            if(xIndex<0 || xIndex>=m || yIndex<0 ||yIndex>=n)
                            {
                                continue;
                            }
                            
                            if( grid[xIndex][yIndex]==0 || visited[xIndex][yIndex])
                             {
                                 continue;
                             }
                             

                             
                             //1 unvisited 
                             
                               grid[xIndex][yIndex]=2;
                               visited[xIndex][yIndex]=true;
                               q.push({xIndex,yIndex});
                           }
                    }
                }
            }
            
            if(!q.empty())
            time++;
        }x
        
        // cout<<time<<" ";
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                return -1;
            
            }
        }
        
        return time ;
        
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends