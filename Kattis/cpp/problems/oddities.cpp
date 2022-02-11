// https://open.kattis.com/problems/oddities

#include <iostream>

using namespace std;

int main(void) {
	int a, b;

	cin >> b;

	for (int i = 0; i < b; i++) {
		cin >> a;

		cout << a << " is " << ((a % 2 == 0) ? "even" : "odd") << endl;
	}

	return 0;
}
