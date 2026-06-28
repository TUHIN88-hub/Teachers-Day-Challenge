#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    int len = s.length();

    // Count all lucky numbers with smaller lengths
    for (int i = 1; i < len; i++) {
        ans += (1 << i);
    }

    // Calculate index among numbers of same length
    for (int i = 0; i < len; i++) {
        ans <<= 1;
        if (s[i] == '7')
            ans++;
    }

    cout << ans + 1;

    return 0;
}
