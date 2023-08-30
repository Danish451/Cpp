#include<bits/stdc++.h>
using namespace std;
vector<int> eventualSafeNodes(int V, vector<int> adj[])
{
    // code here
    vector<int> adjRev[V];
    int indeg[V] = {0};

    // reverse the direction of edges
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            adjRev[it].push_back(i);
            indeg[i]++;
        }
    }

    // topo Sort

    queue<int> q;
    vector<int> ans;
    for (int i = 0; i < V; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adjRev[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }
    sort(ans.begin(), ans.end());
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