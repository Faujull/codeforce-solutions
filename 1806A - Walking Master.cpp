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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sx,sy,dx,dy;
        cin >> sx >> sy >> dx >> dy;
        if(dy<sy)
        {
            cout << -1 << endl;
            continue;
        }
        int move = dy-sy;
        sx+=move;
        if(sx<dx)
        {
            cout << -1 << endl;
            continue;
        }
        move += sx-dx;
        cout << move << endl;
    }
    return 0;
}

