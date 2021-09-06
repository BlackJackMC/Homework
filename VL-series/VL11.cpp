#include <iostream>
#include <math.h>
using namespace std;
bool IsPrime(int n)
{
    if(n<3) return n>1;
    else
    {
        for(int i = 3; i<= sqrt(n); i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
}
int main()
{
    int n;
    do
    {
        cin>>n;
    }
    while(n>pow(10.0,12.0));
    IsPrime(n)?cout<<"YES":cout<<"NO";
    return 0;
}