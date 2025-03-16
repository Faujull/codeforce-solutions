#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int a[m];
for (int i=0; i<m; i++)
    cin >> a[i];

    int minimum = INT_MAX;
    for (int i=0; i<m; i++)

            minimum = min( minimum, abs(a[i]));

        cout << minimum << endl;
return 0;
}
