#include<bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    vector<int> ans;
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
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto it : adj[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
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