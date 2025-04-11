/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n,x,y=1000000000;
        cin >> n;
        vector<long long>a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        bool z=false;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                z=true;
            }
        }
        for(int i=1; i<n; i++)
        {
                x=a[i]-a[i-1];
                y=min(y,x);
        }
        y=(y/2)+1;
        if(z==true)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}
