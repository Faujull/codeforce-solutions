#include <iostream>
#include <vector>
using namespace std;

int finalele (vector<int>& a, int n) {
    long long sum = 0;
    for (int num : a) {
        sum += num;
    }
    return sum - (n - 1);
}

int main() {


    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << finalele (a, n) << "\n";
    }
    return 0;
}
