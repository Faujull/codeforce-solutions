#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x=0;
    string s;
    cin >> s;
    set<char>new_ch(s.begin(),s.end());
    if (new_ch.size()%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}
