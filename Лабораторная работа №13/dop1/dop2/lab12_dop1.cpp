#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    char string[256], ending[32]={}, words1[256] = {};

    puts("������� �����������: ");
    gets_s(string);
    puts("������� ���������: ");
    gets_s(ending);
    int endingLen = strlen(ending);
    char word[256] = {};          
    stringstream x;       
    x << string;               
    cout << "����� � ����� ���������� � �����������: ";
    while (x >> word) {
        int j = strlen(word) - endingLen; 
        int spore = 0;
        if (strlen(word) > 3)
            for (int i = j, k = 0; word[i] != 0; i++, k++)
            {
                if (ending[k] == word[i])
                {
                    spore++;
                    if (spore == endingLen)
                    {
                        cout << word << ' ';
                    }
                }

            }
    }
}