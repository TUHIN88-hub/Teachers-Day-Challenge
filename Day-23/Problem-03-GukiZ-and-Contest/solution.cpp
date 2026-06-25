#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> rating(n);

    for (int i = 0; i < n; i++) {
        cin >> rating[i];
    }

    for (int i = 0; i < n; i++) {
        int rank = 1;

        for (int j = 0; j < n; j++) {
            if (rating[j] > rating[i]) {
                rank++;
            }
        }

        cout << rank << " ";
    }

    return 0;
}
