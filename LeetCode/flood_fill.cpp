
#include <bits/stdc++.h>
using namespace std;

bool isItOverNow(vector<vector<int>> &grid)
{
    for (auto row : grid)
    {
        for (auto i : row)
        {
            if (i == 0)
                return false;
        }
    }
    return true;
}

vector<vector<int>> colorGrid(int n, int m, vector<vector<int>> &sources)
{
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (auto source : sources)
    {
        grid[source[0]][source[1]] = source[2];
    }
    // cout << "GRID: " << endl;
    // for (auto row : grid)
    // {
    //     for (auto i : row)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    while (!isItOverNow(grid))
    {
        vector<vector<int>> grid_copy(n + 2, vector<int>(m + 2, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                grid_copy[i][j] = grid[i - 1][j - 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] != 0)
                    continue;
                grid[i][j] = max({grid_copy[i][j + 1], grid_copy[i + 1][j], grid_copy[i + 1][j + 2], grid_copy[i + 2][j + 1]});
            }
        }
    }
    return grid;
}

int main()
{
    int n = 3, m = 3;
    vector<vector<int>> sources = {{0, 0, 1}, {2, 2, 2}};

    // n = 3;
    // m = 3;
    // sources = {{0, 1, 3}, {1, 1, 5}};

    // n = 2;
    // m = 2;
    // sources = {{1, 1, 5}};

    n = 1;
    m = 3;
    sources = {{0, 2, 1}};
    vector<vector<int>>
        outGrid = colorGrid(n, m, sources);

    for (auto row : outGrid)
    {
        for (auto i : row)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}