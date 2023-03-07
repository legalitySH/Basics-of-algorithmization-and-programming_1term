//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
//	srand(time(0));
//	float* ptr; int i, n,c; int counter = 0;
//	printf("Введите количество элементов массива=\n");
//	scanf_s("%d", &n);
//	printf("Введите число С=\n");
//	scanf_s("%d", &c);
//	if (!(ptr = (float*)malloc(n * sizeof(float))))   //выделение памяти и проверка, 
//	{	                                      //достаточно ли для нее места
//		puts("Введено неверное кол-во элементов массива");
//		return 0;
//	}
//	for (int i = 0; i < n; i++) // пользовательское заполнение массива
//	{
//		scanf_s("%f", (ptr + i));
//	}
//	for (int i = 0; i < n; i++) // вывод массива
//	{
//		cout << *(ptr + i) << " ";
//	}
//	for (int i = 0; i < n; i++) // поиск количества элементов больших числа С
//	{
//		if (*(ptr + i) > c) {
//			counter++;
//		}
//	}
//	float max = abs(*(ptr));
//	int i_max = 0;
//	for (int i = 1; i < n; i++) // Поиск максимального элемента и его номера
//		if (abs(*(ptr + i)) > max)
//		{
//			max = abs(*(ptr + i));
//			i_max = i;
//		}
//	float mul=1; 
//	for (int i = i_max+1; i < n; i++) // Осуществление произведения элементов после максимума
//	{
//		mul *= *(ptr + i);
//	}
//	printf("\nЭлементов больших чем число С = %d", counter);
//	printf("\nМаксимальный по модулю элемента массива равен= %f", *(ptr+i_max));
//	printf("\nПроизведение элементов массива,расположенных после максимального по модулю элемента= %f", mul);
//	
//	free(ptr); // высвобождение памяти 
//
//}