#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){

    //create adj list

    unordered_map<int, list<int> > adj;

    for(int i=0; i<e; i++){

        int u = edges[i][0];

        int v = edges[i][1];

        adj[u].push_back(v);

    }

    

    //find all indegrees

    vector<int> indegree(v);

    for(auto i:adj)

    {

        for(auto j: i.second){

            indegree[j]++;

        }

    }

 

    //push the 0 indegrees

    queue<int> q;

    for(int i=0; i<v; i++){

        if(indegree[i] == 0)

          q.push(i);

    }

 

    //do bfs

    vector<int> ans;

    while(!q.empty()){

        int front = q.front();

        q.pop();

 

        //ans store

        ans.push_back(front);

 

        //neighbour indegree update

        for(auto neighbour: adj[front])

        {

            indegree[neighbour]--;

            if(indegree[neighbour] == 0)

               q.push(neighbour);

        }

    }

    return ans;

}
};


int main() {
    int v = 6;
    int e = 6;
    vector<vector<int>> edges = {
        {5, 2},
        {5, 0},
        {4, 0},
        {4, 1},
        {2, 3},
        {3, 1}
    };

    Solution solution;
    vector<int> result = solution.topologicalSort(edges, v, e);

    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}