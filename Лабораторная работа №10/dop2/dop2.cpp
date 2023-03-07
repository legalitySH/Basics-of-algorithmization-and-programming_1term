#include<stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int n_weeks, days, counter = 0, z = 0;
int sum = 0;
void main() {
	cout << "Enter number of weeks:";
	cin >> n_weeks;
	srand(time(NULL));
	int argc_sum[100];
	const int SIZE_D = 700;
	double amount[SIZE_D];
	days = n_weeks * 7;
	for (int i = 0; i < days; i++) {
		amount[i] = rand() % 250;
		sum += amount[i];
		counter++;
		if (counter % 7 == 0) {
			argc_sum[z] = sum;
			counter = 0;
			sum = 0;
			z++;
		}
	}
	for (int l = 0; l < n_weeks; l++) {
		cout << l + 1 << "\t" << "sum:" << argc_sum[l] << endl;
	}
	int* max = std::max_element(std::begin(argc_sum), std::end(argc_sum));
	for (int x = 0; x < n_weeks; x++)
	{
		if (argc_sum[x] == *max)
			cout << "Max precipitation on " << x+1 << " week" << endl;
	}
}
