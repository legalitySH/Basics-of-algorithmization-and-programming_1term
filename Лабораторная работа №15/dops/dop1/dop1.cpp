//#include<iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
//	const int N = 100; int s;
//	int matrix[N][N]; int newmatrix[N][N]={};
//	cout << "¬ведите n:"; cin>>s;
//	s = s * 2;
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			/*matrix[i][j] = rand() % 21 - 10;*/
//			matrix[i][j] = rand() % 5;
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < s/2; i++)
//	{
//		for (int j = 0; j < s/2; j++)
//		{
//			newmatrix[(s / 2) + i][(s / 2) + j] = matrix[i][j];
//		}
//	}
//	cout << endl << endl;
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			cout << newmatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < s / 2; i++)
//	{
//		for (int j = 0; j < s / 2; j++)
//		{
//			newmatrix[i][j] = matrix[(s / 2) + i][(s / 2) + j];
//		}
//	}
//	cout << endl << endl;
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			cout << newmatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < s / 2; i++)
//	{
//		for (int j = 0; j < s / 2; j++)
//		{
//			newmatrix[i][(s/2)+j] = matrix[(s / 2) + i][j];
//		}
//	}
//	cout << endl << endl;
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			cout << newmatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < s / 2; i++)
//	{
//		for (int j = 0; j < s / 2; j++)
//		{
//			newmatrix[(s / 2) + i][j] = matrix[i][(s / 2) + j];
//		}
//	}
//	cout << endl << endl;
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//			cout << newmatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	cout << "\nTHE END........";
//}