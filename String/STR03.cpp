#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::getline;
using std::tolower;
auto Count(string s, char c)
{
    auto num=0;
    if(s.length()==1)
    {
        return c==s[0]?1:0;
    }
    else if(s.empty())
    {
        return 0;
    }
    if(s.length()!=0)
    {
        for(auto i: s)
        {
            if(tolower(i)==tolower(c))
            {
                num+=1;
            }
        }
    }
    return num;
}
int main()
{
    string s;
    int test;
    char temp;
    vector<char>test_char;
    vector<int>result;
    getline(cin,s);
    cin>>test;
    while(test--)
    {
        cin>>temp;
        test_char.push_back(temp);
    }
    for(auto i: test_char)
    {
        result.push_back(Count(s,i));
    }
    for(auto i : result)
    {
        cout<<i<<"\n";
    }
    return 0;
}