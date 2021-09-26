#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::ios_base;

long long int SpaceCount(string str)
{
    long long int spaceCount = 0;
    for(int i=0; i<str.length()-1; i++)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    long long int count=0;
    getline(cin, s);
    (s[0] != ' ')?cout<<SpaceCount(s)+1:cout<<SpaceCount(s);
    return 0;
}