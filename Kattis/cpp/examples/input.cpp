// https://open.kattis.com/problems/

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
	long long a, b;

	while (cin >> a >> b)
		cout << abs(a - b) << endl;

	return 0;
}
