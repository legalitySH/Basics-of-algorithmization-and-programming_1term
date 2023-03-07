#include<iostream>
#include <string.h>
#include<stdio.h>
#include <string>
#include<Windows.h>
using namespace std;
int main() {{{{{}}}}
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int SIZE = 1000;
	char sentence[SIZE] , newsentence[SIZE], numbers[] = { '2','4','6','8' }, counter = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введите предложение...";
	cin.getline(sentence,SIZE);
	for (int i = 0; i < strlen(sentence); i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (sentence[i+1] == ' ' && sentence[i] == numbers[j]) {
				newsentence[counter] = sentence[i];
				counter++;
				break;
			}
			else
			{
				newsentence[counter] == ' ';
				counter++;
				break;
			}
		}
	}
	cout << "Новый массив:\n";
	for (int i = 0; i < counter; i++)
	{
		cout << newsentence[i];
	}
}
//int main() {
//	const int SIZE = 1000;
//	char sentence[SIZE] = {}, newsentense[SIZE] = {}, symbol; int n, position;
//	char* parray = sentence; char* sarray = newsentense; int z = 0;
//	setlocale(LC_ALL, "");
//	cout << "Введите предложение...";
//	cin.getline(sentence, SIZE);
//	cout << "Введите символ:"; cin >> symbol;
//	cout << "Введите позицию с которой осуществляется вставка:"; cin >> position;
//	cout << "Введите количество символов,которых нужно вставить:"; cin >> n;
//	for (int i = 0; i < 100; i++)
//	{
//		if (i >= position && i < position + n) {
//			*(sarray + i) = symbol;
//			z++;
//		}
//		else
//		{
//			*(sarray + i) = *(parray + i - z);
//		}
//	}
//	cout << "Модифицированное предложение :\n";
//	for (int i = 0; i < strlen(newsentense); i++) {
//		cout << *(sarray + i);
//	}
//}