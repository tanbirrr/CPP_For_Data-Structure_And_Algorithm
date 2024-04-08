#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World Hello world";
    // int t=s.find("Hello");
    //cout<<t<<endl;
    // s.replace(t,5,"$");
    // cout<<s<<endl;
    while(s.find("Hello")!= -1)
    {
        s.replace(s.find("Hello"),5,"%");
    }
    cout<<s<<endl;

    return 0;
}