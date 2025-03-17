#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long odd_count = (n + 1) / 2;

    if (m <= odd_count) {
        cout << (2 * m - 1) << endl;
    } else {
        cout << (2 * (m - odd_count)) << endl;
    }

    return 0;
}
