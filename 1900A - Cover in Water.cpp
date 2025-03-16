#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
for (int i=0; i<m; i++)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;

        bool x1 = false;
        int countt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '.' && i + 1 < n && a[i + 1] == '.' && i + 2 < n && a[i + 2] == '.')
            {
                x1 = true;
                break;
            }
            if (a[i] == '.')
                countt++;
        }

        if (x1)
            cout << 2 << endl;
        else
            cout << countt << endl;
    }
    return 0;
}
