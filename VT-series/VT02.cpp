#include <bits/stdc++.h>
using namespace std;
auto NextMax(vector<int>arr)
{
    if ( adjacent_find( arr.begin(), arr.end(), not_equal_to<>() ) == arr.end() )
    {
        return -1;
    }
    else
    {
        int max = arr[0];
        for(auto& i : arr)
        {
            if(i>max) max = i;
        }
        while(count(arr.begin(), arr.end(), max))
        {
            if(max==arr[arr.size()-1])
            {
                arr.pop_back();
            }
            else if(max==arr[0])
            {
                arr.erase(arr.begin());
            }
            else
            {
                for(int i=0;i<arr.size();i++)
                {
                    if(arr[i]==max)
                    {
                        arr.erase(arr.begin()+i-1);
                    }
                }
            }
        }
        max=arr[0];
        for(auto& i : arr)
        {
            if(i>arr[0]) max = i;
        }
        return max;
    }
}
int main()
{
    vector<int> arr;
    int n;
    int temp;
    int result;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    result=NextMax(arr);
    if(result==-1)
    {
        cout<<"NOT FOUND";
    }
    else
    {
        cout<<result;
    }
    return 0;
}