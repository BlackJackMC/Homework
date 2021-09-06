#include <bits/stdc++.h>
using namespace std;
int countX(vector<long long int>vec,int n,int x)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]==x)
        {
            sum+=1;
        }
    }
    return sum;
}
int main()
{
    vector<long long int> vec;
    int n,x,temp;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    cout<<countX(vec,n,x)<<endl;
    return 0;
}