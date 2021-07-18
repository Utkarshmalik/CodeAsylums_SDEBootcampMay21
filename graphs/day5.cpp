#include<iostream>
using namespace std;


int find(int a,int * parent)
{
    if(a==parent[a])
    return a;


    return parent[a]=find(parent[a],parent);
}


void _union(int a,int b,int * parent)
{
    //find the leader of the cluster to which a,b belongs to 

    int leaderA=find(a,parent);
    int leaderB=find(b,parent);

    if(height[A]<=height[B])
    {
        int temp=leaderA;
        leaderA=leaderB;
        leaderB=temp;

    }

    if(height[A]==height[B])
    height[A]++;
    
    parent[leaderB]=leaderA;

}


int main()
{

    int n=6;

    int parent[6];
    int height[6];

    for(int i=0;i<6;i++)
    {parent[i]=i;
     height[i]=1;
    }
    _union(1,5,parent,height);
    _union(2,4,parent,height);
    _union(1,3,parent,height);
    _union(1,4,parent,height);


    
    for(int i=0;i<6;i++)
    cout<<parent[i]<<" ";

}








/*  Function to find the number of strongly connected components
*   using Kosaraju's algorithm
*   V: number of vertices
*   adj[]: array of vectors to represent graph
*/

#include<stack>

void DFSHelper1(int src,vector<int> * adj,bool * visited,stack<int>*s)
{
    visited[src]=true;
    
    for(int neighbour:adj[src])
    {
        if(!visited[neighbour])
        DFSHelper1(neighbour,adj,visited,s);

    }
    //cout<<"s"<<src;
    (*s).push(src);
}

void DFSHelper2(int src,bool * visited,vector<int>* adj)
{
    
    visited[src]=true;

    for(int neighbour:adj[src])
    {
        if(!visited[neighbour])
        DFSHelper2(neighbour,visited,adj);

    }
    
}


int kosaraju(int V, vector<int> adj[])
{
    stack<int>s;
    bool visited[V]={false};
    
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            DFSHelper1(i,adj,visited,&s);
        }
    }
    
    vector<int> adjRev[V];
    
    for(int i=0;i<V;i++)
    {
        for(int j:adj[i])
        {
            adjRev[j].push_back(i);
        }
    }
    
    //now call dfs helper 2
    
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    
          int count=0;

    
    while(!s.empty())
    {
        int curr=s.top();
        s.pop();
        
        
        if(!visited[curr])
        {
            DFSHelper2(curr,visited,adjRev);
            count++;
        }
    }
    
    return count;

}