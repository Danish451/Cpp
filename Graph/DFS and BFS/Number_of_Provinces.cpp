#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> ls[], vector<int> &vis)
{
    vis[node] = 1;

    for (auto it : ls[node])
        if (!vis[it])
            dfs(it, ls, vis);
}

int numProvinces(vector<vector<int>> adj, int V)
{
    // code here
    vector<int> vis(V, 0);

    vector<int> Ls[V];

    // converting Matrix to List
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (adj[i][j] == 1 && i != j)
            {
                Ls[i].push_back(j);
                Ls[j].push_back(i);
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            cnt++;
            dfs(i, Ls, vis);
        }
    }

    return cnt;
}
int main()
{
    int V = 9, x;
    vector<vector<int> >adj;

    for(int i=0; i < V; i++)
    {
        vector<int> temp;
        for(int j=0; j < V; j++){
            cin >> x;
            temp.push_back(x);
        }
        adj.push_back(temp);
    }

    cout << "Number of Provinces of Graph : " << numProvinces(adj, V);
}