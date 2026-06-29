#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> p1, p2;

    int k1, k2, x;
    cin >> k1;
    for (int i = 0; i < k1; i++) {
        cin >> x;
        p1.push(x);
    }

    cin >> k2;
    for (int i = 0; i < k2; i++) {
        cin >> x;
        p2.push(x);
    }

    set<pair<queue<int>, queue<int>>> visited;
    int fights = 0;

    while (!p1.empty() && !p2.empty()) {
        if (visited.count({p1, p2})) {
            cout << -1;
            return 0;
        }

        visited.insert({p1, p2});

        int a = p1.front();
        int b = p2.front();

        p1.pop();
        p2.pop();

        if (a > b) {
            p1.push(b);
            p1.push(a);
        } else {
            p2.push(a);
            p2.push(b);
        }

        fights++;
    }

    if (p1.empty())
        cout << fights << " " << 2;
    else
        cout << fights << " " << 1;

    return 0;
}
