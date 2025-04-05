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
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        bool x=false;
        vector <long long> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=1; i<n; i++)
        {
            if(a[i]!=a[i-1])
            {
                x=true;
                break;
            }
        }
        if(x==true)
        {
            cout << "YES" << endl;
            sort(a.rbegin(),a.rend());
            cout << a[n-1] << " ";
            for(int i=0; i<n-1; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
