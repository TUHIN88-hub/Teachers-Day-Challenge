#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[8] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    if (cnt[5] || cnt[7]) {
        cout << -1;
        return 0;
    }

    while (cnt[1] && cnt[2] && cnt[4]) {
        cout << "1 2 4\n";
        cnt[1]--;
        cnt[2]--;
        cnt[4]--;
    }

    while (cnt[1] && cnt[2] && cnt[6]) {
        cout << "1 2 6\n";
        cnt[1]--;
        cnt[2]--;
        cnt[6]--;
    }

    while (cnt[1] && cnt[3] && cnt[6]) {
        cout << "1 3 6\n";
        cnt[1]--;
        cnt[3]--;
        cnt[6]--;
    }

    for (int i = 1; i <= 7; i++) {
        if (cnt[i]) {
            cout << -1;
            return 0;
        }
    }

    return 0;
}
