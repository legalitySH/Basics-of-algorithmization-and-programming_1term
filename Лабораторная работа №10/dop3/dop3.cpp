#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    setlocale(0, "");
    const int n = 10;
    int x[n], i, a, b;
    srand(time(NULL));
    cout << "������� �������� �������: ";
    for (i = 0; i < n; i++)
    {
        x[i] = rand() % 100;
        cout << x[i] << " ";
        a = 0;
        b = 1;
        while (x[i] > a && x[i] > b)
        {
            a = a + b;
            b = a + b;
        }
        if (x[i] == a || x[i] == b)
            break;
    }
    if (i == n)
        cout << "\n����� ��������� ���" << endl;
    else
        cout << "\n������ ����� ���������: " << x[i] << endl;

}