#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	// task 4
	
	/*float x = 0, y = 0, z = 0, max = 0, min = 0;
	cout << "Введите x, y, z: ";
	cin >> x;
	cin >> y;
	cin >> z;
	if (x > y)
	{
		max = x;
	}
	if (z > max)
	{
		max = z;
	}
	if (x * y > y * z)
	{
		min = y * z;
	}
	if (z * x < min)
	{
		min = z * x;
	}
	cout << max * min;
	// task 5
	int k;
	string str;
	cout << "Введитке число от 1 до 9:  ";
	cin >> k;
	
	if (k == 1)
	{
		cout << k << " год";
	}
	else if (k <= 4 && k != 1)
	{
		cout << k << " года";
	}
	else if (k > 4)
	{
		cout << k << " лет";
	}
	
	// тенарные
	(k == 1) ? str = " год" :
	(k <= 4 && k != 1) ? str = " года" : str = " лет";
	cout << k << str;
	//task 6
	int k;
	cout << "Добро пожаловать в наше кофе. Желаете чашечку кофе? (1-да, 2-нет)" << endl;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		cout << "Подожите 5 минут" << endl;
	}
	case 2:
	{
		cout << "Может чаю? (1-да, 2-нет)" << endl;
		cin >> k;
		switch (k)
		{
		case 1: 
		{
			cout << "Да, пожалуй." << endl;
		}
		case 2:
		{
			cout << "Я пока подумаю." << endl;
		}
	}
	}
	}
	// Задание 1
	int sum = 0, a, b, c;
	cout << "Введите a ";
	cin >> a;
	cout << "Введите b ";
	cin >> b;
	cout << "Введите c ";
	cin >> c;
	if (a % 5 == 0) sum += a;
	if (b % 5 == 0) sum += b;
	if (c % 5 == 0) sum += c;
	if (sum != 0 ) cout << sum << endl;
	else cout << "Error";
	
	cout << "Введите размер коробки 1 (a, b, c): ";
	
	// Задание 3
	string str;
	float p, q, r, s, a, b;
	cout << "Введите длину участка a: ";
	cin >> a;
	cout << "Введите ширину участка b: ";
	cin >> b;
	cout << "Введите длину первого дома p: ";
	cin >> p;
	cout << "Введите ширину первого дома q: ";
	cin >> q;
	cout << "Введите длину вторго дома r: ";
	cin >> r;
	cout << "Введите ширину вторго дома s: ";
	cin >> s;
	(a >= p && a >= r && b >= (q + s)) ||
	(a >= q && a >= r && b >= (p + s)) ||
	(a >= p && a >= s && b >= (q + r)) ||
	(a >= q && a >= s && b >= (p + r)) ||
	(b >= p && b >= r && a >= (q + s)) ||
	(b >= q && b >= r && a >= (p + s)) ||
	(b >= p && b >= s && a >= (q + r)) ||
	(b >= q && b >= s && a >= (p + r)) ? str = "Могут" : str = "Нет";
	cout << str;*/
	// Задание 5

	string str;
	float p, q, r, s, a, b;
	cout << "Введите длину первой коробки: ";
	cin >> a;
	cout << "Введите ширину первой коробки: ";
	cin >> b;
	cout << "Введите высоту первой коробки: ";
	cin >> p;
	cout << "Введите длину второй коробки: ";
	cin >> q;
	cout << "Введите ширину второй коробки: ";
	cin >> r;
	cout << "Введите высоту второй коробки: ";
	cin >> s;
	(a > p && b > r && p > s) ? str = "Влезет" : str = "Не влезет";
	cout << str;
	
}