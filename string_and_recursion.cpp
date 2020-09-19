#include<bits/stdc++.h>
using namespace std;


void rmv(char s[])
{
    if(s[0]=='\0')
    {
        return;
    }
    
    if(s[0]!='x')
    {
        rmv(s+1);
    }
    else
    {
        int i=1;
        for(;s[i]!='\0';i++)
        {
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        rmv(s);
    }
    
}

int length(char s[])
{
    if(s[0]=='\0')
    {
        return 0;
    }
    
    int smalans=length(s+1);
    int ans=1+smalans;
    return ans;
}

int main()
{
    char s[100];
    cin>>s;
    int m=length(s);
    cout<<s<<endl;
    cout<<m<<endl;
    rmv(s);
    cout<<s<<endl;
    m=length(s);
    cout<<m<<endl;
}
