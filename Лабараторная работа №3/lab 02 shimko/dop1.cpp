#include <iostream>
void main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "\nВариант 2";
	double z, y_2, n = 2, b = -0.12, x_2 = 1.3 * pow(10, -4);
	z = 1 / (x_2 - 1) + sin(x_2) - sqrt(n);
	y_2 = (exp(-b) + 1) / 2 * z;
	std::cout << "\nz=" << z;
	std::cout << "\ny=" << y_2;

	std::cout << "\nВариант 5";
	double w, v, b_1 = 40, x_3 = 1.1, a_1 = 5 * pow(10, -6);
	w = (a_1 + b_1) * tan(x_3) / (x_3 + 1);
	v = 1 / 2 * b_1 - sqrt(w - a_1 * b_1);
	std::cout << "\nw=" << w;
	std::cout << "\nv=" << v;


	std::cout << "\nВариант 3";
	double d, f, i = -6, x_4 = 4.5, z_1 = 1.5 * pow(10, -6);
	d = tan(-x_4 * i) / sqrt(x_4 - z);
	f = sin(2 * d) / d;
	std::cout << "\nd=" << d;
	std::cout << "\nf=" << f;


	std::cout << "\nВариант 6";
	double t_2, u_1, s, y_3 = 0.956, a_2 = 5 * pow(10, -6), n_1 = 4;
	t_2 = 1 / sqrt(y_3) + 14 * a_2;
	u_1 = (t_2 + 1) / (a_2 + 2);
	s = log((2 * n_1 / 3) + exp(-n) / u_1);
	std::cout << "\nt=" << t_2;
	std::cout << "\nu=" << u_1;
	std::cout << "\ns=" << s;

	std::cout << "\nВариант 4";
	int t_3 = 6;
	float y_4 = -1.2;
	double x_5 = 0.4 * pow(10, -6), p, q;
	q = sin(t_3) / cos(t_3);
	p = 2.6 * t_3 + cos(y_4 / (x_5 * 3 + y_4));
	std::cout << "\np=" << p;
	std::cout << "\nq=" << q;

	std::cout << "\nВариант 7";
	int m = 6;
	float x_6 = 1.4;
	double z_2 = 0.05 * pow(10, -5), y_5, w_2;
	y_5 = sqrt(1 + x_6) - cos(2 / m);
	w_2 = 0.6 * z - 2 * pow(exp(1), -2 * y_5 * m);
	std::cout << "\ny=" << y_5;
	std::cout << "\nw=" << w_2;

}