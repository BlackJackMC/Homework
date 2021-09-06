#include <bits/stdc++.h>
#include <math.h>
using namespace std;
void print(int a,int b)
{
    int state=0;
    if(a==0) 
    {
        a=1;
    }
    for(int i=b-1;i>a;i--)
    {
        if(i%3==0)
        {
            cout<<i<<" ";
            state=1;
        }
    }
    if(state==0)
    {
        cout<<"NOT FOUND";
    }
}
int main()
{
    int a,b;
    do
    {
        cin>>a>>b;
    }
    while(abs(a)>10000&&abs(b)>10000&&a>b);
    print(a,b);
    return 0;
}