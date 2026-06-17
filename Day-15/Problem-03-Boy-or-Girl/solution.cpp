#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> characters(s.begin(), s.end());

    if (characters.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
