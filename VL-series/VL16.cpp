#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return abs(a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    do
    {
        cin>>a>>b;
    }
    while(a*b==0&&a>1000&&b>1000);
    cout<<lcm(abs(a),abs(b))<<endl;
    return 0;
}