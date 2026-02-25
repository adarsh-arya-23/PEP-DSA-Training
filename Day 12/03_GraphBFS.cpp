#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph{
private:
    int vertices;
    vector<vector<int>> adjacencyList;

public:
    Graph(int v){
        vertices = v;
        adjacencyList.resize(v);
    }

    void addEdge(int u, int v){
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);  
    }

    void BFS(int start){
        vector<bool> visited(vertices, false);
        queue<int> q;

        q.push(start);
        visited[start] = true;

        while (!q.empty()){
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neighbor : adjacencyList[node]){
                if (!visited[neighbor]){
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main(){
    Graph g(6);
    
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    cout << "BFS starting from vertex 0: ";
    g.BFS(0);

    return 0;
}

