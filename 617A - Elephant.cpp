#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,k;
    cin >> m;
    if(m%5==0)
    {
        cout << m/5 << endl;
    }
    else
    {
    k=1+m/5;
    cout << k << endl;
    }
    return 0;
}
