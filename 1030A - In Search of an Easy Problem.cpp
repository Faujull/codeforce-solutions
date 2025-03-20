#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long>a(n);
    for (long long i=0; i<n; i++)
    {
        cin >> a[i];
    }
    bool x=false;
    for (long long i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            x=true;
            break;
        }
    }
    if(x==true)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}
