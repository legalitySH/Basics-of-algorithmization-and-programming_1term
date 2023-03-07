#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
using namespace std;
//int main() {
//    string tmpWord = "";
//    string maxWord = "";
//    string minWord = "";
//    string text;
//    cout << "\t\t\tlab #12";
//    cout << "\nVariant 14";
//    cout << endl;
//    cout << "Enter sentence:\n";
//    getline(cin, text);
//
//    for (int i = 0; i < text.length(); i++)
//    {
//        if (text[i] != ' ')
//            tmpWord += text[i];
//        else
//            tmpWord = "";
//        if (tmpWord.length() > maxWord.length())
//            maxWord = tmpWord;
//    }
//    for (int i = 0; i < text.length(); i++)
//    {
//        if (text[i] != ' ')
//            tmpWord += text[i];
//        else
//        {
//            if (minWord.length() == 0)
//                minWord = tmpWord; 
//
//            if (tmpWord.length() < minWord.length())
//                minWord = tmpWord;
//
//            tmpWord = "";
//        }
//
//    }
//    cout << "Longest Word: " << maxWord << endl;
//    cout << "Word Length: " << maxWord.length() << endl;
//    cout << "Shortest Word: " << minWord << endl;
//    cout << "Word Length: " << minWord.length() << endl;
//}
int main() {
    string tmpWord = "";
    string maxWord = "";
    string minWord = "";
    string text;
    string* parray = &text;
    cout << "\t\t\tlab #12";
    cout << "\nVariant 14";
    cout << endl;
    cout << "Enter sentence:\n";
    getline(cin, text);
    for (int i = 0; i < text.length(); i++)
    {
        if ((*parray)[i]!= ' ')
            tmpWord += (*parray)[i];
        else
            tmpWord = "";
        if (tmpWord.length() > maxWord.length())
            maxWord = tmpWord;
    }
    tmpWord = "";
    minWord = "";
    istringstream ss(text);

    while (ss.peek() != EOF)
    {
        ss >> tmpWord;

        if (minWord.length() == 0)
            minWord = tmpWord;

        if (tmpWord.length() < minWord.length())
            minWord = tmpWord;

    }

    cout << "Longest Word: " << maxWord << endl;
    cout << "Word Length: " << maxWord.length() << endl;
    cout << "Shortest Word: " << minWord << endl;
    cout << "Word Length: " << minWord.length() << endl;
}