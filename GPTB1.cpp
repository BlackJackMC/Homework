#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f;
    double x,y;
    cin>>a>>b>>c>>d>>e>>f;
    if(a/d!=b/e)
    {
        x=(c*e-b*f)/(a*e-b*d);
        y=(a*f-c*d)/(a*e-b*d);
        if(y==-0.00)
        {
            y=0.00;
        }
        cout<<fixed<<setprecision(2)<<x<<" "<<fixed<<setprecision(2)<<y<<endl;
    }
    else
    {
        if(b/e!=c/f)
        {
            cout<<"VONGHIEM";
        }
        else
        {
            cout<<"VOSONGHIEM";
        }
    }
    return 0;
}