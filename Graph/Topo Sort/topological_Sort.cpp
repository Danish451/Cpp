#include<bits/stdc++.h>
using namespace std;
void dfs(int node, int vis[], vector<int> adj[], stack<int> &st)
{
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, st);
        }
    }

    st.push(node);
}
// Function to return list containing vertices in Topological order.
vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    vector<int> ans;
    stack<int> st;
    int vis[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, adj, st);
        }
    }

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main(){
    int V = 5;
    vector<int> adj[5];

    int E = 6;
    for(int i=0; i<E; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> topSrt = topoSort(V, adj);

    cout << "Topological sort is : \n";
    for(int i=0; i<topSrt.size(); i++){
        cout << topSrt[i] << "  ";
    }
    
}