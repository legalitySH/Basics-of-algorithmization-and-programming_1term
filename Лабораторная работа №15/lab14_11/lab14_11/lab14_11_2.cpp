#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int N = 4; int counter = 0,z=0;
	int matrix[N][N];
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 2;
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (matrix[i][j] == matrix[j][i]) {
				counter++;
			}
		}
		if (counter == 4) {
			cout << "\nПодходит - " << i+1;
			counter = 0;
			z++;
		}
		counter = 0;
	}
	if (z == 0) {
		cout << "\nТаких k не мае";
	}

}