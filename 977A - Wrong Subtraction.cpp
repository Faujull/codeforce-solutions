#include <bits/stdc++.h>

using namespace std;

int main(){
    long long m,n;
    cin >> m >> n;
    while (n--)
    {
        if(m%10!=0)
        {
            m=m-1;
        }
        else
            m=m/10;
    }
    cout << m << endl;
return 0;
}
