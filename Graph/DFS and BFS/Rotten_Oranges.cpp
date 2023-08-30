#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    // Code here
    int n = grid.size();
    int m = grid[0].size();

    // {(r, c), t}
    queue<pair<pair<int, int>, int>> q;

    int vis[n][m];

    int cntFresh = 0;

    // make copy of grid at t = 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 2;
            }
            else
            {
                vis[i][j] = 0;
            }

            if (grid[i][j] == 1)
                cntFresh++;
        }
    }

    int tm = 0;
    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};

    int cnt = 0;

    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;

        tm = max(tm, t);

        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int neighRow = r + delrow[i];
            int neighCol = c + delcol[i];

            if (neighRow >= 0 && neighRow < n && neighCol >= 0 && neighCol < m &&
                vis[neighRow][neighCol] != 2 && grid[neighRow][neighCol] == 1)
            {
                q.push({{neighRow, neighCol}, t + 1});
                vis[neighRow][neighCol] = 2;
                cnt++;
            }
        }
    }

    // for(int i = 0; i < n; i++)
    //     for(int j=0; j<m; j++)
    //         if(vis[i][j] != 2 && grid[i][j] == 1)   return -1;

    if (cnt != cntFresh)
        return -1;

    return tm;
}
int main()
{
    vector<vector<int>> grid = {{0, 1, 2}, {0, 1, 1}, {2, 1, 1}};

    cout << "Max Time to Rotten all Oranges = " << orangesRotting(grid);
}