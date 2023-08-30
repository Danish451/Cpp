#include <bits/stdc++.h>
using namespace std;
bool detectCycle(int src, vector<int> adj[], int vis[])
{
    vis[src] = 1;
    queue<pair<int, int>> q;
    q.push({src, -1});

    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        // check for its neighbours
        for (auto adjacentNode : adj[node])
        {
            if (vis[adjacentNode] != 1)
            {
                vis[adjacentNode] = 1;
                q.push({adjacentNode, node});
            }
            // vis[] = 1 but it is not the parent
            // means cycle exists
            else if (adjacentNode != parent)
            {
                return true;
            }
        }
    }
    return false;
}

// Function to detect cycle in an undirected graph.
bool isCycle(int V, vector<int> adj[])
{
    // Code here
    int vis[V] = {0};

    // for connected components
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (detectCycle(i, adj, vis))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int V = 9;
    vector<int> adj[9];

    int E = 9;
    for(int i=0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    isCycle(V, adj) ? cout << "Cycle exists " : cout << "Cycle not exists \n";
    
    return 0;
}