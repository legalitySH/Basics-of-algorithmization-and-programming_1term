#include <bitset>
#include <iostream>
using namespace std;

//9
void task3() {
	char tmp[33];
	int A, B, n = 3, m = 2;
	cout << "\n����� �= ", cin >> A;
	cout << "����� �= ", cin >> B;
	int maskA = 31 * pow(2, n); // ��� �������� ����� 31 - 11111 � �������� �/�, 31 * 2^n, 2^n ���������� ����� ����� 111, ����� �������� ����� 
	int maskAB = 31 * pow(2, m); // ��� ���� ����� ��� � ������, �� ��� ����� B
	int maskB = ~maskAB; // ���� �����  � � ������������� ���������� 
	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	_itoa_s((A & maskA) >> n, tmp, 2);
	cout << "���������� ���� �: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> n) << m), tmp, 2);
	cout << " ��������� B=" << tmp << endl;
}

void task4() {
	char tmp[33];
	int A, n, m, p;
	cout << "\n����� � = ", cin >> A;
	cout << "������� ���������� �����, ������� ����� ���������� � ���� ", cin >> n;
	cout << "������� ����� ������� � ������� ��� ������� ������ ", cin >> m;
	p = m - n;
	int maskA = pow(2, n) - 1;
	int maskAB = maskA * pow(2, p); // ��� ���� ����� ��� � ������, �� ��� ����� B
	int maskB = ~maskAB; // ���� �����  � � ������������� ���������� 

	_itoa_s(((A & maskB) | (maskA >> n)), tmp, 2);
	cout << " ��������� B=" << tmp << endl;

}


int main() {
	setlocale(LC_ALL, "Rus");
	cout << "\t\t\t\t\n������� 9";
	task3();
	task4();

	return 0;
}


