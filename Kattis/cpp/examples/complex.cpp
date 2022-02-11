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

vec<string> split(const string &, char);

int main(void) {
	long long a, b;
	cin >> a >> b;

	string s;
	getline(cin, s);

	vec<string> v = split(s, ' ');

	for (uint64_t i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	return 0;
}

vec<string> split(const string &s, const char delim) {
	vec<string> v = {};

	stringstream ss(s);
	string item;

	while (getline(ss, item, delim)) {
		v.push_back(item);
	}

	return v;
}
