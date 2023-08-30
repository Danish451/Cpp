#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5, m=6;
    
    //graph here

    int adj[n+1][m+1];

    for(int i=0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    //list
    vector<int> Adj[n+1];

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        Adj[u].push_back(v);

        //for directed graph below line is not required
        Adj[v].push_back(u);
    }

}