//#include<iostream>
//using namespace std;
//int min_element(int*pointer,int size) {
//	int min = *pointer;
//	for (int i = 0; i < size; i++)
//	{
//		if (min > *(pointer + i))
//			min = *(pointer + i);
//	}
//	return min;
//}
//int &max_element(int* pointer, int size) {
//	int max = *pointer;
//	for (int i = 0; i < size; i++)
//	{
//		if (max < *(pointer + i))
//			max = *(pointer + i);
//	}
//	return max;
//}
//int main() {
//	setlocale(LC_ALL, "");
//	srand(time(0));
//	int* A; int size = 0;
//	cout << "Введите размер одномерного массива :"; cin >> size;
//	A = new int[size];
//	cout << "Искомый массив: ";
//	for (int i = 0; i < size; i++)
//	{
//		*(A + i) = rand() % 41 - 21;
//		cout << *(A + i) << " ";
//	}
//	int min = min_element(A, size);
//	cout << "\nМинимальный элемент:" << min;
//	int max = max_element(A, size);
//	cout << "\nМаксимальный элемент:" << max;
//	cout << "\nРазность минимума и максимума :" << min - max;
//}
