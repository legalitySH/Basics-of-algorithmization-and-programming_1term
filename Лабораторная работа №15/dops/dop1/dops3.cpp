//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main(){
//    setlocale(LC_ALL, "");
//    const int MAX_SIZE = 10;
//int matrixA[MAX_SIZE][MAX_SIZE] = {}, size, array_1[100] = {}, array_2[100] = {}, counter = 0, counter2 = 0, buf;
//
//cout << "¬ведите пор€док матрицы ";
//cin >> size;
//
//for (int i = 0; i < size; i++)     
//{
//    for (int j = 0; j < size; j++)
//    {
//        matrixA[i][j] = rand() % 10;
//        cout << setw(4) << matrixA[i][j];
//        array_1[counter] = matrixA[i][j];
//        counter++;
//    }
//    cout << endl;
//}
//
//for (int i = 0; i < counter; i++)   
//{
//    for (int j = i + 1; j < counter; j++)
//    {
//        if (array_1[i] < array_1[j])
//        {
//            buf = array_1[i];
//            array_1[i] = array_1[j];
//            array_1[j] = buf;
//        }
//    }
//}
//
//for (int i = 0; i < counter; i++)   
//{
//    if (array_1[i] != array_1[i + 1])
//    {
//        array_2[counter2] = array_1[i];
//        counter2++;
//    }
//}
//
//counter = 0;       
//int tmp = 0, j = 0, i = 0;
//
//while (tmp < size)    
//{
//    matrixA[i][j] = array_2[counter];
//    counter++;
//    j++;
//    i++;
//    tmp++;
//}
//
//cout << endl;
//
//for (int i = 0; i < size; i++)   
//{
//    for (int j = 0; j < size; j++)
//    {
//        cout << setw(4) << matrixA[i][j];
//    }
//    cout << endl;
//}
//}