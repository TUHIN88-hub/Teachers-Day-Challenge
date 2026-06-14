#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> distinctChars;

    for (char ch : username) {
        distinctChars.insert(ch);
    }

    if (distinctChars.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
