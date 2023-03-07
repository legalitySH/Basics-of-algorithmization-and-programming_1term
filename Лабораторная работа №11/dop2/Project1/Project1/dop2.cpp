#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "������� 2.1" << endl;

    int numberA, numberB; //255 � 1 (������ ����� ��� �����������)

    cout << "������� A, ����� B " << endl;
    cin >> numberA;
    cin >> numberB;

    bitset<16> bitsA(numberA);
    bitset<16> bitsB(numberB);

    cout << "\t�������� ��� A" << endl << bitsA << endl;
    cout << "\t�������� ��� B" << endl << bitsB << endl;

    bitsB[2] = bitsA[1];
    bitsB[3] = bitsA[2];
    bitsB[4] = bitsA[3];
    bitsB[5] = bitsA[4];
    bitsB[6] = bitsA[5];

    cout << "B = " << bitsB << endl;


    cout << "������� 2.2" << endl;

    int position, numberOfBits;

    cout << "������� ������� P, ����� ���������� ����� N " << endl;
    cin >> position;
    cin >> numberOfBits;

    position -= 2;

    for (int i = 0; i < numberOfBits; i++)
    {
        bitsA.set(position, 1);

        position--;
    }

    cout << "A = " << bitsA << endl;
}