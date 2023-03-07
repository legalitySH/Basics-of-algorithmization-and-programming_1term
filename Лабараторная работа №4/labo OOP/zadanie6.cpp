#include <iostream>
#include <iomanip> 
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void main()
{
	// ЗАДАНИЕ NUMBER 1 ЛАБАРАТОРНАЙ РАБОТЫ

	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	cout << "\nЗадание №1 лаб.работы";
	int t;
	cout << "\nВведите t=";
	cin >> t;
	cout << "\nt=" << t << endl;
	cout << "Тип Размер в байтах" << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	// sizeof определяет размер объекта в бай-тах

	// ЗАДАНИЕ NUMBER 2 ЛАБАРАТОРНАЙ РАБОТЫ

	setlocale(LC_CTYPE, "Russian");
	cout << "\nЗадание  №2 лаб.работы";
	char q, space; space = ' ';
	cout << "\nВведите символ "; cin >> q;
	cout << setw(35) << setfill(space) << space;
	cout << setw(10) << setfill(q) << q << endl;
	cout << setw(34) << setfill(space) << space;
	cout << setw(12) << setfill(q) << q << endl;
	cout << setw(33) << setfill(space) << space;
	cout << setw(14) << setfill(q) << q << endl;

	// ЗАДАНИЕ NUMBER 3 ЛАБАРАТОРНАЙ РАБОТЫ
	
	cout << "\nЗадание  №3 лаб.работы";
	printf("\n\t Privet\n");
	printf("\n... Press key");
	_getch();


	// ЗАДАНИЕ NUMBER 4 ЛАБАРАТОРНАЙ РАБОТЫ


	


	// ЗАДАНИЕ NUMBER 5 ЛАБАРАТОРНАЙ РАБОТЫ

	cout << "\nЗадание  №5 лаб.работы";
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[60];
	puts("\nКак вас зовут? ");
	gets_s(name);
	printf("Привет, %s\n", name);


	// ЗАДАНИЕ NUMBER 6 ЛАБАРАТОРНАЙ РАБОТЫ 


	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char m, probel; probel = ' ';
	cout << "\nВведите символ "; cin >> m;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(m) << m << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(m) << m << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(5) << setfill(m) << m << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(7) << setfill(m) << m << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(9) << setfill(m) << m << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(11) << setfill(m) << m << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(13) << setfill(m) << m << endl;
	cout << setw(28) << setfill(probel) << probel;
	cout << setw(15) << setfill(m) << m << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(17) << setfill(m) << m << endl;
	cout << setw(28) << setfill(probel) << probel; cout << setw(15) << setfill(m) << m << endl;
	cout << setw(29) << setfill(probel) << probel; cout << setw(13) << setfill(m) << m << endl;
	cout << setw(30) << setfill(probel) << probel; cout << setw(11) << setfill(m) << m << endl;
	cout << setw(31) << setfill(probel) << probel; cout << setw(9) << setfill(m) << m << endl;
	cout << setw(32) << setfill(probel) << probel; cout << setw(7) << setfill(m) << m << endl;
	cout << setw(33) << setfill(probel) << probel; cout << setw(5) << setfill(m) << m << endl;
	cout << setw(34) << setfill(probel) << probel; cout << setw(3) << setfill(m) << m << endl;
	cout << setw(35) << setfill(probel) << probel; cout << setw(1) << setfill(m) << m << endl;

	//ZADACHA 14
	cout << "\nАвтомобиль на каждом из пяти одинаковых по длине участках дороги шел с известной средней скоростью. Составьте алгоритм и программу для определения средней скорости на всем пути. ";
	double v1, v2, v3, v4, v5, sred_v;
	cout << "\nВведите v1 =";
	cin >> v1;
	cout << "\nВведите v2 =";
	cin >> v2;
	cout << "\nВведите v3 =";
	cin >> v3;
	cout << "\nВведите v4 =";
	cin >> v4;
	cout << "\nВведите v5 =";
	cin >> v5;
	sred_v = 5 * (1 / v1 + 1 / v2 + 1 / v3 + 1 / v4 + 1 / v5);
	cout << sred_v;

	// DOP 1 ( VARIANT 8 ) 

	char f;
	cout << "\nВариант 8";
	cout << "\nВведите символ ";
	cin >> f;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(10) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(10) << setfill(f) << f << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(8) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(4) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(2) << setfill(f) << f << endl;

	//ZADACHA 8

	double j, k, l, P, S;
	cout << "\nСторона 1 = ";
	cin >> j;
	cout << "\nСторона 2 = ";
	cin >> k;
	cout << "\nСторона 3 = ";
	cin >> l;
	P = (j + k + l) / 2;
	S = sqrt(P * (P - j) * (P - k) * (P - l));
	cout << S;



	// DOP 2 ( VARIANT 11)

	char c;
	cout << "\nВариант 11";
	cout << "\nВведите символ ";
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;

	// ZADACHA 11

	double D, storona, S_kv;
	cout << "\nВведите диагональ = ";
	cin >> D;
	storona = D / sqrt(2);
	S_kv = pow(storona, 2);
	cout << S_kv;


	//DOP 3

	char n;
	cout << "\nВариант 13";
	cout << "\nВведите символ ";
	cin >> n;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(3) << setfill(n) << n;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(3) << setfill(n) << n << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(5) << setfill(n) << n;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(5) << setfill(n) << n << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(n) << n << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(11) << setfill(n) << n << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(9) << setfill(n) << n << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(7) << setfill(n) << n << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(5) << setfill(n) << n << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(3) << setfill(n) << n << endl;
	cout << setw(41) << setfill(probel) << probel;
	cout << setw(1) << setfill(n) << n << endl;

	//ZADACHA 13

	double N, M, a;
	cout << "\nВведите количество косилок=";
	cin >> N;
	cout << "\nВведите количество часов первой косилки = ";
	cin >> M;
	a = ((2 * M + (N - 1) / 6) / 2) * N;
	cout << "Количество часов работы бригады=" << a;





	
}
