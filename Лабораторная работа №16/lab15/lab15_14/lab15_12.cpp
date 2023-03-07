////#include <iostream>
////#include <iomanip>
////
////using namespace std;
////
////int generate_matrix(int **matrix, int row, int element)		//���������� �������
////{
////	matrix = new int* [row];
////	for (int i = 0; i < row; i++)
////	{
////		matrix[i] = new int[element];
////
////		for (int j = 0; j < element; j++)
////		{
////			matrix[i][j] = rand() % 20;
////		}
////		cout << endl;
////	}
////
////	return **matrix;
////}
////
////void min_and_replace(int** matrix, int row, int element)		//������� ����������� ����� �������� �� ������� � ������ ��������� �� ������� ���������.
////{
////	int min_of_row;
////	int counter = 0;
////	int x = 0, y = 0;
////	for (int i = 0; i < row; i++)
////	{
////		min_of_row = matrix[i][0];		//������� �������� �� ��������� ������
////
////		for (int j = 0; j < element; j++)
////		{
////			if (matrix[i][j] < min_of_row)		//����� ��������
////			{
////				min_of_row = matrix[i][j];
////			}
////			counter++;
////			if (counter == element)		//������ �� ������� ���������
////			{
////				matrix[x][y] = min_of_row;
////				x++;
////				y++;
////			}
////		}
////		counter = 0;
////	}
////}
////void output_matrix(int** matrix, int row, int element)		//������� ����������� ����� ������� � �������
////{
////	for (int i = 0; i < row; i++)
////	{
////		for (int j = 0; j < element; j++)
////		{
////			cout << setw(4) << matrix[i][j];
////		}
////		cout << endl;
////	}
////}
////
////void row_column(int** matrixA, int row, int element)	//������� ��������� ����� � ��������
////{
////	int counter = 0;
////
////	for (int i = 0; i < row; i++)
////	{
////		for (int j = 0; j < element; j++)
////		{
////			if (matrixA[i][j] == matrixA[j][i])
////			{
////				counter++;
////			}
////			if (counter == element)
////			{
////				cout << "� " << i + 1 << endl;		//i+1 ��� ����������� ������
////			}
////		}
////		counter = 0;
////	}
////}
////
////int main()
////{
////	setlocale(LC_ALL, "rus");
////	srand(time(NULL));
////
////	int key;
////
////	cout << "1 - � ������ ������ ������� F2(d, p), d <= 16, p <= 18 �������� ������ �������, ������� �� ������� �����-����, ����������� ��������� ������.  " << endl;
////	cout << "2 - ��� �������� ������� �������� 4 �� 4 ����� ����� k, ��� ������� k-� ������ ������� ��������� � k-� ��������.";
////	cin >> key;
////
////	switch (key)
////	{
////
////	case 1:
////		cout << "������� 12.1" << endl;
////
////		int** matrix;
////		int row, element;
////
////		cout << "������� ���������� ����� (<=16), ����� �������� (<=18)" << endl;
////		cin >> row;
////		cin >> element;
////
////
////		if (row > 16 || element > 18)
////		{
////			cout << "�� ����� �������� �� ��������������� �������!" << endl;
////		}
////		else
////		{
////			cout << "�������" << endl;
////
////			matrix = new int* [row];
////			for (int i = 0; i < row; i++)
////			{
////				matrix[i] = new int[element];
////
////				for (int j = 0; j < element; j++)
////				{
////					matrix[i][j] = rand() % 20;
////					cout << setw(4) << matrix[i][j];
////				}
////				cout << endl;
////			}
////
////			min_and_replace(matrix, row, element);	//����� �������
////
////			cout << endl << "��������� �������" << endl;
////
////			output_matrix(matrix, row, element); //����� ������� ������ � �������
////
////			delete[] matrix;
////		}
////		break;
////
////	case 2:
////		cout << "������� 12.2" << endl;
////
////		const int SIZE = 4;
////		int** matrixA;
////
////		cout << "������� �������� ������� 4x4" << endl;
////
////		matrixA = new int* [SIZE];
////		for (int i = 0; i < SIZE; i++)
////		{
////			matrixA[i] = new int[SIZE];
////			for (int j = 0; j < SIZE; j++)
////			{
////				cin >> matrixA[i][j];
////				matrixA[i][j] = rand() % 2;
////			}
////		}
////
////		cout << "�������" << endl;
////
////		output_matrix(matrixA, SIZE, SIZE);
////
////		for (int i = 0; i < SIZE; i++)
////		{
////			for (int j = 0; j < SIZE; j++)
////			{
////				cout << setw(4) << matrixA[i][j];
////			}
////			cout << endl;
////		}
////
////		row_column(matrixA, SIZE, SIZE);		//����� ������� ��������� ����� � �������
////
////		int counter = 0;
////		for (int i = 0; i < SIZE; i++)
////		{
////			for (int j = 0; j < SIZE; j++)
////			{
////				if (matrixA[i][j] == matrixA[j][i])
////				{
////					counter++;
////				}
////				if (counter == SIZE)
////				{
////					cout << "� " << i + 1 << endl;
////				}
////			}
////			counter = 0;
////		}
////
////		delete[] matrixA;
////		break;
////	}
////}