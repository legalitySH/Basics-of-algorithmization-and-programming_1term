#include <iostream> 
#include<windows.h>
#include <stdlib.h>
#include <bitset>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "\t\t\tЛабораторная работа N.10";
	cout << "\n\t\t\tВариант 14";



	unsigned int value; int i, b;
	int mask = 1 << 31;

	cout << "\nВведите целое число:";
	cin >> value;

	unsigned int value_1 = value;
	cout << "Двоичный вид: ";
	for (i = 1; i <= 32; i++)
	{
		putchar(mask & value ? '1' : '0');
		value <<= 1;
		if (i % 8 == 0) putchar(' ');

	}
	b = value_1 >> 5 & 1;
	cout << "\n" << b;




	//variant14
	int n = 0;

	for (int k = 5; k <= 10; k++) {

		if (value_1 >> k & 1 == 1) {
			++n;
		}

	}
	cout << "\n\t\t\t\tЗадание N.1";
	cout << "\nЕдиниц в числе бит от 5 до 10 (включая эти биты) = " << n;

	cout << "\n\t\t\t\tЗадание N.2";
	char tmp[33];
	int A, B, m;
	cout << "\nЧисло А= ", cin >> A;
	cout << "Число В= ", cin >> B;
	cout << "Введите позицию с которой должены браться биты: ", cin >> n;
	cout << "Введите позицию в которую должены добавляться биты: ", cin >> m;
	int maskA = 7 * pow(2, n); 
	int maskAB = 7 * pow(2, m); 
	int maskB = ~maskAB;
	_itoa_s(A, tmp, 2);
	cout << "A= " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B= " << tmp << endl;
	_itoa_s((A & maskA) >> n, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;

	_itoa_s(((B & maskB) | ((A & maskA) >> n) << m), tmp, 2);
	cout << "Результат B= " << tmp << endl;



	cout << "\n\t\t\tВариант 15";
	cout << "\n";
	cout << "\n\t\t\t\tЗадание N.1";
	char tmp_2[33];
	maskA = 3;
	int x = 0;
	cout << "\nA=";
	cin >> A;
	_itoa_s(~A, tmp_2, 2);
	cout << tmp_2 << endl;
	if (tmp_2[31] == '0')
	{
		x = 1;
	}
	if (tmp_2[30] == '0')
	{
		x = 1;
	}
	if (x == 0)
	{
		cout << "кратно 2";
	}
	else
	{
		cout << "не кратно 2";
	}

	cout << "\n\t\t\t\tЗадание N.2";
	cout << "\n";
	char buffer[33];
	cout << "Введите число A: ";
	int a;
	cin >> a;

	_itoa_s(a, buffer, 2);
	cout << "В двоичном виде = " << buffer << '\n';


	cout << "Сколько битов вы хотите заменить на 0? ";
	cin >> n;

	int position = -1;
	while (position < 1)
	{
		cout << "Начиная с какой позиции вы хотите их расположить ";
		cin >> position;
	}

	mask = (1 << n) - 1;
	a &= ~(mask << (position - 1));

	_itoa_s(a, buffer, 2);
	cout << "\nНовая А=: " << buffer << endl;

}





