// https://open.kattis.com/problems/jumbojavelin

#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

#define vec vector

using namespace std;

int main(void) {
	long a, b, t = 0;

	cin >> a;

	for (int i = 0; i < a; i++) {
		cin >> b;

		t += b;
	}

	cout << t - (a - 1) << endl;

	return 0;
}
