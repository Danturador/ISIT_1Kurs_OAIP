#include <iostream> 
#include <bitset>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	/*int A; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 15) == 0)
		cout << "Число кратно 16" << endl;
	else
		cout << "Число не кратно 16" << endl;*/

    //char tmp[33];
    //int a, b;
    //cout << "Введите число A: ";
    //cin >> a;
    //cout << "Введите число B: ";
    //cin >> b;

    //_itoa_s(a, tmp, 2);
    //cout << "A в двоичном виде = " << tmp << '\n';
    //_itoa_s(b, tmp, 2);
    //cout << "B в двоичном виде = " << tmp << '\n';

    //cout << "Как много битов обратить в '0': ";
    //int nA;
    //cin >> nA;

    //cout << "Как много битов в B обратить заменить: ";
    //int nB;
    //cin >> nB;

    //int positionA = -1;
    //while (positionA < 1)
    //{
    //    cout << "С какой позиции сделать это: ";
    //    cin >> positionA;
    //}

    //int positionB = -1;
    //while (positionB < 1)
    //{
    //    cout << "С какой позиции сделать это: ";
    //    cin >> positionB;
    //}

    //unsigned int maskA = (1 << nA) - 1;

    //unsigned int maskNullB = (1 << nB) - 1;
    //b &= ~(maskNullB << (positionB - 1));

    //unsigned int maskB = a, counter = 0;
    //_itoa_s(maskB, tmp, 2);
    //for (int i = 0; i < size(tmp); i++) {
    //    if (tmp[i] == '1' || tmp[i] == '0') {
    //        counter++;
    //    }
    //}
    //unsigned int steps = 0;
    //steps = 33 - nB;
    //maskB >>= positionA - 1;
    //_itoa_s(maskB, tmp, 2);
    //cout << tmp << endl;
    //maskB <<= steps;
    //maskB >>= steps;
    //_itoa_s(maskB, tmp, 2);

    //a &= ~(maskA << (positionA - 1));
    //b |= maskB << (positionB - 1);

    //_itoa_s(a, tmp, 2);
    //cout << "\nA в двоичном представлении после всех манипуляций: " << tmp << "\nA в десятичном представлении: " << a << "\n";

    //_itoa_s(b | maskB << (positionB - 1), tmp, 2);
    //cout << "\nB в двоичном представлении после всех манипуляций: " << tmp << "\nB в десятичном представлении: " << b << "\n";
    //
    
    // Доп 1, номер 4
    /*int A; char tmp[33];
    cout << "Введите число ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном виде = " << tmp << endl;
    if ((A & 3) == 0)
    	cout << "Число кратно 4" << endl;
    else
    	cout << "Число не кратно 4" << endl;
    */
    /*char tmp[33];
    int a;
    cout << "Введите число A: ";
    cin >> a;

    _itoa_s(a, tmp, 2);
    cout << "A в двоичном виде = " << tmp << '\n';

    cout << "Как много битов обратить в '1': ";
    int nA;
    cin >> nA;

    int positionA = -1;
    while (positionA < 1)
    {
        cout << "С какой позиции сделать это: ";
        cin >> positionA;
    }

    unsigned int maskA = (1 << nA) - 1;

    a |= (maskA << (positionA - 1));

    _itoa_s(a, tmp, 2);
    cout << "\nA в двоичном представлении после всех манипуляций: " << tmp << "\nA в десятичном представлении: " << a << "\n";*/

    // Доп 2, номер 15
    /*int A; char tmp[33];
    cout << "Введите число ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном виде = " << tmp << endl;
    if ((A & 1) == 0)
        cout << "Число кратно 2" << endl;
    else
        cout << "Число не кратно 2" << endl;
    */
    /*char tmp[33];
    int a;
    cout << "Введите число A: ";
    cin >> a;

    _itoa_s(a, tmp, 2);
    cout << "A в двоичном виде = " << tmp << '\n';

    cout << "Как много битов обратить в '0': ";
    int nA;
    cin >> nA;

    int positionA = -1;
    while (positionA < 1)
    {
        cout << "С какой позиции сделать это: ";
        cin >> positionA;
    }

    unsigned int maskA = (1 << nA) - 1;

    a &= ~(maskA << (positionA - 1));

    _itoa_s(a, tmp, 2);
    cout << "\nA в двоичном представлении после всех манипуляций: " << tmp << "\nA в десятичном представлении: " << a << "\n";*/
    //Доп 3 номер 8
    /*int A = 150; char tmp[33];
    unsigned int mask = 146;
    _itoa_s(A, tmp, 2);
    cout << " Число А: " << tmp << endl;
    _itoa_s(mask, tmp, 2);
    cout << " Маска для А: " << tmp << endl;
    _itoa_s(A & mask, tmp, 2);
    cout << " Результат: " << tmp << endl << endl;*/

    /*char tmp[33];
    int a, b;
    cout << "Введите число A: ";
    cin >> a;
    cout << "Введите число B: ";
    cin >> b;

    _itoa_s(a, tmp, 2);
    cout << "A в двоичном виде = " << tmp << '\n';
    _itoa_s(b, tmp, 2);
    cout << "B в двоичном виде = " << tmp << '\n';

    int positionA = -1;
    while (positionA < 1)
    {
        cout << "С какой позиции сделать это: ";
        cin >> positionA;
    }

    int positionB = -1;
    while (positionB < 1)
    {
        cout << "С какой позиции сделать это: ";
        cin >> positionB;
    }

    unsigned int maskA = (1 << 3) - 1;

    unsigned int maskNullB = (1 << 3) - 1;
    b &= ~(maskNullB << (positionB - 1));

    unsigned int maskB = a, counter = 0;
    _itoa_s(maskB, tmp, 2);
    for (int i = 0; i < size(tmp); i++) {
        if (tmp[i] == '1' || tmp[i] == '0') {
            counter++;
        }
    }
    unsigned int steps = 0;
    steps = 29;
    maskB >>= positionA - 1;
    _itoa_s(maskB, tmp, 2);
    cout << tmp << endl;
    maskB <<= steps;
    maskB >>= steps;
    _itoa_s(maskB, tmp, 2);

    a &= ~(maskA << (positionA - 1));
    b |= maskB << (positionB - 1);

    _itoa_s(a, tmp, 2);
    cout << "\nA в двоичном представлении после всех манипуляций: " << tmp << "\nA в десятичном представлении: " << a << "\n";

    _itoa_s(b | maskB << (positionB - 1), tmp, 2);
    cout << "\nB в двоичном представлении после всех манипуляций: " << tmp << "\nB в десятичном представлении: " << b << "\n";
    */
}