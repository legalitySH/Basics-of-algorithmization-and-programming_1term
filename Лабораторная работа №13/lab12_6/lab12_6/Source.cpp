#include<iostream>
using namespace std;
void main() {
	char sentence[256]={}; char newsentence[256]={}; int counter = 0;
	cin.getline(sentence, 256);
	for (int i = 0; i <strlen(sentence); i++)
	{
		if (sentence[i] != '*') {
			newsentence[counter] = sentence[i];
			counter++;
			newsentence[counter] = sentence[i];
			counter++;
		}
	}
	cout << newsentence;
}