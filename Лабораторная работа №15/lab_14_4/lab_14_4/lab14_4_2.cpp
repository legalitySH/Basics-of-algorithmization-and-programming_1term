#include <ctime>
#include <iostream>
using namespace std;
int main()
{
  setlocale(0, "");
  int* A, row, colum, i, j, f = 0, number = 0;
  cout << "¬ведите число строк матрицы ";
  cin >> row;
  cout << "¬ведите чиcло столбцов ";
  cin >> colum;
  A = new int[row * colum];
  for (i = 0; i < row; i++){
    f = 0;
    for (j = 0; j < colum; j++)
    {
      cout << "¬ведите " << i + 1 << " элемент " << j + 1 << "-й строки ";
      cin >> *(A + i * colum + j);
      if (*(A + i * colum + j) != 0)
      {
        f += 1;
      }
    }
    if (f == j)
      number += 1;
    
  
}
  cout << endl << "Count - " << number;
  delete[] A;
}