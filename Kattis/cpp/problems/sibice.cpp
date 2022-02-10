// https://open.kattis.com/problems/sibice

#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
	int a, w, h, m;

	cin >> a >> w >> h;

	while (cin >> m) {
		cout << ((m <= w || m <= h || m <= sqrt(pow((double) w, 2.0) + pow((double) h, 2.0)))
		             ? "DA"
		             : "NE")
		     << endl;
	}

	return 0;
}
