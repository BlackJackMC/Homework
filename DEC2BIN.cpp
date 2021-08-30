#include <bits/stdc++.h>
using namespace std;
string bin(unsigned long long int n)
{
    string result;
    while(n>0)
    {
        result=result+char(n%2+48);
        n=n/2;
    }
    reverse(result.begin(),result.end());
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long int n[100000];
    long long int test;
    do
    {
        cin>>test;
    }
    while(test>1000000);
    for(int i=0;i<test;i++)
    {
        do
        {
            n[i]=0;
            cin>>n[i];
        }
        while(n[i]>1000000000000000000);
    }
    for(int i=0;i<test;i++)
    {
        cout<<bin(n[i])<<"\n";
    }
    return 0;
}