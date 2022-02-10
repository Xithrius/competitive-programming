// https://open.kattis.com/problems/sorttwonumbers

#include <iostream>

using namespace std;

int main(void) {
	int a, b;

    cin >> a >> b;

    if (a < b) {
        cout << a << " " << b << endl;
    } else {
		cout << b << " " << a << endl;
	}

	return 0;
}
