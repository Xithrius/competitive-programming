// https://open.kattis.com/problems/nastyhacks

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
	long n, r, e, c;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> r >> e >> c;

        if (r > (e - c)) {
			cout << "do not advertise" << endl;
		} else if (r < (e - c)) {
			cout << "advertise" << endl;
		} else {
            cout << "does not matter" << endl;
        }
	}

	return 0;
}
