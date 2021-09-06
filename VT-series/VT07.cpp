#include <bits/stdc++.h>
using namespace std;
auto findX(vector<long long int>vec,int x)
{
    vector<int>result;
    for(int i=0;i<10;i++)
    {
        if(vec[i]==x)
        {
            result.push_back(i+1);
        }
    }
    return result;
}
int main()
{
    vector<long long int> vec;
    int x,temp;
    bool check=false;
    for(int i = 0; i <11; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    x=vec[10];
    vec.pop_back();
    for(auto& i:findX(vec,x))
    {
        cout<<i<<" ";
        check=true;
    }
    if(check==false)
    {
        cout<<-1;
    }
    return 0;
}