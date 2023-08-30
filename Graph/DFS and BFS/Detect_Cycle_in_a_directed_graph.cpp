#include<bits/stdc++.h>
using namespace std;
bool dfs(int node, int vis[], vector<int> adj[])
{
    vis[node] = 2;
    // pathVis[node] = 1;

    for (auto it : adj[node])
    {
        if (vis[it] == 0)
        {
            if (dfs(it, vis, adj) == true)
                return true;
        }
        else if (vis[it] == 2)
            return true;
    }

    // pathVis[node] = 0;
    vis[node] = 1;
    return false;
}
// Function to detect cycle in a directed graph.
bool isCyclic(int V, vector<int> adj[])
{
    // code here
    int vis[V] = {0};
    // int pathVis[V];

    // for(int i=0; i<V; i++){
    //     vis[i] = 0;
    //     pathVis[i] = 0;
    // }

    // connected components
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            // if(dfs(i, vis, pathVis, adj) == true)   return true;

            if (dfs(i, vis, adj) == true)
                return true;
        }
    }
    return false;
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
    isCyclic(V, adj) ? cout << "Cycle Exist" : cout << "Cycle not exists";
}