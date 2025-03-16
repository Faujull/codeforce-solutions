#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x1,x2,x3;
        long long m,n,a;
    cin >> m >> n >> a;

        x1= (m+a-1)/a;
        x2= (n+a-1)/a;

        x3= x1*x2;

        cout << x3 << endl;


return 0;
}
