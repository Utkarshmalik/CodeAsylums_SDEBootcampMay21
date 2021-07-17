#include<iostream>
using namespace std;


int find(int a,int * parent)
{
    while(a!=parent[a])
    {
        a=parent[a];
    }

    return a;
}

void _union(int a,int b,int * parent)
{
    //find the leader of the cluster to which a,b belongs to 

    int leaderA=find(a,parent);
    int leaderB=find(b,parent);

    parent[leaderB]=leaderA;
}


int main()
{

    int n=6;

    int parent[6];

    for(int i=0;i<6;i++)
    parent[i]=i;

    _union(1,5,parent);
    _union(2,4,parent);
    _union(1,3,parent);
    _union(1,4,parent);


    
    for(int i=0;i<6;i++)
    cout<<parent[i]<<" ";

}




