#include <bits/stdc++.h>
using namespace std;
bool IsPrime(long long int n)
{
    if(n<3)
    {
        return n>1;
    }
    else
    {
        for(int i = 2; i*i < n; i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    vector<int>vec;
    vector<int>out;
    int n,temp;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for(auto& n:vec)
    {
        if(IsPrime(n)&&!(count(out.begin(),out.end(),n)))
        {
            out.push_back(n);
        }
    }
    for(auto& num: out)
    {
        cout<<num<<" ";
    }
    return 0;
}