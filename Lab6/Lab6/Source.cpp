#include <iostream>
#include <stdio.h>
#include <cmath>
#include <list>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	// ������� 1
	/*int n;
	float p, q, v;
	cout << "����������� � 1 ����: ";
	cin >> p;
	cout << "������� �������� ��������: ";
	cin >> q;
	if (p == q) {
		cout << "�� 1 ���� ������� �������� " << q << " ������";
	}
	else {
		v = p;
		n = 1;
		while (v <= q){
			n++;
			v = v + (v / 100 * 3);
		}
		cout << "�� " << n << " ���� ������� �������� " << v << " ������";
	}*/
	// ������� 3 
	//int a, b, n, k = 0;
	//cout << "������� ���������� �����: ";
	//cin >> n;
	//for (int i = 1; i < n; i++)
	//{
	//	if (i == 1) {
	//		cout << "������� " << i << " �����: ";
	//		cin >> a;
	//		cout << "������� " << i + 1 << " �����: ";
	//		cin >> b;
	//		if (a * b < 0) k++;
	//	}
	//	else {
	//		a = b;
	//		cout << "������� " << i + 1 << " �����: ";
	//		cin >> b;
	//		if (a * b < 0) k++;
	//	}
	//}
	//cout << "\n�����: " << k;
	// ������� 6
	int i = 0, a = 0, k;

	cout << "������� �����: ";
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

	cout << "���������� �����: ";

	while (a > 0)
	{
		cout << a % 10;
		a /= 10;
	}
	// ������� 6,5
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
	// ������� 5.1
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