#include<iostream>
#include<string>
void main() {
	double c1, c2;
	using namespace std;
	setlocale(LC_ALL, "rus");
	cout << "������� ���-�� ������ � ������ ������ = ";
	cin >> c1;
	cout << "������� ���-�� ������ �� ������ ������ = ";
	cin >> c2;
	for (int i = 0; i <= 4; i++) {
		c2 /= 2;
		c1 += c2;
		c1 /= 2;
		c2 += c1;
	}
	cout << " I = " << c1 << endl;
	cout << " II = " << c2 << endl;

	cout << "\n��� �6 lab(05)";
	string str;
	int k, b;
	cout << ("\n������� k = ");
	cin >> k;

	for (int f = 0; f < k; f++) {
		b = pow(2, f);
		str.append(to_string(b));
	}
	cout << str << endl << endl;
	cout << "k-� ������� � ������������������ = " << str[k - 1];
}