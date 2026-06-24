#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int washes = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            // Type 1 dish: must use bowl
            if (m > 0) {
                m--;
            } else {
                washes++;
            }
        } else {
            // Type 2 dish
            if (k > 0 && m < k) {
                k--;
            } else if (m > 0) {
                m--;
            } else if (k > 0) {
                k--;
            } else {
                washes++;
            }
        }
    }

    cout << washes << endl;

    return 0;
}
