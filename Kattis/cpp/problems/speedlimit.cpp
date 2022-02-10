// https://open.kattis.com/problems/speedlimit

#include <iostream>

using namespace std;

int main(void) {
    int lines, d, h;

    while (true) {
        cin >> lines;

        if (lines == -1) {
            break;
        }

        int miles = 0;
        int current = 0;

        for (int i = 0; i < lines; i++) {
            cin >> d >> h;

            miles += d * (h - current);

            current = h;
        }

        cout << miles << " miles" << endl;
    }

	return 0;
}
