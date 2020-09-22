# Advanced_recursion
#include <iostream>
#include <string>
//#include "solution.h"
using namespace std;

string getstr(int n)
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


void subs(int n, string output)
{
    if(n==0)
    {
        cout<<output<<endl;
        return;
    }
    
    int last=n%10;
    int smalno=n/10;
    string x=getstr(last);
    //subs(last,output)
    //subs(smalno,output);
    //subs(smalno,output+x[0]);
    for(int i=0;i<x.size();i++)
    {
        //subs(smalno,output);
        subs(smalno,x[i]+output);
    }
}

void printKeypad(int n)
{
    string output="";
    subs(n,output);
}

/*int main(){
    int num;
    cin >> num;

    //string output="";
    printKeypad(num);
    
}*/
