// https://open.kattis.com/problems/bijele

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v = { 1, 1, 2, 2, 2, 8 };

    int a;

    for (uint64_t i = 0; i < v.size(); i++) {
        cin >> a;
        cout << v[i] - a << " ";
    }

    cout << endl;

	return 0;
}
