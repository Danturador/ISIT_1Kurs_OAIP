#include <iostream>
using namespace std;

int main() {
	// Вариант 11
	// Задание 1
	/*double a = 5.45, n = 5;
	double s, q = 1, sum, pr = 1;
	double y[] = { 2.1, 7.7, -4, 5, 9 };
	for (int i = 1; i <= n; i++)
	{
		pr *= y[i];
	}
	for (int j = 1; j <= n; j++)
	{
		q = 4 * pr / (pow(j, 2) + 1);
		s = 2 * a + q * sin(a);
		cout << "q" << j + 1 << " = " << q << endl;
		cout << "s" << j + 1 << " = " << s << endl;
	}*/
	// Задание 2
	/*double pr = 1, k = 1, y[] = { 1.3, 1, 0.9, 0.5, 8 }, min = y[0];
	for (int i = 0; i < size(y); i++)
	{
		if (min > y[i]) min = y[i];
	}
	cout << "min = " << min << endl;
	for (int i = 1; i <= 5; i++)
	{
		pr *= (y[i] + min);
	}
	k = pr;
	cout << "k = " << k << endl;*/
	/*double x, z = 0, y, q, t = 0.45, sum = 0;
	// Задание 1
	for (int n = 5; n != 0; n--)
	{
		cin >> x;
		cout << x << endl;
		if (z < x)
		{
			z = x;
		}
		cout << endl << "Максимальны X = " << z << endl;
	}
	*/
	// Задание 2
	/*
	for (int i = 1; i <= 5; i++)
	{
		cin >> x;
		cout << x << "	";
		sum += pow(x, 3);
		y = t * sum;
		cout << y << endl;
	}
	cout << endl << y << endl;
	//Задача 3
	/*
	for (int i = 1; i <= 6; i++)
	{
		cin >> x;
		cout << x << "	";
		sum += (x + 1) / x;
		y = t + sum;
		cout << y << endl;
	}
	cout << endl << y << endl;
	*/
	//Доп 1
	/*
	int n;
	double x, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (i % 2 == 0)
		{
			cout << " " << i;
			sum += x;
		}
	}
	cout << "Sum = " << sum << endl;
	*/
	// Доп 2
	/*
	int n, num = 0, lasti = 0;
	double x;
	cout << "Количество элементов: ";
	cin >> n;
	cout << "Элементы:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x < 0)
		{
			cout << "Номер отрицательного элемента: " << i << endl;
			lasti = i;
		}
	}
	cout << endl << endl << "Номер последнего отрицательного элемента: " << lasti << endl;
	*/
	// Доп 3
	setlocale(LC_ALL, "Russian");
	int n;
	double maxx = DBL_MIN, minn = DBL_MAX, count = 0;
	double x[100500];
	cout << "Введите количество элементов: ";
	cin >> n;
	cout << "Введите элементы: ";
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];

		if (maxx < x[i])
		{
			maxx = x[i];
		}
		if (minn > x[i])
		{
			minn = x[i];
		}
		cout << "MaX = " << maxx << " " << "MiN = " << minn << endl;
	}
	cout << endl << "MaX = " << maxx << " " << "MiN = " << minn << endl;
	for (int i = 0; i < n; i++)
	{
		if (x[i] > minn && x[i] < maxx)
		{
			count++;
		}
	}
	cout << endl << "Количество элементов между минимальным и максимальными элементами = " << count << endl;
}