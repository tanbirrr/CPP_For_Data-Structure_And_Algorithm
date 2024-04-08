#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    // cin>>s;
    cin.getline(s,100);
    //fgets(s,100,stdin);
    //cout<<s;
    cout<<strlen(s);

    return 0;
}