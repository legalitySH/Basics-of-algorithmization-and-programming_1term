#include<iostream>
#include<ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int sum = 0, ** A; int counter = 0, null = -1, value, row = 0, column = 0;
	cout << "������� ���������� ����� ������� ="; cin >> row;
	cout << "������� ���������� �������� ������� ="; cin >> column;
	srand((unsigned)time(NULL));
	A = new int* [row];  // ��������� ������������ ������
	for (int i = 0; i < row; i++)
	{
		A[i] = new int[column]; // ��������� ������������ ������
		for (int j = 0; j < column; j++)
		{
			A[i][j] = rand() % 10; // ��������� ���������� �������
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++) // ����� ������� ��������� � ������� ������
	{
		for (int j = 0; j < column; j++)
		{
			if (A[i][j] == 0 && counter < 1){
				cout << "������ ������ � ������� ��������� =" << i + 1;
				counter++;
				null = i;
			}
		}
	}
	if (null != -1) { // �������� �� ������� ������� �����
		value = A[null][0];
	}
	else
	{
		cout << "����� � ������� ��������� ���";
		return 0;
	}
	cout << "\n������ ������� ��������� ������=" << value;
	cout << endl << endl;
	cout << "����� �������:\n";
	for (int i = 0; i < row; i++) // ����� ����� �������
	{
		for (int j = 0; j < column; j++)
		{
			A[i][j] = A[i][j] - value; // �� ������� �������� ���������� 1 ������� ������� ������
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	delete[] A; // ������������ ������



}
