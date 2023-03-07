#include<iostream>
#include<string>
void main() {
	double c1, c2;
	using namespace std;
	setlocale(LC_ALL, "rus");
	cout << "Введите кол-во литров в первом сосуде = ";
	cin >> c1;
	cout << "Введите кол-во литров во втором сосуде = ";
	cin >> c2;
	for (int i = 0; i <= 4; i++) {
		c2 /= 2;
		c1 += c2;
		c1 /= 2;
		c2 += c1;
	}
	cout << " I = " << c1 << endl;
	cout << " II = " << c2 << endl;

	cout << "\nДоп н6 lab(05)";
	string str;
	int k, b;
	cout << ("\nВведите k = ");
	cin >> k;

	for (int f = 0; f < k; f++) {
		b = pow(2, f);
		str.append(to_string(b));
	}
	cout << str << endl << endl;
	cout << "k-й элемент в последовательности = " << str[k - 1];
}