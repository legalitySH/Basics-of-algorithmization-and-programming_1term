#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int N = 10; int rows,columns,nullstring=-1;
	cout << "������� ���������� ����� �������:"; cin >> rows;
	cout << "������� ���������� �������� �������:"; cin >> columns;
	float matrix[N][N] = {};
	srand(time(0));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << "a" << i+1 << j+1 << "= ";
			cin >> *(*(matrix + i) + j);
		}
		cout << endl;
	}
	cout << "���� ������� :\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << *(*(matrix+i)+j) << " ";
		}
		cout << endl;
	}
	int counter = 0; int flag = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (*(*(matrix + i) + j) == 0) {
				counter++;

			}
			if (counter==columns && flag < 1)
			{
				nullstring = i;
				flag++;
			}
		}
	}
	if (nullstring == -1) {
		cout << "� �������� ���� ������� ��� ������� �����.";
		return 0;
	}
	for(int i = 0; i < columns; i++)
	{
		*(*(matrix + i) + nullstring) /= 2;
	}
	cout << "\n������� ����� " << nullstring + 1 << " �������� �����";
	cout << "\n����� �������:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << *(*(matrix + i) + j) << " ";
		}
		cout << endl;
	}
}