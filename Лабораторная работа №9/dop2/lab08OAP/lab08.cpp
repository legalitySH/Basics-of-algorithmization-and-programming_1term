// Вариант 8
#include<iostream>
#include <string>
#include"porabola.h"
#include"trapec.h"
#include"tangent.h"
double func(double x)
{
	return pow(x, 3) - 1;
}
double fx(double x) {
	return pow(x, 3) + x - 2;
}
double diff(double x)
{
	return 3 * pow(x, 2) + 1;
}
double diff2(double x) {
	return 6 * x;
}


int main() {
	using namespace std;
	setlocale(LC_ALL, "rus");

	// Метод пораболы

	cout << "Метод пораболы\n";
	double a = 0, b = 3, n = 200, h, s1, s2, i, x, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;

	for (int i = 1; i < n; i++) {
		s2 += func(x);
		x += h;
		s1 += func(x);
		x += h;
	}
	z = h / 3 * (func(a) + 4 * func(a + h) + 4 * s1 + 2 * s2 + func(b));
	cout << "integral = " << z << endl;

	// Метод трапеции


	cout << "Метод трапеции\n";
	double s;
	setlocale(0, "");
	h = (b - a) / n;
	x = a;
	s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + 0.5 * (func(x) + func(x + h)) * h;
		x = x + h;
	}
	cout << "integral = " << s << endl;

	// Метод касательных

	cout << "Метод касательных\n";
	double x1, e = 0.0001;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	if (fx(a) * diff2(a) > 0) x1 = a;
	else x1 = b;
	do {
		x1 = x1 - fx(x1) / diff(x1);
	} while (fabs(fx(x1)) >= e);
	cout << "x=" << x1 << "\n";

	/*Метод дихотомии*/
	cout << "Метод дихотомии\n";
	a = 0;
	b = 0;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	x = (a + b) / 2;
	float l = abs(b - a) / 2;
	do
	{
		x = (a + b) / 2;
		if (fx(a) * fx(x) <= 0)
			b = x;
		else
			a = x;
		l /= 2;
	} while (l > 2 * e);
	cout << "x=" << x << endl;

}
