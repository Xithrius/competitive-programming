// https://open.kattis.com/problems/hissingmicrophone

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string a;

    getline(cin, a);

    for (uint64_t i = 0; i < a.length() - 1; i++) {
        if (a.substr(i, 2) == "ss") {
            cout << "hiss" << endl;
            return 0;
        }
    }

    cout << "no hiss" << endl;

	return 0;
}
