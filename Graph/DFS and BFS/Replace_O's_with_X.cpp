#include<bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &mat,
         int drow[], int dcol[])
{

    int n = mat.size();
    int m = mat[0].size();

    vis[row][col] = 1;

    for (int i = 0; i < 4; i++)
    {
        int nrow = row + drow[i];
        int ncol = col + dcol[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
            !vis[nrow][ncol] && mat[nrow][ncol] == 'O')
        {
            dfs(nrow, ncol, vis, mat, drow, dcol);
        }
    }
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> &mat)
{
    // code here
    vector<vector<int>> vis(n, vector<int>(m, 0));

    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};

    // traversing the boundaries
    for (int j = 0; j < m; j++)
    {
        // first row
        if (vis[0][j] == 0 && mat[0][j] == 'O')
        {
            dfs(0, j, vis, mat, drow, dcol);
        }

        // last row
        if (vis[n - 1][j] == 0 && mat[n - 1][j] == 'O')
        {
            dfs(n - 1, j, vis, mat, drow, dcol);
        }
    }

    for (int i = 0; i < n; i++)
    {
        // first col
        if (!vis[i][0] && mat[i][0] == 'O')
        {
            dfs(i, 0, vis, mat, drow, dcol);
        }

        // last col
        if (!vis[i][m - 1] && mat[i][m - 1] == 'O')
        {
            dfs(i, m - 1, vis, mat, drow, dcol);
        }
    }

    // converting O's to X
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && mat[i][j] == 'O')
            {
                mat[i][j] = 'X';
            }
        }
    }
    return mat;
}
int main()
{
    vector<vector<char>> mat = {{'X', 'X', 'X', 'X', 'X'},
                                {'X', 'O', 'O', 'X', 'O'},
                                {'X', 'X', 'O', 'X', 'O'},
                                {'X', 'O', 'X', 'O', 'X'},
                                {'O', 'O', 'X', 'X', 'X'}
                                };

    vector<vector<char>> vis = fill(5, 5, mat);

    cout << "After filling \n";
    for(int i=0; i<vis.size(); i++){
        for(int j=0; j<vis[0].size(); j++){
            cout << vis[i][j] << "  ";
        }
        cout << '\n';
    }
    return 0;
}