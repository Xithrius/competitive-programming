// https://open.kattis.com/problems/twostones

#include <iostream>

using namespace std;

int main(void) {
	int a;

	cin >> a;

	cout << ((a % 2 == 0) ? "Bob" : "Alice") << endl;

	return 0;
}
