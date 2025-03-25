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
    long long t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        long long ans=1,c=1;

        for(int i = 0; i < n-1; i++)
        {
            if(abs(a[i] - a[i+1]) <= k)
            {
                c++;
            }
            else
            {
                ans=max(ans,c);
                c=1;
            }
        }
        ans=max(ans,c);
        cout << n-ans << endl;
    }
    return 0;
}
