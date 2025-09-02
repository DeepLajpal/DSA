#include <bits/stdc++.h>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    // Brute
    int n = grid[0].size();
    vector<int> ans = {-1, -1};
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    if (grid[i][j] == grid[k][l])
                    {
                        cnt++;
                    }
                    if (cnt == 2)
                    {
                        ans[0] = grid[i][j];
                    }
                    else if (cnt == 0)
                    {
                        ans[1] = grid[i][j];
                    }

                    if (ans[0] != -1 && ans[1] != -1)
                    {
                        return ans;
                    }
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> grid = {
        {1, 2, 2},
        {3, 4, 5},
        {6, 7, 8}};
    vector<int> result = findMissingAndRepeatedValues(grid);
    cout << "Repeating: " << result[0] << ", Missing: " << result[1] << endl;
}