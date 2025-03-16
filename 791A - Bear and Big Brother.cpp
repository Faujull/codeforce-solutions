#include <bits/stdc++.h>
using namespace std;
int main(){
long long x,y,count0=0;
cin >> x >> y;
while (1)
{
    if (x>y)
    break;
    x=x*3;
    y=y*2;
    count0++;
}
cout << count0 << endl;
return 0;
}
