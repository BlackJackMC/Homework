#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string s;
    getline(cin, s);
    for(auto &i: s)
    {
        if(static_cast<int>(i)<=90&&static_cast<int>(i)>=65)
        {
            i=char(static_cast<int>(i)+32);
        }
    }
    cout<<s<<"\n";
    return 0;
}