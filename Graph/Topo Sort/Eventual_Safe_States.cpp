#include<bits/stdc++.h>
using namespace std;
bool dfs(int node, vector<int> adj[], int vis[], int pathVis[], int check[])
{
    vis[node] = 1;
    pathVis[node] = 1;
    check[node] = 0;

    // neighbours
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            // cycle detects
            if (dfs(it, adj, vis, pathVis, check) == true)
            {
                check[it] = 0;
                return true;
            }
        }
        // cycle exists
        else if (vis[it] == 1 && pathVis[it] == 1)
        {
            check[it] = 0;
            return true;
        }
    }

    check[node] = 1;
    pathVis[node] = 0;
    return false;
}
vector<int> eventualSafeNodes(int V, vector<int> adj[])
{
    // code here
    int vis[V] = {0};
    int pathVis[V] = {0};

    // checks if node is safe or not
    // check[] = 0      not safe
    // check[] = 1      safe
    int check[V];
    // connected components
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfs(i, adj, vis, pathVis, check);
        }
    }

    vector<int> ans;

    for (int i = 0; i < V; i++)
    {
        if (check[i] == 1)
            ans.push_back(i);
    }

    return ans;
}
int main(){
   int V = 11, E = 13;
   vector<int> adj[V];
   for(int i=0; i<E; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
   }
   vector<int> ans =  eventualSafeNodes(V, adj);

   cout << "Safe node are \n";

   for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
   }

}