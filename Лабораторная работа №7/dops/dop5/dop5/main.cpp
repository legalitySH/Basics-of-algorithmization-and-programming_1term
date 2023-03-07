#include<iostream>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	float a,sym=0,sym1=0,sym2=0;
	for (int n = 10; n <= 99; n++) {
		a = n * sin(n);
		sym = sym + a;

	}
	cout << "Сумма членов, номера которых записываются двузначными числами = " << sym << endl;
	for (int k = 0; k <= 100; k++) {
		
		a = k * sin(k);
		if ((a > 0)) {
			sym1 = sym1 + a;
		}
		if ((abs(a) < 0.5)) {
			sym2 = sym2 + a;
		}

	}
	cout << "Cумма первых 100 положительных чисел  =" << sym1 << endl;
	cout << "Сумма первых 100 модуль которых меньше 0.5 =" << sym2 << endl;
}