#include<iostream>
#include <stdlib.h>
#include <stdio.h>
void swap(int* ptr1, int* ptr2)
{
	int buffer = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = buffer;
}

int is_negative(int number)
{
	return number < 0 ? 1 : 0;
}

void func(int* first, int* last, int (*pred)(int value))
{
	while (1)
	{
		while (first != last && !pred(*first))
			first++;
		if (first == last)
			break;
		--last;
		while (first != last && pred(*last))
			--last;
		if (first == last)
			break;
		swap(first, last);
	}
}

void printer(int* ptr, size_t size, const char* fmt)
{
	while (size--)
		printf(fmt, *ptr++);
}
void main() {
	//��� ������������� ������ �, ���������� n ���������.
	//����� ���������� ��������� ����� ����� ��������� ����� �������.
	using namespace std;
	setlocale(LC_ALL, "rus");
	cout << endl << "������� 14" << endl;
	const int MAX_SIZE = 100;
	int arrayX[MAX_SIZE] = {}, arrayY[MAX_SIZE] = {}, i, j, counter = 0;

	cout << "������� ������ ������� X (�� ����� 100) ";
	cin >> i;
	cout << "������� ������ ������� Y (�� ����� 100) ";
	cin >> j;

	cout << "\t������ X" << endl;
	for (int a = 0; a < i; a++)
	{
		arrayX[a] = rand() % 10;
		cout << arrayX[a] << " ";
	}

	cout << endl << "\t������ Y" << endl;
	for (int a = 0; a < j; a++)
	{
		arrayY[a] = rand() % 10;
		cout << arrayY[a] << " ";
	}

	for (int a = 0; a < i; a++)
	{
		for (int p = 0; p < j; p++)
		{
			if (arrayX[a] == arrayY[p])
			{
				counter++;
			}
		}
	}
	cout << endl << "���������� ���������� ���: " << counter << endl;
	cout << "\n\n";
	cout << "\t\t\t������� 2\n";
#define SIZE 5
	int array[SIZE];
	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 10 - 2;
		cout << array[i] << ' ';
	}
	cout << "\n";
	func(array, array + SIZE, is_negative);
	printer(array, SIZE, "%d ");
	cout << "\n";
}