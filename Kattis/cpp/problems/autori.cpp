// https://open.kattis.com/problems/autori

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string a;

	getline(cin, a);

	for (uint64_t i = 0; i < a.length(); i++) {
		int c = a[i] - '0';
		if (c >= 17 && c <= 42) {
			cout << a[i];
		}
	}

	cout << endl;

	return 0;
}
