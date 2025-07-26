#include <bits/stdc++.h>
using namespace std;

class Graph {
  int V;
  vector<vector<int>> adj;

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected graph
    }

    bool bfs(int start, vector<bool> &visited) {
        queue<pair<int, int>> q; // {node, parent}
        visited[start] = true;
        q.push({start, -1});

        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push({neighbor, node});
                } else if (neighbor != parent) {
                    return true;
                }
            }
        }

        return false;
    }

    bool containsCycle() {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                if (bfs(i, visited))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    int V, E;
    
    cin >> V >> E;

    Graph g(V);
    
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    if (g.containsCycle()) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
