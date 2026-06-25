#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<string> photobooks;

    for (int i = 0; i <= s.length(); i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            string temp = s;
            temp.insert(temp.begin() + i, c);
            photobooks.insert(temp);
        }
    }

    cout << photobooks.size() << endl;

    return 0;
}
