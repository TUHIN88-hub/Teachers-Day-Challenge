#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    char current = 'a';
    int moves = 0;

    for (char ch : s) {
        int clockwise = abs(ch - current);
        int counterClockwise = 26 - clockwise;

        moves += min(clockwise, counterClockwise);
        current = ch;
    }

    cout << moves;

    return 0;
}
