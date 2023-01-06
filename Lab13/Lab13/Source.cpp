#include <cstring>
#include <iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");

	/*char str[3000];
	cout << "Введите строку: ";
	cin.getline(str, 3000);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			cout << str[i - 1];
		}
		else if(str[i + 1] == '\0') cout << str[i];

	}*/
	/*char str[3000];
	int counter = 0, position = 0, numberOfWord = 0;
	cout << "Введите строку: ";
	cin.getline(str, 3000);
	for (int i = 0, c = 0, word = 1; i < strlen(str) + 1; i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\0')
		{
			if (counter < c) {
				position = i - c;
				numberOfWord = word;
				counter = c;
			}
			word++;
			c = 0;
		}
		else {
			c++;
		}

	}
	cout << "Самое большое кол-во символов в слове " << counter << " Номер слова в предложении " << numberOfWord << " Индекс первого символа этого слова " << position;*/

	// Доп 1 1
   /* char str[] = "hello grey red doing cucumber dolo b";
	char ending[10];
	int countOfSymb = 0, position = 0;
	
	cout << str << endl << "Выберите оконачание из 3 букв: ";
	cin.getline(ending, 10);

	for (int i = 0; i < strlen(str) + 1; i++, countOfSymb++)
	{
		
		if (*(str + i) == ' ' || *(str + i) == '\0')
		{
			
			position = i - countOfSymb;
			for (int k = i - strlen(ending), j = 0, check = 0; k < i; k++, j++)
			{
				if (str[k] == ending[j]) check++;
				if (check == strlen(ending)) {
					if (i > countOfSymb) position++;
					for (int l = position; l < i; l++)
					{
						cout << str[l];
					}
					cout << " ";
				}
			}
			countOfSymb = 0;
		}

	}*/
	/*char str[256];
	int i, k, position = 0, a = 0;
	puts("Введите предложение: ");
	gets_s(str);

	for (i = 0; i <= strlen(str); i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\0')
		{
			position++;
			if (position % 2 == 0)
			{
				for (k = i - 1; k > a; k--)
					cout << *(str + k);
				cout << " ";
			}
			else a = i;

		}
	}*/


	char str[] = "it be in been if was were where be go";
	char copyOfWord[20];
	int position = 0, strLength = strlen(str), positionB = 0, k = 0, l = 0;
	for (int i = 0, countOfSymb = 0; i < strLength; i++)
	{
		if (str[i] == ' ') {
			positionB = i - countOfSymb;
		}
		if (str[i] == ' ' || str[i] == '\0' || i == 0) {
			k = i;
			l = 0;
			position = i - countOfSymb;

			for (int t = position, o = 0; o <= countOfSymb; t++, o++)
			{
				copyOfWord[o] = str[t];
			}
			for (int k = i, r = 0, similar = 0; k < strLength; k++)
			{
				if (str[k] == copyOfWord[r]) {
					r = 0;
					similar = 0;
					for (int w= 0; w < strlen(copyOfWord); w++)
					{
						if (str[k] == copyOfWord[r]) {
							similar++;
							r++;
							k++;
							if (similar == countOfSymb) {
								position = i - countOfSymb;
								for (int u = 3; u < strLength; u++)
								{
									str[u] = str[u + 1];
								}
							}
						}
						else {
							similar = 0;
							r = 0;
						}
					}
				}
			}
			countOfSymb = 0;
		}
		else countOfSymb++;
	}
	for (int i = 0; i < strLength; i++)
	{
		cout << str[i];
	}
}