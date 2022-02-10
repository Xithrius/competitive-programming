#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int a, b;

	while (cin >> a >> b)
		cout << abs(a - b) << endl;

	return 0;
}
