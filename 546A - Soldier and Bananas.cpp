#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w,sum=0;
    cin >> k >> n >> w;
    for(int i=0; i<=w; i++)
    {
        sum+=i*k;
    }
    if(sum<=n){
        cout << 0 << endl;
    }
    else
    cout << sum-n <<endl;
    return 0;
}
