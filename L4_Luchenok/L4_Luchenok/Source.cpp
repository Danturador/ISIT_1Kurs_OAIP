#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <iostream>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char a, space;
	int scale;
	space = ' ';
	/*
	// 1
	cout << "������� ������ ��������: ";
	cin >> scale;
	cout << "������� ������: ";
	cin >> a;
	for (int i = 0; i < scale - 2; i++) {
		cout << setw(10) << setfill(space) << space;
		cout << setw(scale) << setfill(a) << a << endl;
	}
	*/
	//1 �
	printf("������� ������� �������� � ������. ������: '5g': ");
	scanf_s("%d%c", &scale, &a);
	for (int i = 0; i < scale - 2; i++) {
		for (int i = 0; i < 10; i++) {
			printf("%c", space);
		}
		for (int i = 0; i < scale; i++) {
			printf("%c", a);
		}
		printf("\n");
	}
}
/*
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int square, theBase, height, perimeter;
	cout << "������� ������ ��������������: ";
	cin >> height;
	theBase = height * 2;
	square = height * theBase;
	perimeter = 2 * (height + theBase);
	if (square == perimeter)
	{
		cout << "��������� = " << theBase << ", �������� = " << perimeter << ", ������� = " << square;
	}
	else
	{
		cout << "��������� = " << theBase << ", �������� = " << perimeter << ", ������� = " << square << "������� � �������� �� �����!";
	}
}*/
