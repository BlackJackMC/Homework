#include <bits/stdc++.h>
using namespace std;
auto change(vector<int> &vec,int n)
{
    for(int i = 0; i <n; i++)
    {
        if(i%2!=0)
        {
            if(i==0)
            {
                vec[i] +=vec[i+1];
            }
            else if(i==n-1)
            {
                vec[i] +=vec[i-1];
            }
            else
            {
                vec[i] +=abs(vec[i+1]-vec[i-1]);
            }
        }
    }
}
int main()
{
    vector<int>vec;
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    change(vec,n);
    for(auto& i:vec)
    {
        cout<<i<<" ";
    }
    return 0;
}