#include <iostream>
#include <stdio.h>
#include <cmath>
#include <list>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	// Задание 1
	/*int n;
	float p, q, v;
	cout << "Реализовала в 1 день: ";
	cin >> p;
	cout << "Введите заданное значение: ";
	cin >> q;
	if (p == q) {
		cout << "На 1 день выручка составит " << q << " рублей";
	}
	else {
		v = p;
		n = 1;
		while (v <= q){
			n++;
			v = v + (v / 100 * 3);
		}
		cout << "На " << n << " день выручка составит " << v << " рублей";
	}*/
	// Задание 3 
	//int a, b, n, k = 0;
	//cout << "Введите количество чисел: ";
	//cin >> n;
	//for (int i = 1; i < n; i++)
	//{
	//	if (i == 1) {
	//		cout << "Введите " << i << " число: ";
	//		cin >> a;
	//		cout << "Введите " << i + 1 << " число: ";
	//		cin >> b;
	//		if (a * b < 0) k++;
	//	}
	//	else {
	//		a = b;
	//		cout << "Введите " << i + 1 << " число: ";
	//		cin >> b;
	//		if (a * b < 0) k++;
	//	}
	//}
	//cout << "\nОтвет: " << k;
	// Задание 6
	int i = 0, a = 0, k;

	cout << "Введите число: ";
	cin >> k;

	while (k > 0)
	{
		if (k % 10 != 3 && k % 10 != 6)
		{
			a *= 10;
			a += k % 10;
		}
		k /= 10;
	}

	cout << "Полученное число: ";

	while (a > 0)
	{
		cout << a % 10;
		a /= 10;
	}
	// Задание 6,5
	/*float a = -1.4, m = 16, w, r;
	float j[] = { 0.5, 9.1, 5 };
	int i = 0;

	w = tan(a / 3) + exp(a / m);
	cout << "w = " << w << endl;
	for (int i = 0; i < 3; i++)
	{
		r = 0.9 * sqrt(w + j[i]) + abs(pow(a, 2) - 1);
		cout << "r" << i + 1 << " = " << r << endl;
	}
	*/
	// Задание 5.1
	/*float a = -1.4, m = 16, w, r, j = 1.8;
	int i = 0;

	w = tan(a / 3) + exp(a / m);
	cout << "w = " << w << endl;
	while (j <= 3) {
		r = 0.9 * sqrt(w + j) + abs(pow(a, 2) - 1);
		cout << "r" << i + 1 << " = " << r << endl;
		i++;
		j += 0.2;
	} 
	*/
	//
	/*float m = 16, w, r, j = 0;
	float a[] = { 0.2, -4, 0.6 };
	int n = 0;

	for (int i = 0; i < 3; i++)
	{
		w = tan(a[i] / 3) + exp(a[i] / m);
		while (j <= 0.4) {
			r = 0.9 * sqrt(w + j) + abs(pow(a[i], 2) - 1);
			cout << "r" << n + 1 << " = " << r << endl;
			n++;
			j += 0.1;
		}
		cout << "w = " << w << endl; 
	}*/
	return 0;
}