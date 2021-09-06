#include <iostream>
using namespace std;
int max(int arr[],int n)
{
    int max=arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=i;
        }
    }
    return max;
}
int main()
{
    int arr[10000000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<max(arr,n)<<endl;
    return 0;
}