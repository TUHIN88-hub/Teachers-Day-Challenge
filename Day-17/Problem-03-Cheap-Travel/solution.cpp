#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int option1 = n * a;

    int option2 = (n / m) * b + min((n % m) * a, b);

    int option3 = ((n + m - 1) / m) * b;

    int answer = min(option1, min(option2, option3));

    cout << answer;

    return 0;
}
