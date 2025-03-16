#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,count0=0;
    cin >> n >> m;
    vector<long long>a(n);
    for (long long i=0; i<n; i++)
        cin >> a[i];
    for (long long i=0; i<n; i++)
    {
    if(a[i]>=a[m-1] && a[i] > 0)
    {
        count0++;
    }

    }

    cout << count0 << endl;

return 0;
}
