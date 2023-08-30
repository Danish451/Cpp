#include<bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V, vector<int> adj[])
{
    queue<int> q;
    vector<int> topo;
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

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for (auto it : adj[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }

    return topo;
}

string findOrder(string dict[], int N, int K)
{
    // code here
    vector<int> adj[K];
    for (int i = 0; i < N - 1; i++)
    {
        string s1 = dict[i];
        string s2 = dict[i + 1];
        int len = min(s1.length(), s2.length());

        for (int ptr = 0; ptr < len; ptr++)
        {
            if (s1[ptr] != s2[ptr])
            {
                adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                break;
            }
        }
    }

    vector<int> topo = topoSort(K, adj);
    string ans = "";
    for (auto it : topo)
    {
        ans = ans + char(it + 'a');
    }

    return ans;
}
int main(){
    int n, k;
    cin >> n >> k;
    string dict[n];

    for(int i=0; i<n; i++){
        cin >> dict[i];
    }

    string ans = findOrder(dict, n, k);

    if(ans.size()==0)   cout << "Incorrect String";
    else{
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
    }

    return 0;
}