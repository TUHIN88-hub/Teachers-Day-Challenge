#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = k * w * (w + 1) / 2;

    if (totalCost > n)
        cout << totalCost - n;
    else
        cout << 0;

    return 0;
}
