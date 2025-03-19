#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upp = 0, low = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            upp++;
        }
        else
            low ++;
    }
    if(upp>low)
    {
        char ch;
        for(int i=0; i<s.size(); i++)
        {
            ch=toupper(s[i]);
            cout << ch;
        }

    }
    else
    {
        char ch;
        for(int i=0; i<s.size(); i++)
        {
            ch=tolower(s[i]);
            cout << ch;
        }
    }
    return 0;
}
