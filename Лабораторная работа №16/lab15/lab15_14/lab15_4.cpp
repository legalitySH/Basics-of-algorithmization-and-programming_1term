//
//#define _CRT_SECURE_NO_WARNINGS
//#include <ctime>
//#include <iostream>
//#include <cstring>
//#include <cctype>
//#include <string>
//
//using namespace std;
//void matrix(int, int,int*,int*);
//void strin(int);
//int main()
//{
//  
//  setlocale(0, "");
//  int n = 0;
//  
//  int* A, *B, row, colum, i, j, f = 0, number = 0,a=0;
//  do {
//    cout << endl <<"Выберите вариант работы" << endl;
//    cout << "1 - Ввести целочисленный массив A[n, n] и вычесть из каждой строки предыдущую. Из первой строки вычесть последнюю строку. Получившийся массив вывести. " << endl;
//    cout << "2 - Дана строка. Слова в предложении разделены одним или несколькими пробелами. Слова могут состоять только из цифр или букв. Найти сумму чисел, входящих в строку." << endl;
//    cout << "3 - выход" << endl;
//    cin >> a;
//    cout << endl << endl;
//
//    switch (a) {
//
//
//    case 1:
//      cout << "Введите число строк матрицы ";
//      cin >> row;
//      cout << "Введите чиcло столбцов ";
//      cin >> colum;
//      A = new int[row * colum];
//      B = new int[row * colum];
//      for (i = 0; i < row; i++) {
//        for (j = 0; j < colum; j++)
//        {
//          cout << "Введите " << j + 1 << " элемент " << i + 1 << "-й строки ";
//          cin >> *(A + i * colum + j);
//          *(B + i * colum + j) = *(A + i * colum + j);
//        }
//      }
//
//      matrix(row, colum, A, B);
//      break;
//
//
//
//    case 2:
//      
//      std::cout << "Enter number elements of string ";
//      std::cin >> n;
//      std::cout << std::endl;
//      strin(n);
//      break;
//
//
//
//
//
//
//    case 3: break;
//
//
//    
//
//    }
//
//  } while (a != 3);
//
//
//
//}
//
//
//
//
//
//void matrix(int row,int colum,int *A,int *B) {
//  int i, j, f = 0, number = 0;
//  cout << endl << "Matrix:" << endl;
//  for (i = 0; i < row; i++) {
//    for (j = 0; j < colum; j++)
//    {
//      cout << *(A + i * colum + j) << " ";
//
//    }
//    cout << endl;
//  }
//  cout << endl << "NEW Matrix:" << endl;
//  for (i = 0; i < row; i++) {
//    for (j = 0; j < colum; j++)
//    {
//      if (i == 0) {
//        *(B + i * colum + j) = *(A + i * colum + j) - *(A + (row - 1) * colum + j);
//        cout << *(B + i * colum + j) << " ";
//      }
//      if (i != 0) {
//        *(B + i * colum + j) = *(A + i * colum + j) - *(A + (i - 1) * colum + j);
//        cout << *(B + i * colum + j) << " ";
//      }
//
//
//
//
//    }
//    cout << endl;
//  }
//
//
//  delete[] A;
//
//  delete[] B;
//}
//
//
//
//
//
//
//void strin(int n)
//{
//  int sum = 0;
//  std::string word;
//  for (int i = 0; i < n; i++) {
//    std::cin >> word;
//    try {
//      unsigned long long int number2 = std::stoull(word);
//      sum += number2;
//      std::cout << "DEBUG: Found number " << number2 << std::endl;
//    }
//    catch (std::invalid_argument& e) {
//      std::cerr << "DEBUG: Could not convert word '" << word << "' to number: " << e.what() << std::endl;
//    }
//
//    catch (std::out_of_range& e) {
//      std::cerr << "DEBUG: Out of range converting word '" << word << "' into unsigned long long int: " << e.what()
//        << std::endl;
//    }
//  }
//  std::cout << "Sum: " << sum << std::endl << std::endl;
//  
//
//}