#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	srand(time(NULL));
	
	// ������� 1 
	/*int sizeOfArray = 0, randomNumber, value = 0,  subsequence = 0;

	cout << "������� ������ �������: " << endl;
	cin >> sizeOfArray;

	cout << "� ����� ����� ������������������: " << endl;
	cin >> subsequence;

	int* newArray = new int[sizeOfArray];

	randomNumber = 1 + rand() % sizeOfArray;

	for (int i = 1; i <= sizeOfArray; i++)
	{
		newArray[i - 1] = i * subsequence;
	}

	for (int i = 0; i < sizeOfArray; i++)
	{
		if (i >= randomNumber) {
			*(newArray + i) = *(newArray + i + 1);
		}
	}
	
	for (int i = 0; i < sizeOfArray - 1; i++)
	{
		cout << *(newArray + i) << " ";

		if (*(newArray + i + 1) - *(newArray + i) > subsequence) {
			
			value = *(newArray + i) + subsequence;
		}
	}

	cout << endl << value;*/

	/*const int sizeOfArray = 20;
	int* firstArray = new int[sizeOfArray];
	int* secondArray = new int[sizeOfArray];
	int z = 0, counter1 = 0, counter2 = 0;


	for (int i = 0, randomNumber1, randomNumber2; i < sizeOfArray; i++)
	{

		randomNumber1 = -10 + rand() % 30;
		randomNumber2 = -10 + rand() % 30;
		*(firstArray + i) = randomNumber1;
		*(secondArray + i) = randomNumber2;

	}

	cout << "������� ������� � ������� ����� ������������ �����: ";
	cin >> z;

	for (int i = 0; i < sizeOfArray; i++)
	{

		if (*(firstArray + i) < z) counter1++;
		if (*(secondArray + i) < z) counter2++;

	}

	for (int i = 0; i < sizeOfArray; i++)
	{

		if (counter1 > counter2) cout << *(firstArray + i) << " ";
		if (counter1 < counter2) cout << *(secondArray + i) << " ";

	}

	cout << endl;

	for (int i = 0; i < sizeOfArray; i++)
	{

		if (counter1 < counter2) cout << *(firstArray + i) << " ";
		if (counter1 > counter2) cout << *(secondArray + i) << " ";

	}*/

	//���1 ������� 8
	/*int sizeK, sizeN, bSizeOfArray, Zlength = 0;

	cout << "������� ������ ������� �: ";
	cin >> sizeK;
	cout << "������� ������ ������� Y: ";
	cin >> sizeN;

	int* X = new int[sizeK];
	int* Y = new int[sizeN];

	if (sizeK < sizeN) bSizeOfArray = sizeN;
	else bSizeOfArray = sizeK;

	for (int i = 0, randomNumber1, randomNumber2, l = 0; i < bSizeOfArray; i++)
	{

		randomNumber1 = -10 + rand() % 30;
		randomNumber2 = -10 + rand() % 30;
		if (i < sizeK) *(X + i) = randomNumber1;
		if (i < sizeN) *(Y + i) = randomNumber2;

		if (i < sizeK) cout << *(X + i) << "\t";
		else cout << "\t";
		if (i < sizeN) cout << *(Y + i) << endl;
		else cout << endl;

		if (*(X + i) == *(Y + i))
		{

			Zlength++;

		}

	}

	int* Z = new int[Zlength];
	cout << "������ Z: ";

	for (int i = 0, l = 0; i < bSizeOfArray; i++)
	{
		if (*(X + i) != NULL || *(Y + i) != NULL) 
		{

			if (*(X + i) == *(Y + i))
			{

				*(Z + l) = *(X + i);
				cout << *(Z + l) << " ";
				l++;

			}

		}
	}*/

	/*int sizeK, sizeN, bSizeOfArray, sSizeOfArray, q, nearByQ = 0;

	cout << "������� ������ ������� �: ";
	cin >> sizeK;
	cout << "������� ������ ������� Y: ";
	cin >> sizeN;
	cout << "������� q: ";
	cin >> q;

	int* X = new int[sizeK];
	int* Y = new int[sizeN];

	if (sizeK < sizeN)
	{

		bSizeOfArray = sizeN;
		sSizeOfArray = sizeK;

	}
	else
	{
		
		sSizeOfArray = sizeN;
		bSizeOfArray = sizeK;

	}

	for (int i = 0, randomNumber1, randomNumber2; i < bSizeOfArray; i++)
	{

		randomNumber1 = -10 + rand() % 30;
		randomNumber2 = -10 + rand() % 30;
		if (i < sizeK) *(X + i) = randomNumber1;
		if (i < sizeN) *(Y + i) = randomNumber2;

		if (i < sizeK) cout << *(X + i) << "\t";
		else cout << "\t";
		if (i < sizeN) cout << *(Y + i) << endl;
		else cout << endl;

	}

	int I = 0, J = 0;

	for (int i = 0; i < bSizeOfArray; i++)
	{

		for (int j = 0, currentValue = 0, nextValue = 0; j < sSizeOfArray; j++)
		{

			currentValue = fabs(*(X + i) + *(Y + j) - q);

			cout << *(X + i) << " + " << *(Y + j) << " �������: " << fabs(*(X + i) + *(Y + j) - q);
				
			if (i == 0 && j == 0 || currentValue < nearByQ)
			{

				I = i;
				J = j;
				nearByQ = currentValue;

				cout << "\t" << " - ������� � q" << endl;

			}
			else cout << endl;
		
		}

	}

	cout << endl << "����� ������� � q: " << *(X + I) << " + " << *(Y + J);*/

	// ��� 2 ������� 6

	/*int sizeC, nearByQ = 0;

	cout << "������� ������ ������� C: ";
	cin >> sizeC;

	int* C = new int[sizeC];

	for (int i = 0, randomNumber; i < sizeC; i++)
	{

		randomNumber = -10 + rand() % 30;

		if (randomNumber == 0) randomNumber = 1;

		*(C + i) = randomNumber;

		
	}

	sort(C, C + sizeC);

	for (int i = 0; i < sizeC; i++)
	{

		cout << *(C + i) << " ";

	}*/

	/*int sizeN1, sizeN2, bSizeOfArray, sSizeOfArray, f, nearByQ = 0;

	cout << "������� ������ ������� S: ";
	cin >> sizeN1;
	cout << "������� ������ ������� D: ";
	cin >> sizeN2;
	cout << "������� f: ";
	cin >> f;

	int* S = new int[sizeN1];
	int* D = new int[sizeN2];

	if (sizeN1 < sizeN2)
	{

		bSizeOfArray = sizeN2;
		sSizeOfArray = sizeN1;

	}
	else
	{

		sSizeOfArray = sizeN2;
		bSizeOfArray = sizeN1;

	}

	for (int i = 0, randomNumber1, randomNumber2; i < bSizeOfArray; i++)
	{

		randomNumber1 = -10 + rand() % 30;
		randomNumber2 = -10 + rand() % 30;
		if (i < sizeN1) *(S + i) = randomNumber1;
		if (i < sizeN2) *(D + i) = randomNumber2;

		if (i < sizeN1) cout << *(S + i) << "\t";
		else cout << "\t";
		if (i < sizeN2) cout << *(D + i) << endl;
		else cout << endl;

	}

	int I = 0, J = 0;

	for (int i = 0; i < bSizeOfArray; i++)
	{

		for (int j = 0, currentValue = 0, nextValue = 0; j < sSizeOfArray; j++)
		{

			currentValue = fabs(*(S + i) + *(D + j) - f);

			cout << *(S + i) << " + " << *(D + j) << " �������: " << fabs(*(S + i) + *(D + j) - f);

			if (i == 0 && j == 0 || currentValue < nearByQ)
			{

				I = i;
				J = j;
				nearByQ = currentValue;

				cout << "\t" << " - ������� � q" << endl;

			}
			else cout << endl;

		}

	}

	cout << endl << "����� ������� � q: " << *(S + I) << " + " << *(D + J);*/
	//������� 12 ������� 1
	
	/*int size, nEqual = 0, n_A_bigger = 0, n_B_bigger = 0;
	cin >> size;

	int* A = new int[size];
	int* B = new int[size];

	cout << "������ A:\n";
	for (int i = 0; i < size; i++)
	{
	  *(A + i) = rand() % 100;
	  cout << *(A + i) << " ";
	}

	cout << "\n������ B:\n";
	int* pB;
	for (pB = B; pB < B + size; pB++)
	{
	  *pB = rand() % 100;
	  cout << *pB << " ";
	}

	for (int i = 0; i < size; i++)
	{
		  if (*(A + i) == *(B + i))
		  {
			nEqual++;
		  }
		  else if (*(A + i) > *(B + i))
		  {
			n_A_bigger++;
		  }
		  else if (*(A + i) < *(B + i))
		  {
			  n_B_bigger++;
		  }
	}
	cout << endl << "���������� a[k] = b[k] ����� " << nEqual << endl;
	cout << "���������� a[k] > b[k] ����� " << n_A_bigger << endl;
	cout << "���������� a[k] < b[k] ����� " << n_B_bigger << endl;
	*/

	// ������� 2
	
	int size, k, nEqual = 0, nBiggerK = 0, nSmallerK = 0;
	cout << "������ �������: ";
	cin >> size;

	int* A = new int[size];
	cout << "������:\n";
	for (int i = 0; i < size; i++)
	{
	  *(A + i) = rand() % 100;
	  cout << *(A + i) << " ";
	}

	cout << endl << "������� ����� k ��� ���������: ";
	cin >> k;

	if (k <= (size - 1))
	{
	  for (int i = 0; i < size; i++)
	  {
		if (k == i)
		{
		  nEqual++;
		}
		else if (i < k)
		{
		  nSmallerK++;
		}
		else if (i > k)
		{
		  nBiggerK++;
		}
	  }
	}
	cout << endl << "���������� i = k ����� " << nEqual << endl;
	cout << "���������� i > k ����� " << nBiggerK << endl;
	cout << "���������� i < k ����� " << nSmallerK << endl;
	


	return 0;
}
