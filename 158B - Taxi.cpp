/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,one=0,two=0,three=0,four=0, total=0;
    cin >> n;
    vector < long long > a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==4)
        {
            four++;
            total++;
        }
        else if(a[i]==3)
        {
            three++;
        }
        else if(a[i]==2)
        {
            two++;
        }
        else if(a[i]==1)
        {
            one++;
        }
    }
    int min3_1=min(three,one);
    total+=three;
    one-=min3_1;
    total += two/2;
    if(two%2==1)
    {
        total+=1;
        one -= min(one,(long long)2);
    }
    if(one>0)
    {
        total+=(one+3)/4;
    }
    cout << total << endl;
    return 0;
}
