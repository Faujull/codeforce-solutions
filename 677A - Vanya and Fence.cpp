#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,h;
    cin >> n >> h;
    long long x=0;
    vector<int>a(n);
    for(long long i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(long long i=0; i<n; i++)
    {
        if(a[i]>h)
        {
            x+=2;
        }
        else
        {
            x+=1;
        }
    }
    cout << x << endl;
    return 0;
}
