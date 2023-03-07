#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int x[] = { 1,2,7,4,7,6,10 };
    double y;
    auto z = max_element(begin(x), end(x));
    cout << "z(max) = " << *z << endl;

    for (int i = 1; i <= 5; i++)
    {
        y = *z * i* pow(x[i], 2);
        cout << "y = " << y << endl;
    }
}