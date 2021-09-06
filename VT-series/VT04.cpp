#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> arr;
    int n,x,temp;
    cin>>n>>x;
    for(int i=0;i<n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    if(count(arr.begin(), arr.end(),x))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}