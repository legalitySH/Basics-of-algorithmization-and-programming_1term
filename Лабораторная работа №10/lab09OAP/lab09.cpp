#include<iostream>
#include<locale>
#include <algorithm>
using namespace std;
void main() {

    cout << "\t\t Task 5\n";
    const int SIZE = 999; int n;
    int argc[SIZE] = {};
    cout << "n= "; cin >> n;
    srand((unsigned)time(NULL));
    if (n > 999) { cout << "input error(n<1000)"; return; };
    for (int i = 0; i <= n; i++) {
        argc[i] = rand() % 100;
        cout << "argc[" << i << "] =" << argc[i] << endl;
    }
    // task6

    cout << "\t\t Task 6\n";
    const int SIZE0 = 40;
    int a[SIZE0];
    int i = 0;
    int k = 0, first = 0, last = 0;
    srand((unsigned)time(NULL));
    for (i; i < SIZE0; i++)
    {
        a[i] = rand() % 10;
        cout << i + 1 << '\t' << "argc[" << i << "] =" << a[i] << "\n";
        if (a[i] == 0) {
            k++;
            if (k == 1)
                first = i + 1;
            last = i + 1;
        }
    }
    cout << "first:" << first << "\nlast:" << last << "\n";


    // task7 ( 16 variant )

    cout << "\t\t Task 7\n";
    const int SIZE1 = 10;
    int b[SIZE1];
    i = 0;
    srand((unsigned)time(NULL));
    for (i; i < SIZE1; i++)
    {
       b[i] = rand() % 1000;
        cout << i + 1 << '\t' << "argc[" << i << "] =" << b[i] << "\n";
    }
    i = 0;
    int* min = std::min_element(std::begin(b), std::end(b));
    int* max = std::max_element(std::begin(b), std::end(b));

    for (i; i < SIZE1; i++) {
        if (b[i] == *min) {
            cout << "Min element:" << i+1 << endl;
            break;
        }
        else {
            continue;
        }
    }
        for (i; i < SIZE1; i++) {
            if (b[i] == *max) {
                cout << "Max element:" << i+1 << endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }
