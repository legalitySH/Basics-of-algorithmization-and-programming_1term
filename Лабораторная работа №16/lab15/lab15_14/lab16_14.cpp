/*1. � ���������� �������, ��������� �� ������������ ���������,
��������� ����� ������������ �� ������ �������� ������� � ����� ������� ��������� �������,
������������� ����� ������� �������������� ��������.*/

#include<iostream>
#include<algorithm>
#include <Windows.h>
#include<stdio.h>
#include<string>
using namespace std;
int min_element(int* A, int size) {
	cout << "\n������� ������:\n";

	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 100 - 50;
		cout << A[i] << " ";
	}
	int min = abs(A[0]); int i_min=0;
	for (int i = 0; i < size; i++)
	{
		if (min > abs(A[i])) {
			min = abs(A[i]);
			i_min = i;
		}
	}
	cout << "����� ������������ �� ������ �������� =" << i_min;
	int counter=0, sum = 0;
	for (int i = 0; i < size; i++)
		if (A[i] < 0) {
			counter = i;
			break;
		}
	counter++;
	for (counter; counter < size; counter++)
	{
		sum += abs(A[counter]);
	}
	cout << "\nC���� ������� ��������� �������, ������������� ����� ������� �������������� �������� =" << sum;
	return 0;
}
int find (wchar_t sentence[]) {
	int counter = 0;
	//1027 - � 
	//1107 - �
	//8217 - �
	//8220 - �
	for (int i = 0; i < 100; i++)
	{
		if (sentence[i] == 1027 && sentence[i + 1] == 1107 && sentence[i + 2] == 8217 && sentence[i+3]==8220) {
			cout << "\nYes";
			counter++;
		}
	}
	if (counter == 0) {
		cout << "\nNo";
	}
	return 0;
}
int main() {
	int* A;
	int size, swtch; srand(time(0));
	setlocale(LC_ALL, "rus");
	char A_char[200]{};
	cout << "\t\t�������� �������:\n";
	cout << "1 - � ���������� �������, ��������� �� ������������ ���������, ��������� ����� ������������ �� ������ �������� ������� � ����� ������� ��������� �������, ������������� ����� ������� �������������� ��������.\n";
	cout << "2 - ���������� ���� �� � ������ ����� ����";
	cout << endl;
	cin >> swtch;
	switch (swtch)
		case 1: {
		cout << "\n������� ������ �������:"; cin >> size;
		A = new int[size];
		min_element(A, size);
		break;
		case 2:
			wchar_t sentence[256];
			puts("������� �����������: ");
			bool state = std::ios::sync_with_stdio(false);
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			wcin.getline(sentence, 256);
			std::ios::sync_with_stdio(state);
			find(sentence);
		}
	}