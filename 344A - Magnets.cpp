//faujul
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x=0;
    cin >> n;
    long long a[n];
    for(long long i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(long long i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
        {
            x++;
        }
    }
    cout << x << endl;

    return 0;
}
