//#include<iostream>
//using namespace std;
//int main() {
//	char sentence[256]; char symbol; char modsentence[256],z=0;
//	cout << "enter sentence:\n";
//	cin.getline(sentence, 256);
//	cout << "enter symbol:\n";
//	cin >> symbol;
//	for (int i = 0; i < strlen(sentence); i++) {
//		if (sentence[i] != symbol) {
//			modsentence[z] = sentence[i];
//			z++;
//		}
//	}
//	for (int i = 0; i < z; i++) {
//		cout << modsentence[i];
//	}
//}
//int main() {
//	char sentence[256]; char symbol; char modsentence[256], z = 0;
//	char* sarray = sentence; char* marray = modsentence;
//	cout << "enter sentence:\n";
//	cin.getline(sentence, 256);
//	cout << "enter symbol:\n";
//	cin >> symbol;
//	for (int i = 0; i < strlen(sentence); i++) {
//		if (*(sarray + i) != symbol) {
//			*(marray + z) = *(sarray + i);
//			z++;
//		}
//	}
//	for (int i = 0; i < z; i++) {
//		cout << *(marray + i);
//	}
//}