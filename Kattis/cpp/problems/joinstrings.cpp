// https://open.kattis.com/problems/joinstrings

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	string lines_str;
	getline(cin, lines_str);
	long long lines = stoi(lines_str);

	vector<string> v = {};
	string tmp;

	for (int i = 0; i < lines; i++) {
		getline(cin, tmp);
		v.push_back(tmp);
	}

	long long a, b;

	while (cin >> a >> b) {
		v[a - 1] = v[a - 1].append(v[b - 1]);
	}

    cout << v[a - 1] << endl;

	return 0;
}
