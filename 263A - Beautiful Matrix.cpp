#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x,y;
    int a[5][5];
    for (long long i=0; i<5; i++)
    {
        for (long long j=0; j<5; j++)
        {
            cin >> a[i][j];
        }
    }
        for (long long i=0; i<5; i++)
    {
        for (long long j=0; j<5; j++)
        {
            if (a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    long long d,b,c;
    d=2-x;
    b=2-y;
    c= abs(d)+abs(b);
    cout << c <<endl;

return 0;
}
