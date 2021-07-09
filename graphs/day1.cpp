#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int graph[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            graph[i][j]=0;
        }
    }

    int e;
    cin>>e;

    for(int i=0;i<e;i++)
    {
        int src,dest;
        cin>>src>>dest;

        src--;
        dest--;

        graph[src][dest]=1;
        graph[dest][src]=1;
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<graph[i][j]<<" ";
        }

        cout<<"\n";
    }
    
}