#include<bits/stdc++.h>
using namespace std;
// connected components
bool check(int start, int V, vector<int> adj[], int color[])
{

    queue<int> q;
    q.push(start);
    color[start] = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        // adjacent node
        for (auto it : adj[node])
        {
            if (color[it] == -1)
            {
                color[it] = !color[node];
                q.push(it);
            }
            else if (color[it] == color[node])
            {
                return false;
            }
        }
    }
    return true;
}
bool isBipartite(int V, vector<int> adj[])
{
    // Code here
    int color[V];

    for (int i = 0; i < V; i++)
        color[i] = -1;

    for (int i = 0; i < V; i++)
    {
        if (color[i] == -1)
            if (check(i, V, adj, color) == false)
                return false;
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