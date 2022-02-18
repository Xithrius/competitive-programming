// https://open.kattis.com/problems/ofugsnuid

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int a, b;
	vector<int> v;

	cin >> a;

	for (int i = 0; i < a; i++) {
		cin >> b;
		v.push_back(b);
	}

	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << endl;
	}

	return 0;
}
