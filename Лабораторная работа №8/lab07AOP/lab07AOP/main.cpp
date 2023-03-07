#include<iostream>
#include <cstdlib>
#include <algorithm>
int main() {
	using namespace std;
	setlocale(LC_ALL, "rus");
	int y[] = {4, -6,3, -3, 9, 5 }, sym = 0;
	float z = 0, c = 10.1;
	/*Вариант 14*/
	cout << "Вариант 14\n";
	for (int i = 1; i <= 6; i++) {
			sym += y[i-1];
	}
	if (sym > c) {
		z = pow(sin(c), 2);
	}
	if (sym <= c) {
		z = pow(cos(c), 2);
	}
	cout << "symma:" << sym;
	cout << "\nz: " << z << endl;


	/*Вариант 15*/

	cout << "Вариант 15\n";
	float t = 0.45, x[] = { 1.1,6.2,3,-4,6,1 }, q = 0;
	q = q + t;
	for (int i = 0; i < 6; i++) {
		q = q + (x[i] + 1) / x[i];
	}
	cout << "q:" << q;

	/*Вариант 1*/
	cout << "\nВариант 1" << endl;
	int n = 5;
	float d = 12.5 * pow(10, -4), a[] = { 0.8,4,-7,2,0.91 }, h = 0;
	sym = 0;
	for (int i = 1; i < n; i++)
	{
		sym += pow(a[i], 2);
	}
	h = d + sym;
	cout << "h:" << h << endl;
	
	/*Вариант 8*/
	cout << "\nВариант 8" << endl;
	int n1 = 6, n2 = 5;
	float c_1 = 0.7, a8[] = { 3,12,-4,6.2,3,0.4 }, b[] = { 19,1,-24,4.2,8 },sym1,sym2=0;
	sym1 = 0;
	for (int i = 1; i <= n1; i++) {
		sym1 += a8[i-1];
	}
	for (int i = 1; i <= n2; i++) {
		sym2 += pow((b[i-1] - 1), 2);
	}
	d = sym1 - c_1 * sym2;
	cout << "d=" << d << endl;

}

