#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         //1
        // string s;
        // cin>>s;
        // int sum_first=s[0]-'48'+s[1]-'48'+s[2]-'48';
        // int sum_last=s[3]-'48'+s[4]-'48'+s[5]-'48';

        // if(sum_first==sum_last)cout<<"YES";
        // else cout<<"NO";
        // cout<<endl;
        
        //2
        string s;
        cin>>s;
        int first=0;
        int last=0;
        for(int i=0; i<3; i++)
        {
            first+=s[i]-'0';
        }
        for(int i=3; i<s.size(); i++)
        {
            last+=s[i]-'0';
        }
        if(first==last)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}