# Advanced_recursion
#include<bits/stdc++.h>
using namespace std;


string getstring(int n)
{
    if(n==2)
    {
        return "abc";
    }
    if(n==3)
    {
        return "def";
    }
    if(n==4)
    {
        return "ghi";
    }
    if(n==5)
    {
        return "jkl";
    }
    if(n==6)
    {
        return "mno";
    }
    if(n==7)
    {
        return "pqrs";
    }
    if(n==8)
    {
        return "tuv";
    }
    if(n==9)
    {
        return "wxyz";
    }
    return "";
}

int subs(int n, string output[])
{
    if(n==0)
    {
        output[0]="";
        return 1;
    }
    
    int last_digit=n%10;
    int smal_no=n/10;
    int smalsize=subs(smal_no,output);
    string x=getstring(last_digit);
    for(int i=0;i<x.size()-1;i++)
    {
        for(int j=0;j<smalsize;j++)
        {
            output[j+(i+1)*smalsize]=output[j];
        }
    }
    int k=0;
    for(int i=0;i<x.size();i++)
    {
        for(int j=0;j<smalsize;j++)
        {
            output[k]=output[k]+x[i];
            k++;
        }
    }
    return smalsize*x.size();
}

int main()
{
    int n;
    cin>>n;
    string output[1000];
    int c=subs(n,output);
    for(int i=0;i<c;i++)
    {
        cout<<output[i]<<" ";
    }
    
}
