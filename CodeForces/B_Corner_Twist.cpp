#include <iostream>
#include <vector>
using namespace std;

void solveHelper2(vector<vector<int>> &a, int x1, int y1, int x2, int y2)
{
    a[x1][y1] = (a[x1][y1] + 2) % 3;
    a[x1][y2] = (a[x1][y2] + 1) % 3;
    a[x2][y1] = (a[x2][y1] + 1) % 3;
    a[x2][y2] = (a[x2][y2] + 2) % 3;
}

bool solverHelper1(vector<vector<int>> &a, const vector<vector<int>> &b, int n, int m)
{

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < m - 1; ++j)
        {
            while (a[i][j] != b[i][j])
            {
                solveHelper2(a, i, j, i + 1, j + 1);
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i][m - 1] != b[i][m - 1])
            return false;
    }
    for (int j = 0; j < m; ++j)
    {
        if (a[n - 1][j] != b[n - 1][j])
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr1(n, vector<int>(m));
        vector<vector<int>> arr2(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                char ch;
                cin >> ch;
                arr1[i][j] = ch - '0';
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                char ch;
                cin >> ch;
                arr2[i][j] = ch - '0';
            }
        }

        if (solverHelper1(arr1, arr2, n, m))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}