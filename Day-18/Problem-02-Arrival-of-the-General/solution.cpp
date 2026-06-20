#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    int maxHeight = 0, minHeight = 101;
    int maxPos = 0, minPos = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        // First occurrence of maximum height
        if (a[i] > maxHeight) {
            maxHeight = a[i];
            maxPos = i;
        }

        // Last occurrence of minimum height
        if (a[i] <= minHeight) {
            minHeight = a[i];
            minPos = i;
        }
    }

    int moves = maxPos + (n - 1 - minPos);

    // If maximum soldier crosses minimum soldier
    if (maxPos > minPos) {
        moves--;
    }

    cout << moves;

    return 0;
}
