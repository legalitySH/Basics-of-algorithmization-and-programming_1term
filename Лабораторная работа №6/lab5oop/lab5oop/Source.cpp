#include<iostream>



void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double a = 1.5 * pow(10, -8), b = 2, j = 6, y, t, i[4] = { 7,4,2,6 }, x = 0.0, p = 0.0, q = 0.0, i_1 = 3;
	cout << "\n Цикл for";
	for (int n = 1; n <= 4; n++)
	{
		y = a / (b + exp(b)) / (1 + j * i[n]);
		t = cos(y + 1) / sqrt(abs(-2 * j));
		cout << "\ny=" << y << endl;
		cout << "\nt=" << t << endl;
	}
	cout << "\nЦикл do while";

	do {
		y = a / (b + exp(b)) / (1 + j * i_1);
		t = cos(y + 1) / sqrt(abs(-2 * j));
		cout << "\ny=" << y << endl;
		cout << "\nt=" << t << endl;
		i_1 = i_1 - 0.1;

	} while (i_1 > 2.1);

	//
	double a_1[4] = {0,1,-1,-3 };
	cout << "\n Вложенный for";

	for (int n = 1; n <= 4; n++) {
		do {
			y = a_1[n] / (b + exp(b)) / (1 + j * i[n]);
			t = cos(y + 1) / sqrt(abs(-2 * j));
			cout << "\ny=" << y << endl;
			cout << "\nt=" << t << endl;
			b = b + 0.2;
		} while (b > 3.1);
	}
}