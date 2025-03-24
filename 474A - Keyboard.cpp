/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string x = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string a, b;
    cin >> a >> b;
    vector<char> k;

    if (a == "L") {
        for (long long j = 0; j < b.size(); j++) {
            for (long long i = 0; i < x.size(); i++) {
                if (b[j] == x[i]) {
                    k.push_back(x[i + 1]);
                }
            }
        }
    } else {  // Left shift
        for (long long j = 0; j < b.size(); j++) {
            for (long long i = 0; i < x.size(); i++) {
                if (b[j] == x[i]) {
                    k.push_back(x[i - 1]);
                }
            }
        }
    }

    for (int i = 0; i < k.size(); i++) {
        cout << k[i];
    }
    return 0;
}
