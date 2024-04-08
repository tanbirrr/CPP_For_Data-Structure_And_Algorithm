#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    int cnt=0;
    getline(cin,s);
    cin>>x;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        if(word==x) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}