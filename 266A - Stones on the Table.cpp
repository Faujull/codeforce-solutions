#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long count0=0;
    string a;
    cin >> a;
    for (long long i=0; i<n; i++)
    {
        if (a[i]==a[i+1])
            count0++;
    }
    cout << count0 << endl;
return 0;
}
