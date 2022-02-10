// https://open.kattis.com/problems/everywhere

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int tests, c;

	cin >> tests;

	for (int i = 0; i < tests; i++) {
		cin >> c;

		vector<string> v;

		for (int j = 0; j <= c; j++) {
			string str;
			getline(cin, str);

			bool found = false;

			for (uint64_t k = 0; k < v.size(); k++) {
				if (v[k] == str) {
					found = true;
				}
			}

			if (!found) {
				v.push_back(str);
			}
		}

		cout << v.size() - 1 << endl;
	}

	return 0;
}
