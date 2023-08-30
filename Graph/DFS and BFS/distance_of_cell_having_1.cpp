#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> nearest(vector<vector<int>> &grid)
{
    // Code here
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<int>> dist(n, vector<int>(m, 0));

    queue<pair<pair<int, int>, int>> q;

    // initial configuration
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
            else
            {
                vis[i][j] = 0;
            }
        }
    }

    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};

    while (!q.empty())
    {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int dis = q.front().second;

        dist[row][col] = dis;

        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                vis[nrow][ncol] == 0)
            {
                q.push({{nrow, ncol}, dis + 1});
                vis[nrow][ncol] = 1;
            }
        }
    }
    return dist;
}
int main()
{
    vector<vector<int>> grid = {{0, 0, 0}, {0, 1, 0}, {1, 0, 1}};

    vector<vector<int>> ans = nearest(grid);

    cout << "Nearest Distance Matrix : \n";

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}