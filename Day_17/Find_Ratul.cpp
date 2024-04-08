#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string x="Ratul";
    stringstream ss(s);
    string word;
    int flag=0;
    while(ss>>word)
    {
        if(word==x)flag=1;
    }
    if(flag==1)cout<<"YES";
    else cout<<"NO";
    return 0;
}