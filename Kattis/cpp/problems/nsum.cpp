// https://open.kattis.com/problems/nsum

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
	long a, b, total = 0;

	cin >> a;

	for (int i = 0; i < a; i++) {
		cin >> b;
        total += b;
	}

    cout << total << endl;

	return 0;
}
