//
//#include <ctime>
//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#define SENTENCE_ENDS ".?! "
//char buf[BUFSIZ];
//using namespace std;
//void matrix(int, int, int*, int*);
//char strin(char []);
//int main()
//{
//  setlocale(0, "");
//  int* A, * B, row, colum, i, j, f = 0, number = 0,a;
//
//  do {
//        cout << endl <<"Выберите вариант работы" << endl;
//        cout << "1 - Ввести целые числа в массив A[n, m] (n, m > 0) и все отрицательные элементы в нечетных строках заменить на такие же положительные." << endl;
//        cout << "2 - Написать программу, преобразующую строку, состоящую только из прописных букв, в строку, состоящую из прописных и строчных букв, при этом первая буква после точки  и пробела - прописная, остальные - строчные." << endl;
//        cout << "3 - выход" << endl;
//        cin >> a;
//        cout << endl << endl;
//    
//        switch (a) {
//    
//    
//        case 1:
//          cout << "Введите число строк матрицы ";
//          cin >> row;
//          cout << "Введите чиcло столбцов ";
//          cin >> colum;
//          A = new int[row * colum];
//          B = new int[row * colum];
//          for (i = 0; i < row; i++) {
//            for (j = 0; j < colum; j++)
//            {
//              cout << "Введите " << j + 1 << " элемент " << i + 1 << "-й строки ";
//              cin >> *(A + i * colum + j);
//              *(B + i * colum + j) = *(A + i * colum + j);
//            }
//          }
//
//          matrix(row, colum, A, B);
//          break;
//    
//    
//    
//        case 2:
//          for (int i = 0; i < 2;i++ ) {
//            if (i == 0)
//              fgets(buf, BUFSIZ, stdin);
//            if (i == 1) {
//              printf("String: ") && fgets(buf, BUFSIZ, stdin);
//              strin(buf);
//            }
//            
//          }
//          break;
//    
//    
//    
//    
//    
//    
//        case 3: break;
//    
//    
//        
//    
//        }
//    
//      } while (a != 3);
//}
//
//
//
//
//void matrix(int row, int colum, int* A, int* B) {
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
//
//  for (i = 0; i < row; i++) {
//    for (j = 0; j < colum; j++)
//    {
//      if ((i % 2) == 0 && *(A + i * colum + j) < 0)
//        *(A + i * colum + j) = abs(*(A + i * colum + j));
//
//    }
//
//  }
//
//  cout << endl << "NEW Matrix:" << endl;
//  for (i = 0; i < row; i++) {
//    for (j = 0; j < colum; j++)
//    {
//      cout << *(A + i * colum + j) << " ";
//
//    }
//    cout << endl;
//  }
//  delete[] A;
//
//  delete[] B;
//}
//
//char strin( char buf[]) {
//
//    
//
//    
//      char* p;
//      int inSentence;
//
//      for (inSentence = 0, p = buf; *p != '\0'; ++p) {
//        if (strchr(SENTENCE_ENDS, *p))
//          inSentence = 0;
//        else if (!inSentence) {
//          *p = tolower(*p);
//          inSentence = 0;
//        }
//
//      }
//
//      for (inSentence = 0, p = buf; *p != '\0'; ++p) {
//        if (strchr(SENTENCE_ENDS, *p))
//          inSentence = 0;
//        else if (!inSentence) {
//          *p = toupper(*p);
//          inSentence = 1;
//        }
//
//      }
//
//
//      
//      printf("Result: %s", buf);
//
//      return buf[BUFSIZ];
//}
//
