#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
void dfs(int node, unordered_map<int, list<int>> &adj, vector<bool> &visited, vector<int> &ans) {
    visited[node] = true;
    for (auto neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, ans);
        }
    }
    ans.push_back(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }
    vector<bool> visited(v, false);
    vector<int> ans;
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited, ans);
        }
    }
    reverse(ans.begin(), ans.end());
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

