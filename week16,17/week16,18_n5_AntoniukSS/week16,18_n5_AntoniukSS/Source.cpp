#include <iostream>
#include <cmath>
using namespace std;

/*
¬ квадратной матрице дл€ каждой строки найти минимальный элемент и переставить его с элементом,
сто€щим в этой строке на главной диагонали.
*/

int main()
{
    srand(0);
    const int n = 3;
    int max = 0, min = 100, k = 0, l = 0;
    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = rand() % 10;
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] >= max) max = mat[i][j];
            if (mat[i][j] <= min)
            {
                min = mat[i][j];
                k = i;
                l = j;
            }
        }
        mat[k][l] = mat[i][i];
        mat[i][i] = max;
        max = 0;
        min = 100;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}