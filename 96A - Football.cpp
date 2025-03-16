#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    long long count0 = 1, max_count = 1;

    for (size_t i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1]) {
            count0++;
            max_count = max(max_count, count0);
        } else {
            count0 = 1;
        }
    }

    if (max_count >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
