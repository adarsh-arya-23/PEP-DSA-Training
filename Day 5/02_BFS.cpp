#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int startNode, vector<vector<int>> &adj, vector<bool> &visited) {
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m; 

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);   
    }

    int startNode;
    cin >> startNode;

    bfs(startNode, adj, visited);

    return 0;
}
