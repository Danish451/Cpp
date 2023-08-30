#include<bits/stdc++.h>
using namespace std;
void bfs(int row, int col, vector<vector<char>> &grid, vector<vector<int>> &vis)
{
    int n = grid.size();
    int m = grid[0].size();

    vis[row][col] = 1;
    queue<pair<int, int>> q;

    q.push({row, col});

    while (!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;

        q.pop();

        // traverse in the neighbours and mark them if it is a land
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int neighRow = r + delrow;
                int neighCol = c + delcol;

                if (neighRow >= 0 & neighRow < n && neighCol >= 0 && neighCol < m && grid[neighRow][neighCol] == '1' && !vis[neighRow][neighCol])
                {
                    vis[neighRow][neighCol] = 1;
                    q.push({neighRow, neighCol});
                }
            }
        }
    }
}

// Function to find the number of islands.
int numIslands(vector<vector<char>> &grid)
{
    // Code here
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));

    int cnt = 0;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (!vis[row][col] && grid[row][col] == '1')
            {
                cnt++;
                bfs(row, col, grid, vis);
            }
        }
    }

    return cnt;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m, '#'));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    int ans = numIslands(grid);

    cout << ans << '\n';
}