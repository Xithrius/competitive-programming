// https://open.kattis.com/problems/isithalloween

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string a;
    getline(cin, a);

    if (a == "OCT 31" || a == "DEC 25") {
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }

	return 0;
}
