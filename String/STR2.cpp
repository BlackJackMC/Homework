#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main()
{
    string s,tmp=" ";
    vector<string>result;
    int test=0;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        getline(cin, s);
        for(auto &i : s)
        {
            if(static_cast<int>(i)<=57&&static_cast<int>(i)>=48)
            {
                continue;
            }
            else if(static_cast<int>(i)<=90&&static_cast<int>(i)>=65)
            {
                if(tmp!=" ")
                {
                    i=char(static_cast<int>(i)+32);
                }
            }
            else if(static_cast<int>(i)<=122&&static_cast<int>(i)>=97)
            {
                if(tmp==" "||i==s[0])
                {
                    i=char(static_cast<int>(i)-32);
                }
            }
            tmp=i;
        }
        result.push_back(s);
        tmp=" ";
        s.clear();
    }
    for(auto i : result)
    {
        cout<<i<<"\n";
    }
    return 0;
}