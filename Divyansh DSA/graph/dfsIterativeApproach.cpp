#include <bits/stdc++.h>
using namespace std;

void dfs(int node,vector<bool>&visited,vector<vector<int>>&adjList,vector<int>&ans)
{
    stack<int>s;
    s.push(node);
    visited[node]=true;

    while(!s.empty())
    {
        int n=s.top();
        s.pop();
        ans.push_back(n);

        for(auto it:adjList[n])
        {
            if(!visited[it])
            {
                s.push(it);
                visited[it]=true;
            }
        }
    }
}
vector<int> depthFirstSearch(int V,int E,vector<vector<int>>& edges)
{
    vector<int>res;
    vector<bool>visited(V,false);
    vector<vector<int>> adjList(V);
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            dfs(i,visited,adjList,res);
        }
    }
    return res;
}

int main()
{
    int V=5;
    int E=4;
    vector<vector<int>>edges={{0,1},{1,2},{3,4},{1,3}};
    vector<int> result=depthFirstSearch(V,E,edges);
    for(auto it:result)
    {
        cout<<it<<" ";
    }
}


