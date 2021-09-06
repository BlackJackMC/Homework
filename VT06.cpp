#include <bits/stdc++.h>
using namespace std;
double average(vector<long long int>vec)
{
    double result = 0;
    int loop = 0;
    for(auto& i : vec)
    {
        if(i%2!=0)
        {
            result += i;
            loop+=1;
        }
    }
    return result/loop;
}
int main()
{
    vector<long long int>vec;
    int n,temp;
    cin>>n;
    for(int i=0;i<n; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    cout<<fixed<<setprecision(4)<<average(vec)<<endl;
    return 0;
}