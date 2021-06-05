#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

/* Дана матрица. Составить массив, каждый элемент которого равен максимальному
элементу соответствующей строки матрица.
*/

const int r = 6;  // строки
const int c = 6;  //столбики
int mat[r][c];
int arr[r];

void mas() 
{

    cout << "Massiv iz MAX elm-v Matrirsi ";
    for (int i = 0; i < r; i++)
    {
        cout << arr[i] << " ";
    }

}

int main() 
{

    srand(time(0));
    cout << "Matrica: " << endl;
    for (int i = 0; i < r; i++) 
    {
        int max = 0;

        for (int j = 0; j < c; j++) 
        {
            cout << (mat[i][j] = rand() % 70) << " ";

            if (mat[i][j] > max) max = mat[i][j];
            else mat[i][j] = max;

            arr[i] = max;
        }
        cout << endl;
    }
    cout << endl;
    mas();

    return 0;

}