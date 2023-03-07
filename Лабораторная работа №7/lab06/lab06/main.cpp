#include<iostream>
void main() {
	using namespace std;
	setlocale(LC_ALL, "rus");
	float s = 5.2, j = 10.4 * pow(10, 4), x[] = { 5,0.4,-2.1,6 }, v = 0.0;
	for (int n = 1; n <= 4; n++) {
		if ((2 * s) > (x[n] * j)) {
			v = pow(cos(j * x[n]), 2);
			cout << "v(>) = " << v << endl;

		}
		else if ((2 * s) < (x[n] * j)) {
			v = 2 * tan(j * x[n]);
			cout << "v(<) = " << v << endl;
		}
		else if ((2 * s) == (x[n] * j)) {
			v = 5 * exp(x[n] / 2);
			cout << "v(=) = " << v << endl;

		}
		int t, a, b, c;
		for (int t = 100; t <= 999; t++) {
			a = t / 100;
			b = (t / 10) % 10;
			c = t % 10;
			if (a != b && a != c && c != b) {
				cout << "t = " << t << endl;
			}
		}
		system("pause");
	}
}