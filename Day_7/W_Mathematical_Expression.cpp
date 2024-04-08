#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    
    int sum=a+b;
    int multi=a*b;
    int sub=a-b;
    if(s=='+')
    {
        (sum==c)? cout<<"Yes":cout<<sum;
    }
    else if(s=='-')
    {
        (sub==c)? cout<<"Yes":cout<<sub;
    }
    else
    {
        (multi==c)? cout<<"Yes":cout<<multi;
    }
    return 0;
}