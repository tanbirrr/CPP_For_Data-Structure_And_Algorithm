#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    if(s>='0' && s<='9')cout<<"IS DIGIT"<<endl;
    else if(s>='A' && s<='Z')cout<<"ALPHA\n"<<"IS CAPITAL"<<endl;
    else cout<<"ALPHA\n"<<"IS SMALL\n";
    return 0;
}