#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long a=0,d=0;
    for(long long i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else
            d++;
    }
    if(a==d)
    {
        cout << "Friendship" << endl;
    }
    else if (a>d)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
    return 0;
}
