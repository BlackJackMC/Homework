#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    reverse(n.begin(),n.end());
    while(n[0]=='0')
    {
        n.erase(0,1);
    }
    cout<<n;
    return 0;
}