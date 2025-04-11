#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getMatrixMultiplication(vector<vector<int>> a, vector<vector<int>> b, int rowA, int columnA, int rowB, int columnB)
{
    if (columnA != rowB)
    {
        cout << "Wrong Input";
        return {{-1}, {-1}};
    };

    vector<vector<int>> result(rowA, vector<int>(columnB, 0));
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnB; j++)
        {
            for (int k = 0; k < rowB; k++)
            {
                result[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    return result;
}
int main()
{
    vector<vector<int>> a = {{2, 3, 7}, {-1, 5, 2}};
    vector<vector<int>> b = {{3, 0}, {2, 5}, {-2, 7}};
    vector<vector<int>> result = getMatrixMultiplication(a, b, a.size(), a[0].size(), b.size(), b[0].size());
    for (int i = 0; i < result[0].size(); i++)
    {
        for (int j = 0; j < result.size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}