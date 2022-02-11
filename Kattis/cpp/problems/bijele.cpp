// https://open.kattis.com/problems/bijele

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v = { 1, 1, 2, 2, 2, 8 };

    // I very much dislike string splitting in C++
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    vector<int> n = {a, b, c, d, e, f};

    for (uint64_t i = 0; i < v.size(); i++) {
        cout << v[i] - n[i] << " ";
    }

    cout << endl;

	return 0;
}
