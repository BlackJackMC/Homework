#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::vector;
int SpaceCount(string str)
{
    int spaceCount = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' '&& str[i+1] != ' ')
        {
            spaceCount+=1;
        }
    }
    return spaceCount;
}
int main()
{
    string s="";
    int test = 0;
    vector<int>result;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        getline(cin,s);
        result.push_back(SpaceCount(s));
        s.clear();
    }
    for(auto& i:result)
    {
        cout<<i<<"\n";
    }
}