#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        int a[m];

        for (int j = 0; j < m; j++)
            cin >> a[j];


            if (a[0]==1) {
                    cout<< "YES" << endl;

            }
            else  {
  cout << "NO" << endl;
             }

    }

    return 0;
}
