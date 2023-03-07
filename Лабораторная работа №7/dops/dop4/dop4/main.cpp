#include<iostream>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, i;
	for (int i = 1000; i <= 9999; i++) {
		a = i / 1000;
		b = i / 100 % 10;
		c = i / 10 % 10;
		d = i % 1000 % 10;
		if ((i % 2 == 0 && i%7==0 && i%11==0 && a+b+c+d==30 && a==d && a!=b && b==c && b!=a)) {
			cout << i;
		}
	}
}
