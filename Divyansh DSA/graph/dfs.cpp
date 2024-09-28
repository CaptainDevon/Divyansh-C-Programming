#include <bits/stdc++.h>
using namespace std;


void dfs(int node,vector<bool>&visited,vector<vector<int>>&adjList,vector<int>&component)
{
    component.push_back(node);
    visited[node]=true;
    
    //check for every adjacent node
    for(auto it:adjList[node])
    {
        if(!visited[it])
        {
            dfs(it,visited,adjList,component);
        }
    }
}


vector<vector<int>> depthFirstSearch(int V,int E, vector<vector<int>>&edges)
{
    vector<vector<int>>ans;
    vector<bool>visited(V,false);
    //prepare adjList
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
            vector<int>component;
            dfs(i,visited,adjList,component);
            ans.push_back(component);
        }
    }
    return ans;


}

int main()
{
    vector<vector<int>>edges={{5,4},{0,2},{0,1},{1,2},{2,4}};
    int V=6;
    int E=5;
    vector<vector<int>>ans=depthFirstSearch(V,E,edges);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}