#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while (t--)
{
    int n;
    cin >> n;
    int a[n];
    for ( int i=0; i<n-1; i++)
    {
        cin >> a[i];
    }
    int sum=0;
    for ( int i=0; i<n-1; i++)
    {
    sum+=a[i];
    }

        cout << -1*sum <<endl;


}
    return 0;
}
