#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);

    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    sort(a.rbegin(),a.rend());
    int sum1=0,count0=0;
    for(int i=0; i<n; i++)
    {
        sum1+=a[i];
        count0++;
        if(sum1 > sum-sum1)
        {
        cout << count0 << endl;
        return 0;
        }
    }
    return 0;
}
