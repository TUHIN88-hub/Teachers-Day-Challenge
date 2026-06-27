#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int lastChild = 1;
    int maxRounds = 0;

    for (int i = 1; i <= n; i++) {
        int candies;
        cin >> candies;

        int rounds = (candies + m - 1) / m;

        if (rounds >= maxRounds) {
            maxRounds = rounds;
            lastChild = i;
        }
    }

    cout << lastChild;

    return 0;
}
