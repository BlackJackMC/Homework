#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    string s;
    while(getline(cin, s))
    {
        if(s[0]!=s[s.length()-1])
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        s.clear();
    }
    return 0;
}