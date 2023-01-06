#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	// Задание 1 В11
	
	double a = -4.2, i = 4, d, f;
	double t[] = { 5, 1, -3, 9, -1 };

	for (int j = 0; j < 5; j++) {
		d = i + 2 * t[j] * (1 + sqrt(3 * pow(a, 2)));

		if (d >= t[j] * (t[j] + i)) {

			f = t[j] * i;

		} if (d < t[j] * (t[j] + i)) {

			f = exp(t[j] - d) + 9;

		}
		cout << "d = " << d << endl << "f = " << f << endl;

	}
	// Задание 2 В11
	/*
	int f, sum = 0;
	cin >> f;
	for (int i = 10; i < 100; i++)
	{
		if (i / 10 + i % 10 == f)
		{
			sum++;
		}
	}
	cout << sum;*/
	// Доп 1 Номер 3
	/*
	double c1, c2;
	cin >> c1 >> c2;
	cout << endl << "c1 = " << c1 << endl << "c2 = " << c2 << endl << endl;
	for (int i = 0; i < 12; i++)
	{
		c1 /= 2;
		c2 += c1;
		c2 /= 2;
		c1 += c2;
		cout << endl << "c1 = " << c1 << endl << "c2 = " << c2;
	}
	cout << endl << endl << "В первом кувшине после 12 переливаний: " << c1 << endl << "Во втором кувшине после 12 переливаний:  " << c2 << endl;
	*/
	// Доп 2 Номер 4
	/*
	for (int i = 1000; i < 9999; i++)
	{
		if (i % 2 == 0 && i % 7 == 0 && i % 11 == 0 && i % 10 + (i / 10) % 10 + (i / 100) % 10 + i / 1000 == 30)
		{
			cout << endl << "Номер машины: " << i << endl;
		}
	}
	*/
	// Доп 3 Номер 1
	/*int num = 0, n1, n2, n3, dubNum = 0;
	for (int j = 10; j < 32; j++)
	{
		if (j * j % 24 == 1)
		{
			num = j * j;
			for (int i = 0; i < 3; i++)
			{
				n1 = num % 10;
				n2 = (num / 10) % 10;
				n3 = (num / 100) % 10;
				if (n3 < n2 && n2 < n1 && dubNum != num)
				{
					cout << num << endl;
					dubNum = num;
				}
			}
		}
	}*/
	return 0;
}
