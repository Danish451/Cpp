#include <bits/stdc++.h>
using namespace std;
vector<int> findOrder(int N, int m, vector<vector<int>> prerequisites)
{
    // code here
    vector<int> adj[N];
    for (auto it : prerequisites)
    {
        adj[it[1]].push_back(it[0]);
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

    vector<int> ans;

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

    if (ans.size() == N)
        return ans;
    return {};
}
int main()
{
    int N, P;
    vector<vector<int>> prerequisites;
    cin >> N >> P;

    for (int i = 0; i < P; i++)
    {
        int x, y;
        cin >> x >> y;
        prerequisites.push_back({x, y});
    }

    vector<int> ans = findOrder(N, P, prerequisites);

    if (ans.size() == 0)
        cout << "No ordering Possible";
    else
    {

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    return 0;
}