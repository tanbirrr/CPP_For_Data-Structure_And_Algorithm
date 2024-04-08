#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mn=INT_MAX;
    int mx=INT_MIN;
    int x;
    for(int i=1; i<=3; i++)
    {
        cin>>x;
        mn=min(x,mn);
        mx=max(x,mx);
    }
    cout<<mn<<" "<<mx;
    return 0;
}