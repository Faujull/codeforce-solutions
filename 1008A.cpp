#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            sum += val;
        }


        if(sum == n * x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}

