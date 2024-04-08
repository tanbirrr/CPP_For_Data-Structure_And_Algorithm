#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt[26]={0};
    for(int i=0; i<n; i++)
    {
        char s;
        cin>>s;
        int val=s-'a';
        cnt[val]++;
    }

    for(int i=0; i<26; i++)
    {
        while(cnt[i]!=0)
        {
            cout<<char(i+97);
            cnt[i]--;//cnt[i]=0;
        }
    }
    return 0;
}