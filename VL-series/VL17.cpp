#include <iostream>
#include <math.h>
using namespace std;
int count(int a)
{
    int amount = 0;
    for(int i = 1; i <=a; i++)
    {
        if(a%i==0) 
        {
            amount++;
        }
    }
    return amount;
}
int main()
{
    int a;
    do
    {
        cin>>a;
    }
    while(abs(a)>1000);
    cout<<count(abs(a));
}