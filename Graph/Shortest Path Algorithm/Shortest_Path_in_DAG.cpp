#include <bits/stdc++.h>
using namespace std;
void topoSort(int node, vector<pair<int, int>> adj[], int vis[], stack<int> &st)
{
    vis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it.first])
        {
            topoSort(it.first, adj, vis, st);
        }
    }
    st.push(node);
}

vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
{
    // code here
    // create a weighted graph
    vector<pair<int, int>> adj[N];
    for (int i = 0; i < M; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];

        adj[u].push_back({v, wt});
    }

    // find the topo sort
    int vis[N] = {0};
    stack<int> st;
    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
            topoSort(i, adj, vis, st);
    }

    // relax the edge weights
    vector<int> dis(N);
    for (int i = 0; i < N; i++)
        dis[i] = 1e9;

    // as given src node = 0
    dis[0] = 0;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        for (auto it : adj[node])
        {
            int v = it.first;
            int wt = it.second;

            if (dis[node] + wt < dis[v])
            {
                dis[v] = dis[node] + wt;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (dis[i] == 1e9)
            dis[i] = -1;
    }
    return dis;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;

    for(int i=0; i<m; i++){
        vector<int> temp;
        for(int j=0; j<3; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        edges.push_back(temp);
    }

    vector<int> ans = shortestPath(n, m, edges);

    cout << "Shortest Path of DAG:\n";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

}