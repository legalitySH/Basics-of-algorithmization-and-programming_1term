#include<iostream>
#include<iomanip>
using namespace std;
int& search(int** A, int row, int column)
{
	int counter = 0;
	bool t = true;

	for (int j = 1; j < column; ++j)
	{
		for (int i = 0; i < row; ++i)
		{
			if (A[i][j] < 0)
			{
				t = false;
				break;
			}
		}
		if (t)
		{
			for (int i = 0; i < row; ++i)
			{
				A[i][j - 1] *= -1;
			}
		}

		t = true;
	}

	return **A;
		
}

int main() {
	setlocale(LC_ALL, "rus");
	int row = 0, column = 0, ** matrix;
	cout << "¬ведите количество строк, затем столбцов...\n";
	cin >> row >> column;
	srand(time(NULL));
	cout << "»скомый массив:\n";
	matrix = new int* [column];
	for (int i = 0; i < row; i++)
	{
		*(matrix + i) = new int[row];
		for (int j = 0; j < column; j++)
		{
			*(*(matrix + i) + j) = rand() % 21 - 5;
			cout << setw(4) << *(*(matrix + i) + j);
		}
		cout << endl;
	}
	search(matrix, row, column);
		cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

}