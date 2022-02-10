#include <iostream>

using namespace std;

int main(void) {
	uint64_t a;

	cin >> a;
	cout << ((a % 4 == 0) ? "YES" : "NO") << endl;

	return 0;
}
