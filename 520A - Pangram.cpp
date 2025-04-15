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
    long long n;
    cin >> n;
    string x;
    cin >> x;

    transform(x.begin(), x.end(), x.begin(), ::tolower);

    set<char> letters;
    for (int i=0; i<n; i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            letters.insert(x[i]);
        }
    }
    if (letters.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
