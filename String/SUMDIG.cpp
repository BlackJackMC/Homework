#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::to_string;
using std::vector;

int main()
{
    string s;
    int test;
    long long int temp=0;
    vector<string>result;

    cin>>test;
    cin.ignore();
    while (test--)
    {
        cin>>s;
        for(auto i: s)
        {
            temp+=static_cast<int>(i)-48;
        }
        result.push_back(to_string(temp));
        s.clear();
        temp=0;
    }
    for(auto i: result)
    {
        cout<<i<<"\n";
    }    
    return 0;
}