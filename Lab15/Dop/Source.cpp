#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
// ��� 3 ������� 9 ������� 1
    //float* array;
    //int i, size, sum = 0, pr = 1, minElI, minEl;
    //cout << "������� ������ �������: ";
    //cin >> size;

    //if (!(array = (float*)calloc(size, sizeof(int)))) {
    //    cout << "Not enough memory";
    //    return;
    //}

    //cout << "\n��������� ������:\n";
    //for (i = 0; i < size; i++) {
    //    cin >> array[i];
    //    cout << array[i] << "\t";
    //}
    //minEl = array[0];

    //for (i = 0; i < size; i++) {
    //    if (minEl > array[i])
    //    {
    //        minEl = array[i];
    //        minElI = i;
    //    }
    //}

    //for (i = 0; i < minElI; i++) {
    //    sum += array[i];
    //    pr *= array[i];
    //}
    //cout << endl << "����� �� ������������ ��������: " << sum << endl << "������������ �� ������������ ��������: " << pr << endl;

    //������� 2

int rows, cols, k = 0, sum = 0;
int** matr;
printf("Kol-vo strok: \n");
cin >> rows;
printf("Kol-vo stolbcov: \n");
cin >> cols;

matr = new int* [rows];
for (int i = 0; i < rows; i++) {

    matr[i] = new int[cols];

    for (int j = 0; j < cols; j++)
    {
        printf("������ [%d;%d] �������: ", i + 1, j + 1);
        cin >> matr[i][j];
    }
}

int index = 0;

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (matr[i][j] > 0) {

            k++;

        }
        else {

            k = 0;
            break;
        }
    }
    if (k == cols) {

        index = i + 1;
        break;

    }
}
cout << endl << "����� ������, ��� ��� �������� ������������: " << index << endl;

for (int i = index - 1; i < index; i++) {

    for (int j = 0; j < cols; j++) {

        sum += matr[i][j];

    }
}
cout << endl << "����� ��������� ���� ������: " << sum << endl;

cout << endl << "���������� �������:" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        matr[i][j] -= sum;
        cout << matr[i][j] << "\t";
    }
    cout << endl;
}
}