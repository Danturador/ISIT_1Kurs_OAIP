#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void main() {
    setlocale(LC_ALL, "RUS");
const int SIZE = 4;
int** matrix;
int check = 0;
cout << "Вывод матрицы:" << endl;
matrix = new int* [SIZE];
for (int i = 0; i < SIZE; i++) {

    matrix[i] = new int[SIZE];

    for (int j = 0; j < SIZE; j++) {
        cin >> matrix[i][j];
    }
}

int chek = 0;
for (int k = 0; k < 4; k++)
{
    for (int j = 0; j < 4; j++)
    {
        if (matrix[k][j] == matrix[j][k])
            chek++;
    }
    if (chek == 4)
    {
        cout << "Подходит k =" << k << endl;
        //chek = 0;
    }
    chek = 0;
}
for (int l = 0; l < SIZE; l++)
    delete[] matrix[l];
delete[] matrix;
}