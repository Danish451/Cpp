#include<bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &image,
         int newColor, int delRow[], int delCol[], int iniColor)
{

    vis[row][col] = newColor;

    int n = image.size();
    int m = image[0].size();

    for (int i = 0; i < 4; i++)
    {
        int nRow = row + delRow[i];
        int nCol = col + delCol[i];

        if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m &&
            image[nRow][nCol] == iniColor && vis[nRow][nCol] != newColor)
        {

            dfs(nRow, nCol, vis, image, newColor, delRow, delCol, iniColor);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    // Code here
    vector<vector<int>> vis = image;

    int delRow[] = {-1, 0, 1, 0};
    int delCol[] = {0, 1, 0, -1};

    dfs(sr, sc, vis, image, newColor, delRow, delCol, image[sr][sc]);

    return vis;
}
int main()
{
    vector<vector<int>> image = {{1, 1, 1}, {2, 2, 0}, {2, 2, 2}};

    cout << "Before Flood Fill Algorithm :- \n";

    for(int i=0; i<image.size(); i++){
        for(int j=0; j<image[0].size(); j++){
            cout << image[i][j] << "  ";
        }
        cout << '\n';
    }

    vector<vector<int> >ans = floodFill(image, 2, 0, 3);

    cout << "After Flood Fill Algorithm :- \n";

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout << ans[i][j] << "  ";
        }
        cout << '\n';
    }

    return 0;
}