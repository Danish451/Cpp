#include<bits/stdc++.h>
using namespace std;
bool dfs(int start, int colr, int color[], vector<int> adj[])
{
    color[start] = colr;

    for (auto node : adj[start])
    {
        if (color[node] == -1)
        {
            if (dfs(node, !colr, color, adj) == false)
                return false;
        }
        else if (color[node] == colr)
            return false;
    }

    return true;
}
bool isBipartite(int V, vector<int> adj[])
{
    // Code here
    int color[V];
    for (int i = 0; i < V; i++)
        color[i] = -1;

    // connected components
    for (int i = 0; i < V; i++)
    {
        if (color[i] == -1)
        {
            if (dfs(i, 0, color, adj) == false)
                return false;
        }
    }
    return true;
}
int main(){
    int V = 3;
    vector<int> adj[3];
    int E = 2;
    for(int i=0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    isBipartite(V, adj) ? cout << "Bipartite " : cout << "Not a Bipartite";
}