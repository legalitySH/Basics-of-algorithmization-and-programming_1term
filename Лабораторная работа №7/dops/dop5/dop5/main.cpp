#include<iostream>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	float a,sym=0,sym1=0,sym2=0;
	for (int n = 10; n <= 99; n++) {
		a = n * sin(n);
		sym = sym + a;

	}
	cout << "����� ������, ������ ������� ������������ ����������� ������� = " << sym << endl;
	for (int k = 0; k <= 100; k++) {
		
		a = k * sin(k);
		if ((a > 0)) {
			sym1 = sym1 + a;
		}
		if ((abs(a) < 0.5)) {
			sym2 = sym2 + a;
		}

	}
	cout << "C���� ������ 100 ������������� �����  =" << sym1 << endl;
	cout << "����� ������ 100 ������ ������� ������ 0.5 =" << sym2 << endl;
}