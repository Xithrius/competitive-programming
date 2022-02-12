// https://open.kattis.com/problems/tarifa

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	long long a, b, c = 0, d;

	cin >> a >> b;

	for (int i = 0; i < b; i++) {
		cin >> d;
		c += a - d;
	}

	c += a;

	cout << c << endl;

	return 0;
}
