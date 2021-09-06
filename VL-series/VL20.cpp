#include <bits/stdc++.h>
#include <string>
using namespace std;
void PrintLetterInRange(int a, int b)
{
    for(int i = a; i <= b; i++)
    {
        cout<<static_cast<char>(toupper(static_cast<char>(i)))<<" ";
    }
}
int main()
{
    char a,b;
    cin>>a>>b;
    PrintLetterInRange(int(a),int(b));
    return 0;
}