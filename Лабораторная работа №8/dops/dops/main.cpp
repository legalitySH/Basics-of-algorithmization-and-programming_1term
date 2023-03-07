#include<iostream>
#include <time.h>
#include <ctime>
#include <iomanip>
int main() {
	using namespace std;
	setlocale(LC_ALL, "rus");
	int n, sym = 0,d;
	cout << "\nДоп eins" << endl;
	cout << "Введите n чисел последовательности :";
	cin >> n;
	srand(time(NULL));
	for (int i = 1; i <= n; i++) {
		d = rand();
		cout << d << endl;
		if (d % 2 == 0) {
			sym += d;
		}
	}
	cout << "Сумма чётных элементов =" << sym << endl;

	cout << "\nДоп sechs" << endl;
	cout << "Введите n чисел последовательности :";
	cin >> n;
	srand((unsigned int)time(NULL));
	float sum1 = 0, sum2 =1;
	for (int i = 1; i <= n; i++) {
		d = rand() % 101 - 50;
		cout << d << endl;
		if (d > 0) {
			sum1 += d;
		}
		else if (d < 0) {
			sum2 *= d;
		}
	}
	cout << "Сумма положительных =" << sum1 << endl;
	cout << "Произведение отрицательных =" << sum2 << endl;




	cout << "\nДоп zwee" << endl;
	cout << "Введите n чисел последовательности :";
	cin >> n;
	float* ptr = new float [50];
	srand((unsigned int)time(NULL));
	for (int i = 0; i <= n-1; i++) {
		ptr[i] = rand() % 101 - 50;
		cout << ptr[i] << endl;
	}
	for (int i = 0; i <= n-1; i++) {
		if (ptr[i] < 0) {
			cout << "Порядковый номер первого отрицательного элемента=" << i+1 << endl;
			return(0);

		}
		
	}




}