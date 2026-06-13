#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aoyeui";
    string result = "";

    for (char ch : s) {
        ch = tolower(ch);

        if (vowels.find(ch) == string::npos) {
            result += '.';
            result += ch;
        }
    }

    cout << result << endl;
    return 0;
}
