#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;       //number of vertices
    vector<vector<int>> adjList;
    public:
    Graph(int value)
    {
        this->V=value;
        adjList.resize(V);
    }

    void addEdge(int u,int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void printGraph()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<": ";
            for(int j=0;j<adjList[i].size();j++)
            {
                cout<<adjList[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};


int main()
{
    Graph g(5);
    //adding edges of the graph
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    //representing each vertex and where it is connected 
    g.printGraph();
    return 0;
}
