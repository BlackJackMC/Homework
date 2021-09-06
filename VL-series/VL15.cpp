#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int a,b,temp;
    double result;
    cin>>a>>b;
    while(abs(a)<=1000&&abs(b)<=1000)
    {
        if(b==0) 
        {
            cout<<"INVALID";
            return 1;
        }
        else
        {
            temp=a;
            a=a/gcd(a,b);
            b=b/gcd(temp,b);
            result=static_cast<double>(a)/static_cast<double>(b);
            if(rint(result)==result) cout<<a/b;
            else cout<<a<<" "<<b;
            return 0;
        }
    }
}