#include<bits/stdc++.h>
using namespace std;

void dfsT(int node, vector<int> &vis, vector<int> adj[], vector<int> &dfs){
    vis[node] = 1;
    dfs.push_back(node);

    for(auto it : adj[node])
        if(!vis[it])
            dfsT(it, vis, adj, dfs);
}

vector<int> dfsTrav(int V, vector<int> adj[]){
        vector<int> vis(V, 0);
        vector<int> dfs;
        
        // 1 based indexing
        int start = 1;
        dfsT(start, vis, adj, dfs);
        
        
        return dfs;
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

    vector<int> ans = dfsTrav(V, adj);

    cout << "DFS of Graph :- \n";

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}