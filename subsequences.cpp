#include<bits/stdc++.h>
using namespace std;

int subs(string s,string output[])
{
    if(s.empty())
    {
        output[0]="";
        return 1;
    }
    
    string smalstr=s.substr(1);
    int c=subs(smalstr,output);
    for(int i=0;i<c;i++)
    {
        output[c+i]=s[0]+output[i];
    }
    return 2*c;
}

int main()
{
    string s;
    cin>>s;
    string* output=new string[1000];
    int count=subs(s,output);
    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
    
}
