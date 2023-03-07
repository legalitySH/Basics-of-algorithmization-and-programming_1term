#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int N = 100; int size,M;
	int matrix[N][N];
	cout << "¬ведите пор€док матрицы..."; cin >> size;
	cout << "¬ведите номер столбца.."; cin >> M;
	for (int i = 0; i < size; i++)
	{		
		for (int n = 0; n < size; n++)
		{
			matrix[i][n] = rand() % 10;
			cout << matrix[i][n] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int t;
	for (int i = 0; i < size*size; ++i) {
		if (M - 1 == i) continue;
		swap(matrix[M-1][i],matrix[i][M-1]);
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

