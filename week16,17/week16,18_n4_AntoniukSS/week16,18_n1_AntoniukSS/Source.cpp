#include <iostream>
using namespace std;

/*
В квадратной матрице найти сумму положительных элементов,
лежащих на и выше главной диагонали и расположенных в чётных столбцах.
*/

int main()
{
    const int r = 6;
    const int c = 6;
    int mat[r][c];

    srand(0);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 0; i != 4; i++)
    {
        for (int j = i + 1; j != 4; j++)
        {
            sum += mat[i][j];
        }
    }

    cout << "sum = " << sum << endl;
   
    return 0;
}