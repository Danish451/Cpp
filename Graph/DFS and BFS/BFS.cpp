#include<bits/stdc++.h>
using namespace std;

vector<int> bfsTrav(int V, vector<int> adj[]){
    vector<int> vis(V, 0);
        vector<int> bfs;
        
        // 0 based indexing

        queue<int> q;
        q.push(0);          //step 1
        
        vis[0] = 1;         //step 2
        
        while(!q.empty())
        {
            int node = q.front();       
            q.pop();                    
            bfs.push_back(node);        //step 3
            
            for(auto i : adj[node])     //step 4
            {
                if(!vis[i]){
                      q.push(i);
                      vis[i] = 1;
                } 
            }
        }
        
        return bfs;
}

int main()
{
    int V = 9;
    vector<int> adj[9];

    int E = 9;
    for(int i=0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> ans = bfsTrav(V, adj);

    cout << "BFS of Graph :- \n";

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}