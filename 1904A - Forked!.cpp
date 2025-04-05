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
        long long a,b,kx,ky,qx,qy;
        cin >> a >> b >> kx >> ky >> qx >> qy;
        set<pair<long long,long long>> kingmoves,queenmoves;

        kingmoves.insert({kx+a,ky+b});
        kingmoves.insert({kx-a,ky+b});
        kingmoves.insert({kx+a,ky-b});
        kingmoves.insert({kx-a,ky-b});
        kingmoves.insert({kx+b,ky+a});
        kingmoves.insert({kx-b,ky+a});
        kingmoves.insert({kx+b,ky-a});
        kingmoves.insert({kx-b,ky-a});

        queenmoves.insert({qx+a,qy+b});
        queenmoves.insert({qx-a,qy+b});
        queenmoves.insert({qx+a,qy-b});
        queenmoves.insert({qx-a,qy-b});
        queenmoves.insert({qx+b,qy+a});
        queenmoves.insert({qx-b,qy+a});
        queenmoves.insert({qx+b,qy-a});
        queenmoves.insert({qx-b,qy-a});

        long long count =0;
        for(auto position : kingmoves)
        {
            if(queenmoves.count(position))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
