#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	// task 4
	
	/*float x = 0, y = 0, z = 0, max = 0, min = 0;
	cout << "������� x, y, z: ";
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
	cout << "�������� ����� �� 1 �� 9:  ";
	cin >> k;
	
	if (k == 1)
	{
		cout << k << " ���";
	}
	else if (k <= 4 && k != 1)
	{
		cout << k << " ����";
	}
	else if (k > 4)
	{
		cout << k << " ���";
	}
	
	// ��������
	(k == 1) ? str = " ���" :
	(k <= 4 && k != 1) ? str = " ����" : str = " ���";
	cout << k << str;
	//task 6
	int k;
	cout << "����� ���������� � ���� ����. ������� ������� ����? (1-��, 2-���)" << endl;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		cout << "�������� 5 �����" << endl;
	}
	case 2:
	{
		cout << "����� ���? (1-��, 2-���)" << endl;
		cin >> k;
		switch (k)
		{
		case 1: 
		{
			cout << "��, �������." << endl;
		}
		case 2:
		{
			cout << "� ���� �������." << endl;
		}
	}
	}
	}
	// ������� 1
	int sum = 0, a, b, c;
	cout << "������� a ";
	cin >> a;
	cout << "������� b ";
	cin >> b;
	cout << "������� c ";
	cin >> c;
	if (a % 5 == 0) sum += a;
	if (b % 5 == 0) sum += b;
	if (c % 5 == 0) sum += c;
	if (sum != 0 ) cout << sum << endl;
	else cout << "Error";
	
	cout << "������� ������ ������� 1 (a, b, c): ";
	
	// ������� 3
	string str;
	float p, q, r, s, a, b;
	cout << "������� ����� ������� a: ";
	cin >> a;
	cout << "������� ������ ������� b: ";
	cin >> b;
	cout << "������� ����� ������� ���� p: ";
	cin >> p;
	cout << "������� ������ ������� ���� q: ";
	cin >> q;
	cout << "������� ����� ������ ���� r: ";
	cin >> r;
	cout << "������� ������ ������ ���� s: ";
	cin >> s;
	(a >= p && a >= r && b >= (q + s)) ||
	(a >= q && a >= r && b >= (p + s)) ||
	(a >= p && a >= s && b >= (q + r)) ||
	(a >= q && a >= s && b >= (p + r)) ||
	(b >= p && b >= r && a >= (q + s)) ||
	(b >= q && b >= r && a >= (p + s)) ||
	(b >= p && b >= s && a >= (q + r)) ||
	(b >= q && b >= s && a >= (p + r)) ? str = "�����" : str = "���";
	cout << str;*/
	// ������� 5

	string str;
	float p, q, r, s, a, b;
	cout << "������� ����� ������ �������: ";
	cin >> a;
	cout << "������� ������ ������ �������: ";
	cin >> b;
	cout << "������� ������ ������ �������: ";
	cin >> p;
	cout << "������� ����� ������ �������: ";
	cin >> q;
	cout << "������� ������ ������ �������: ";
	cin >> r;
	cout << "������� ������ ������ �������: ";
	cin >> s;
	(a > p && b > r && p > s) ? str = "������" : str = "�� ������";
	cout << str;
	
}