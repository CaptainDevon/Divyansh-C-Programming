#include <bits/stdc++.h>
using namespace std;

class Graph
{
    vector<vector<int>> adjList;
    public:
    
    Graph(int value)
    {
        this->adjList.resize(value);
    }

    void addEdge(int u,int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void printGraph()
    {
        for(int i=0;i<adjList.size();i++)
        {
            cout<<i<<": ";
            for(int j=0;j<adjList[i].size();j++)
            {
                if(adjList[i].size()==0)cout<<" "<<endl;
                cout<<adjList[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int u,v;
    int V;
    cout<<"enter number of the vertices: ";
    cin>>V;
    Graph g(V+1);
    for(int i=0;i<=V;i++)
    {
        cout<<"Enter the source number then the destination number : ";
        cin>>u>>v;
        if(u<0||u>V||v<0||v>V) 
        {
            cout<<"Vertex number out of bounds"<<endl;
            cout<<"Enter the source number then the destination number : ";
            cin>>u>>v;
        }
        g.addEdge(u,v);
    }
    g.printGraph();
}