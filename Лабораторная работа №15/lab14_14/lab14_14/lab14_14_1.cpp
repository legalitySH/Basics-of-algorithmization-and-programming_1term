//#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
//	srand(time(0));
//	float* ptr; int i, n,c; int counter = 0;
//	printf("������� ���������� ��������� �������=\n");
//	scanf_s("%d", &n);
//	printf("������� ����� �=\n");
//	scanf_s("%d", &c);
//	if (!(ptr = (float*)malloc(n * sizeof(float))))   //��������� ������ � ��������, 
//	{	                                      //���������� �� ��� ��� �����
//		puts("������� �������� ���-�� ��������� �������");
//		return 0;
//	}
//	for (int i = 0; i < n; i++) // ���������������� ���������� �������
//	{
//		scanf_s("%f", (ptr + i));
//	}
//	for (int i = 0; i < n; i++) // ����� �������
//	{
//		cout << *(ptr + i) << " ";
//	}
//	for (int i = 0; i < n; i++) // ����� ���������� ��������� ������� ����� �
//	{
//		if (*(ptr + i) > c) {
//			counter++;
//		}
//	}
//	float max = abs(*(ptr));
//	int i_max = 0;
//	for (int i = 1; i < n; i++) // ����� ������������� �������� � ��� ������
//		if (abs(*(ptr + i)) > max)
//		{
//			max = abs(*(ptr + i));
//			i_max = i;
//		}
//	float mul=1; 
//	for (int i = i_max+1; i < n; i++) // ������������� ������������ ��������� ����� ���������
//	{
//		mul *= *(ptr + i);
//	}
//	printf("\n��������� ������� ��� ����� � = %d", counter);
//	printf("\n������������ �� ������ �������� ������� �����= %f", *(ptr+i_max));
//	printf("\n������������ ��������� �������,������������� ����� ������������� �� ������ ��������= %f", mul);
//	
//	free(ptr); // ������������� ������ 
//
//}