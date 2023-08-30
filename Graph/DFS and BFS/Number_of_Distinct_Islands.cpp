#include<bits/stdc++.h>
using namespace std;
void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &vis,
         vector<pair<int, int>> &vec, int row0, int col0)
{

    // row0 and col0 are the base

    vis[row][col] = 1;
    int n = grid.size();
    int m = grid[0].size();

    vec.push_back({row - row0, col - col0});

    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};

    for (int i = 0; i < 4; i++)
    {
        int nrow = row + drow[i];
        int ncol = col + dcol[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
            vis[nrow][ncol] != 1 && grid[nrow][ncol] == 1)
        {
            dfs(nrow, ncol, grid, vis, vec, row0, col0);
        }
    }
}
int countDistinctIslands(vector<vector<int>> &grid)
{
    // code here
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));

    set<vector<pair<int, int>>> st;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && !vis[i][j])
            {
                vector<pair<int, int>> vec;
                dfs(i, j, grid, vis, vec, i, j);
                st.insert(vec);
            }
        }
    }

    return st.size();
}
int main(){
     vector<vector<int>> grid = {{1, 1, 0, 0, 0},
                                 {1, 1, 0, 0, 0},
                                 {0, 0, 0, 1, 1},
                                 {0, 0, 0, 1, 1}};

    cout << "Number of Distinct Islands = " << countDistinctIslands(grid);
}