/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/
#include<bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        long long ans = 0;
        for (int i = 1; i < n; i++)
            ans = max (ans, a[n - 1] - a[i]);
        for (int i = 0; i < n - 1; i++)
            ans = max (ans, a[i + 1] - a[0]);
        for (int i = 0; i < n - 1; i++)
            ans = max (ans, a[i] - a[i + 1]);
        cout << ans << endl;
    }
    return 0;
}
