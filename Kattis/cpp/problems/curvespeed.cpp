// https://open.kattis.com/problems/curvespeed

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	long a;
	float b;

	while (cin >> a >> b) {
		cout << round(sqrt((a * (b + 0.16)) / 0.067)) << endl;
	}

	return 0;
}
