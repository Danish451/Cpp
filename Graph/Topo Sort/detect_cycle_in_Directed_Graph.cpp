#include<bits/stdc++.h>
using namespace std;
bool isCyclic(int V, vector<int> adj[])
{
    // code here
    queue<int> q;
    int indeg[V] = {0};

    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indeg[it]++;
        }
    }

    for (int i = 0; i < V; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }

    int cnt = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cnt++;

        for (auto it : adj[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }

    return (cnt != V);
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

    isCyclic(V, adj) ? cout << "Cycle Exists\n" : cout << "Cycle not Exists\n";
}