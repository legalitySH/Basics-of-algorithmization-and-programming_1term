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
//        cout << endl <<"�������� ������� ������" << endl;
//        cout << "1 - ������ ����� ����� � ������ A[n, m] (n, m > 0) � ��� ������������� �������� � �������� ������� �������� �� ����� �� �������������." << endl;
//        cout << "2 - �������� ���������, ������������� ������, ��������� ������ �� ��������� ����, � ������, ��������� �� ��������� � �������� ����, ��� ���� ������ ����� ����� �����  � ������� - ���������, ��������� - ��������." << endl;
//        cout << "3 - �����" << endl;
//        cin >> a;
//        cout << endl << endl;
//    
//        switch (a) {
//    
//    
//        case 1:
//          cout << "������� ����� ����� ������� ";
//          cin >> row;
//          cout << "������� ��c�� �������� ";
//          cin >> colum;
//          A = new int[row * colum];
//          B = new int[row * colum];
//          for (i = 0; i < row; i++) {
//            for (j = 0; j < colum; j++)
//            {
//              cout << "������� " << j + 1 << " ������� " << i + 1 << "-� ������ ";
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
