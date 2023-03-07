#include<iostream>
#include<ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int sum = 0, ** A; int counter = 0, null = -1, value, row = 0, column = 0;
	cout << "Введите количество строк матрицы ="; cin >> row;
	cout << "Введите количество столбцов матрицы ="; cin >> column;
	srand((unsigned)time(NULL));
	A = new int* [row];  // выделение динамической памяти
	for (int i = 0; i < row; i++)
	{
		A[i] = new int[column]; // выделение динамической памяти
		for (int j = 0; j < column; j++)
		{
			A[i][j] = rand() % 10; // рандомное заполнение массива
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++) // поиск нулевых элементов и нулевой строки
	{
		for (int j = 0; j < column; j++)
		{
			if (A[i][j] == 0 && counter < 1){
				cout << "Первая строка с нулевым элементом =" << i + 1;
				counter++;
				null = i;
			}
		}
	}
	if (null != -1) { // проверка на наличие нулевых строк
		value = A[null][0];
	}
	else
	{
		cout << "Строк с нулевыи элементом нет";
		return 0;
	}
	cout << "\nПервый элемент найденной строки=" << value;
	cout << endl << endl;
	cout << "Новая матрица:\n";
	for (int i = 0; i < row; i++) // вывод новой матрицы
	{
		for (int j = 0; j < column; j++)
		{
			A[i][j] = A[i][j] - value; // от каждого элемента отнимается 1 элемент нулевой строки
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	delete[] A; // освобождение памяти



}
