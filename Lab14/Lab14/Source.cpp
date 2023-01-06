#include <stdio.h>
#include <conio.h>
#define N 10 
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
using namespace std;


int main()
{
	setlocale(0, "");
	/*srand(time(nullptr));

	const int size = 4;
	int index = 0;

	int arr[size][size]; int tmp;
	for (int i = 0; i < size; ++i)
	{

		for (int j = 0; j < size; ++j)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
	cout << '\n' << '\n';
	tmp = arr[0][0];
	for (int i = 1; i < size; ++i)
	{
		if (tmp < arr[i][i]) { tmp = arr[i][i]; index = i; }

		if (i == size - 1)
		{
			for (int j = 0; j < size; ++j)
			{
				cout << arr[index][j] << " ";
			}
			cout << '\n';
		}
	}

	cout << "Max: " << tmp << " Index: " << index << '\n';*/

//	int matrix[N][N], n, avg, k;
//
//		printf("Enter size of matrix: ");
//		scanf_s("%d", &n);
//
//		printf("Enter elements: \n");
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				scanf_s("%d", &matrix[i][j]);
//
//		for (int i = 0; i < n; i++)
//		{
//			k = 0; avg = 0;
//			for (int j = 0; j < n; j++)
//			{
//				if (matrix[j][i] < 0)
//				{
//					avg += matrix[j][i];
//					k++;
//				}
//				else break;
//			}
//
//			if (k == n)
//			{
//				avg /= n;
//				break;
//			}
//		}
//
//		printf("Average = %d \n\nMatrix: \n", avg);
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				matrix[i][j] -= avg;
//				printf("%d ", matrix[i][j]);
//			}
//			printf("\n");
//		}




	/*int n;
	int array1[10][10];
	int array2[10][10];
	cout << "Введите размерность матрицы n (n*2): ";
	cin >> n;
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			array1[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			array2[i][j] = array1[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array1[i][j] = array2[i + n][j + n];
		}
	}
	for (int i = n; i < 2 * n; i++) {
		for (int j = 0; j < n; j++) {
			array1[i][j] = array2[i - n][j + n];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = n; j < 2 * n; j++) {
			array1[i][j] = array2[i + n][j - n];
		}
	}
	for (int i = n; i < 2 * n; i++) {
		for (int j = n; j < 2 * n; j++) {
			array1[i][j] = array2[i - n][j - n];
		}
	}
	for (int i = 0; i < 2 * n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}*/



	/*int n, l;
	int array1[10][10];
	cout << "Введите размерность матрицы: ";
	cin >> n;

	for (int i = 0; i < n; i++)	{
		l = i + 1;
		for (int j = 0; j < n; j++)	{
			array1[i][j] = l;
			l++;
			if (l > n)
				l = 1;
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}*/




	int n, counter = 0, counter2 = 0, counter3 = 0;
	float array1[100][100], array2[100];
	cout << "введите n ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array1[i][j] = ((float)rand() / RAND_MAX) * 20;
			cout << array1[i][j] << "\t";
		}
		cout << endl;
	}
	int li = 0, lj = 0;
	cout << endl;
	for (int g = 0; g < n; g++)
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i != j && array1[li][lj] <= array1[i][j]) {
					li = i;
					lj = j;
				}
			}
		}
		swap(array1[counter2][counter2], array1[li][lj]);
		counter2++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <  n; j++) {
			cout << array1[i][j] << "\t";
		}
		cout << endl;
	}
	 return 0;
}