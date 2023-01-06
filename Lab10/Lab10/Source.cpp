#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	/*const int asize = 100;
	int array[asize], array2[asize], k, l = 0, counter = 0;
	cout << "Введите размер массива: ";
	cin >> k;
	srand((unsigned)time(NULL));
	cout << "Изначальный массив: " << endl;
	for (int i = 0; i < k; i++) {
		array[i] = (int)(((double)rand() / (double)RAND_MAX) * (99 - 1) + 1);
		cout << array[i] << "  ";
	}
	for (int i = 0; i < k; i++) {
		if (counter < 5) {
			if (array[i] % 2 == 0) {
				array2[l] = array[i];
				counter++;
				l++;
			}
		}
		else {
			array2[l] = array[i];
			l++;
		}
	}
	for (int i = l; i < l + 3; i++) {
		array2[i] = 0;
	}
	cout << endl << "Конечный массив: " << endl;
	for (int i = 0; i < l + 3; i++) {
		cout << array2[i] << " ";
	}*/
	/*const int size = 100;
	int k;
	char M[size], elem;
	int counter = 0, temp = 0;
	cout << "Введите размер массива: ";
	cin >> k;
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < k; i++) {
		cin >> elem;
		M[i] = elem;
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
		temp = 0;
			if (i != j) {
				if (M[i] == M[j]) {
					for (int t = j; t < k; t++)	M[t] = M[t + 1];
					temp = 1;
				}
			}
		}
			if (temp > 0)
			{
				counter++;
			}
	}
	for (int i = 0; i < k - (counter + 1); i++)
	{
		cout << M[i] << " ";
	}*/
	// Доп 1 (№4)
	/*const int size = 100;
	int k, elem, M[size], count;
	cout << "Введите размер массива: ";
	cin >> k;
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < k; i++) {
		cin >> elem;
		M[i] = elem;
	}
	count = k;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			if (i != j) {
				if (M[i] == M[j]) {
					count--;
					break;
				}
			}
		}
	}
	cout << "В массиве " << count << " различных элементов (без учета повторяющихся).";*/
	// Доп 2 (№6)
	//const int size = 10;
	//int sum = 0, max = 0, array[size];
	//srand((unsigned)time(NULL));
	//for (int i = 0; i < size; i++) {
	//	array[i] = (int)(((double)rand() / (double)RAND_MAX) * (100 - (-100)) + (-100));
	//	cout << array[i] << "  " << endl;
	//}
	//for (int i = 0; i < size; i++) {
	//	if (array[i] > 0 && array[i + 1]) {
	//		sum += array[i];
	//	}
	//	if (sum > max) max = sum;
	//	else if (array[i] < 0) sum = 0;
	//}
	//cout<< endl << max;
	// Доп 3(№2)
	const int size = 50;
	int countOfPair = 0, array[size], array2[size], k = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++) {
		array[i] = (int)(((double)rand() / (double)RAND_MAX) * (50 - (-50)) + (-50));
		cout << array[i] << "  ";
	}
	for (int i = 0; i < size; i++) {
		if (array[i] == array[i + 1]) {
			countOfPair++;
			array2[k] = array[i];
			array2[k + 1] = array[i + 1];
			k++;
		}
	}
	cout << endl << "Пар: " << countOfPair << endl;
	for (int i = 0; i < countOfPair; i++) {
		cout << " Пары: " << array2[i] << "  " << array2[i];
	}
}