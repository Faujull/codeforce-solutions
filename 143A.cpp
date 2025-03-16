#include <bits/stdc++.h>

using namespace std;

int main(){



  int n;

  cin>>n;
  int length =0;

  int arr[n];
 int count0 = 0;
 int i;
while (n--)
   {
       for (int i=0; i<3; i++)
       {
           cin >> arr[i];

       }
            if (arr[0]==1 && arr[1]==1)
            count0++;
            else if (arr[0]==1 && arr[2]==1)
            count0++;
            else if (arr[1]==1 && arr[2]==1)
            count0++;


   }
       cout << count0 << endl;

return 0;
}
