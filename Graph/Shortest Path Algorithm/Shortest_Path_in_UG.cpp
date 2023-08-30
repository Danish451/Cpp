#include <bits/stdc++.h>
using namespace std;
vector<int> shortestPath(vector<vector<int>> &edges, int N, int M, int src)
{
    // code here
    // make graph
    vector<int> adj[N];
    for (int i = 0; i < M; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int> q;

    vector<int> dis(N);
    for (int i = 0; i < N; i++)
        dis[i] = 1e9;

    q.push(src);
    // src node
    dis[src] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto it : adj[node])
        {
            if (dis[node] + 1 < dis[it])
            {
                dis[it] = dis[node] + 1;
                q.push(it);
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (dis[i] == 1e9)
        {
            dis[i] = -1;
        }
    }
    return dis;
}
int main()
{
    vector<vector<int>>edges;
    int n, m, src;
    cin >> n >> m >> src;

    for(int i=0; i<m; i++){
        vector<int> temp;
        for(int j=0; j<2; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        edges.push_back(temp);
    }
    vector<int> ans = shortestPath(edges, n, m, src);

    cout << "Shorted Path in Undirected Graph is\n";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}