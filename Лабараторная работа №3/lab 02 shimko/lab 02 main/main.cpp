#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "\nВариант 14";
	int j = 4;
	float a_2 = 1.5, b = -8.1;
	double t = 5 * pow(10, -8), s, w, v;
	s = sqrt(t * a_2 / t + 1) + 4 * exp(2 * b);
	w = s * a_2 / (1 + 0.1 * a_2);
	v = s + j * sqrt(pow(a_2, 2) + pow(b, 2));
	std::cout << "\ns= " << s;
	std::cout << "\nw= " << w;
	std::cout << "\nv= " << v;


	std::cout << "\nВариант 1";
	int k = 4;
	float a_3 = 8.1;
	double x = 2 * pow(10, -4), u, t_2;
	t_2 = 2 * k / a_3 + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	std::cout << "\nt = " << t;
	std::cout << "\nu = " << u;

}