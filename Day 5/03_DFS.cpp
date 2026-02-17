#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // remove this line for directed graph
    }

    cout << "DFS Traversal starting from node 0:\n";
    dfs(0, adj, visited);

    return 0;
}
