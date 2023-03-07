#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	printf("������� 12.1 (C)\n");

	int* A;
	int N, max, counter = 0;

	printf("������� ������ ������� ");
	scanf_s("%d", &N);

	A = (int*)malloc(sizeof(int) * N);

	printf("������� �������� �������\n");

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &A[i]);
	}

	max = *A;

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) > max)
		{
			max = *(A + i);
		}
	}

	printf("max = %d\n", max);

	for (int i = 0; i < N; i++)
	{
		if (*(A + i) == max)
		{
			counter++;
		}
	}

	printf("max ���������� %d ����\n", counter);

	free(A);



	cout << "������� 12.2 (C++)" << endl;
	srand(time(0));


	int row, element;
	int** matrix;

	cout << "������� ������ �������" << endl;
	cin >> row;
	cin >> element;

	matrix = new int* [row];

	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[element];

		for (int j = 0; j < element; j++)
		{
			matrix[i][j] = rand() % 20 - 10;
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	int flag = 0, buf = 0;

	for (int i = 0; i < row; i++)
	{
		if (flag == 0)
		{
			for (int j = 0; j < element; j++)
			{
				if (matrix[i][j] > 0)
				{
					cout << "����� ������ ������ � ������������� ��������� " << i + 1 << endl; //���������� ����������� ������ ������ (>0).
					buf = i;
					flag = 1;
					break;
				}
			}
		}
		else
		{
			break;
		}
	}

	int j = 0;
	int i = buf - 1;
	if (i < 0)			//�������� �� ������� ���������� ������.
	{
		cout << "��� ���������� ������!";
	}
	else
	{
		cout << "��������� �������" << endl;

		while (j < element)
		{
			matrix[i][j] = matrix[i][j] * (-1);
			j++;
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < element; j++)
			{
				cout << setw(4) << matrix[i][j];
			}
			cout << endl;
		}
	}
	delete[] matrix;
}