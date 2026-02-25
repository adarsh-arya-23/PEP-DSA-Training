// Create a undirected graph traverse it and print it using DFS.
#include <iostream>
#include <vector>
using namespace std;
void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited){
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]){
        if (!visited[neighbor]){
            dfs(neighbor, adj, visited);
        }
    }
}

int main(){
    int vertices = 5;
    vector<vector<int>> adj(vertices);
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(2);
    adj[2].push_back(0);
    adj[1].push_back(3);
    adj[3].push_back(1);
    vector<bool> visited(vertices, false);
    
    cout << "DFS traversal: ";
    dfs(0, adj, visited);
    cout << endl;
    
    return 0;
}
