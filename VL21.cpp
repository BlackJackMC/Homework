#include <iostream>
using namespace std;
int FindX(int n)
{
    int sum=0;
    int result;
    for(int i=0; i<=n; i++)
    {
        sum+=i;
        if(sum>n)
        {
            result=i;
            break;
        }
    }
    return result-1;
}
int main()
{
    int n;
    do
    {
        cin >> n;
    }
    while(n<5||n>10000000000);
    cout<<FindX(n);
    return 0;
}