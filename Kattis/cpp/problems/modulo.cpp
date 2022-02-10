// https://open.kattis.com/problems/modulo

#include <iostream>

using namespace std;

int main(void) {
    int a, total = 0;

    while (cin >> a) {
        if (42 % a == 0) {
            total++;
        }
    }

    cout << total << endl;

	return 0;
}
