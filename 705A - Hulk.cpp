/*
███████╗░█████╗░██╗░░░██╗░░░░░██╗██╗░░░██╗██╗░░░░░
██╔════╝██╔══██╗██║░░░██║░░░░░██║██║░░░██║██║░░░░░
█████╗░░███████║██║░░░██║░░░░░██║██║░░░██║██║░░░░░
██╔══╝░░██╔══██║██║░░░██║██╗░░██║██║░░░██║██║░░░░░
██║░░░░░██║░░██║╚██████╔╝╚█████╔╝╚██████╔╝███████╗
╚═╝░░░░░╚═╝░░╚═╝░╚═════╝░░╚════╝░░╚═════╝░╚══════╝
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n==1)
    {
        cout << "I hate it" << endl;
        return 0;
    }
    vector<string>x;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            x.push_back("I hate");
        }
        else
        {
            x.push_back("I love");
        }
        if(i<n-1)
        x.push_back(" that ");
    }
    x.push_back(" it");
    for(int i=0; i<x.size(); i++)
    {
    cout << x[i];
    }
    return 0;
}

