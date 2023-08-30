#include<bits/stdc++.h>
using namespace std;
bool isPossible(int N, int P, vector<pair<int, int>> &prerequisites)
{
    // Code here
    // make a directed graph

    vector<int> adj[N];
    for (auto it : prerequisites)
    {
        adj[it.first].push_back(it.second);
    }

    // topoSort
    int indeg[N] = {0};
    for (int i = 0; i < N; i++)
    {
        for (auto it : adj[i])
        {
            indeg[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < N; i++)
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

    return cnt == N;
}
int main(){
    int N, P;
    vector<pair<int, int>>prerequisites;
    cin >> N >> P;

    for(int i=0; i<P; i++){
        int x, y;
        cin >> x >> y;
        prerequisites.push_back({x, y});
    }

    isPossible(N, P, prerequisites) ? cout << "YES\n" : cout << "NO\n";
}