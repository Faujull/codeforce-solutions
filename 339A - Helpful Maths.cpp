#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector <int> num;
    for (int i=0; i<s.size(); i+=2)
    {
        num.push_back(s[i]-'0');//[-'0'] converts the character to its numeric value.
                                //or it stores the ASCII value instead of the integer value.
    }
    sort(num.begin(),num.end());
    for (int i=0; i<num.size(); i++)
    {
        if (i>0)
            cout << "+";
        cout << num[i];
    }
    return 0;
}
