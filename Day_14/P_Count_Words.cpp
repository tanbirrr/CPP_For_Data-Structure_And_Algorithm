#include<bits/stdc++.h>
using namespace std;
int main()
{
    //1
    //  string s;
    // getline(cin,s);
    // int count=1;
    // for(int i=1; i<s.size()-1; i++)
    // {
    //     if(! isalpha(s[i]) && isalpha(s[i+1])) count++;
    // }
    // cout<<count;
    
    //2
    string s;
    getline(cin,s);
    bool inside_word=false;
    int count=0;
    for(char c:s)
    {
        if(isalpha(c))
        {
            if(inside_word==false) count++;
            inside_word=true;
        }
        else
        {
            inside_word=false;
        }
    }
    cout<<count<<endl;
    return 0;
}