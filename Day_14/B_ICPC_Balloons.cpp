#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt[26]={0};
        int ballon=0;
        for(int i=0; i<s.size(); i++)
        {
            int val=s[i]-'A';
            if(cnt[val]==0)
            {
                cnt[val]++;
                ballon+=2;
            }
            else
            {
                ballon+=1;
            }
        }
        cout<<ballon<<endl;
    }
    
    return 0;
}