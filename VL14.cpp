#include <iostream>
#include <math.h>
using namespace std;
int GCD(int a,int b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}
int main()
{
    int a,b;
    do
    {
        cin>>a>>b;
        while(true)
        {
            if(a==0&&b==0)
            {
                cin>>a>>b;
            }
            else
            {
                break;
            }
        }
    }
    while(abs(a)>1000&&abs(b)>1000);
    cout<<GCD(abs(a),abs(b));
}