#include <iostream>
using namespace std;

bool isSquare(int l, int r, int d, int u) {
    if (l != r || d != u) return false;
    return (l == d);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        cout << (isSquare(l, r, d, u) ? "Yes" : "No") << "\n";
    }
    return 0;
}
