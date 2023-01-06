#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

void Del(int *, int*, int);
void R(int**, int);

int main()
{
    int i, length, a[100], b[100];
    setlocale(0, "");

    cout << "¬ведите размер массива" << endl;
    cin >> length;

    cout << "¬ведите массив" << endl;
    for (i = 0; i < length; i++)
        cin >> a[i];
    Del(a, b, length);

    srand(time(0));
    int n;
    cout << endl << "n=";
    cin >> n;

    int** c = new int* [n];
    for (int i = 0; i < n; i++)
        c[i] = new int[n];

    R(c, n);
    return 0;
}

void Del(int *a, int *b, int length) {
    int  blen = 0, i = 0;
    for (i = 0; i < length; i++)
        if (a[i] % 2 == 0)
        {
            b[blen] = a[i];
            blen++;
        }
    cout << "a[i]= ";
    for (i = 0; i < length; i++)
        cout << a[i] << " ";

    cout << endl;

    cout << "b[i]= ";
    for (i = 0; i < blen; i++)
        cout << b[i] << " ";
}
void R(int **c, int n) {
    for (int i = 0; i < n; i++)
    {
        int p = 0, k = 0;
        for (int j = 0; j < n; j++)
        {
            c[i][j] = rand() % 12 - 2;
            cout << setw(2) << c[i][j] << " ";
            if (c[i][j] >= 0) p += c[i][j];
            else k++;
        }
        if (k == 0) cout << " " << p;
        else cout << " negative";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        delete[] c[i];
    delete[] c;
}