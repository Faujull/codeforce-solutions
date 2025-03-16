#include <iostream>
using namespace std;

bool is_power_of_two(int n) {
    return (n & (n - 1)) == 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        if (is_power_of_two(x) || is_power_of_two(x + 1)) {
            cout << "-1\n";
            continue;
        }

        int p = 1;
        while (p * 2 < x) {
            p *= 2;
        }

        int y = p - 1;
        cout << y << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
