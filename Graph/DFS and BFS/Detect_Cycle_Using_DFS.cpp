#include <bits/stdc++.h>
using namespace std;
bool dfs(int node, int parent, vector<int> adj[], int vis[])
{
    vis[node] = 1;

    for (auto adjacentNode : adj[node])
    {
        if (vis[adjacentNode] != 1)
            if (dfs(adjacentNode, node, adj, vis) == true)
                return true;

            else if (adjacentNode != parent)
                return true;
    }
    return false;
}
// Function to detect cycle in an undirected graph.
bool isCycle(int V, vector<int> adj[])
{
    int vis[V] = {0};

    // vector<int> vis(V,0);

    // connected components
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, -1, adj, vis) == true)
                return true;
        }
    }
    return false;
}
int main()
{
    int V = 9;
    vector<int> adj[9];

    int E = 9;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    isCycle(V, adj) ? cout << "Cycle exists " : cout << "Cycle not exists \n";

    return 0;
}