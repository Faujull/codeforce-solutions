#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while (t--)
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for ( int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    bool x=false;
    for ( int i=0; i<n; i++)
    {
    if (a[i]==k)
    {
    x=true;
    break;
    }
    }
    if (x==true)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
    return 0;
}
