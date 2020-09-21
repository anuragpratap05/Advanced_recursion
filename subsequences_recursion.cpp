# Advanced_recursion
#include<bits/stdc++.h>
using namespace std;

void subs(string s, string output)
{
    if(s.empty())
    {
        cout<<output<<endl;
        return;
    }
    
    subs(s.substr(1),output);
    subs(s.substr(1),output+s[0]);
}

int main()
{
    string s;
    cin>>s;
    string output="";
    subs(s,output);
}
