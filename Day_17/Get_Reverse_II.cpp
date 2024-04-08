#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    char setction;
    int id;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].setction>>a[i].id;
    }
    int i=0,j=n-1;
    while(i<j)
    {
        swap(a[i].id,a[j].id);
        i++;
        j--;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].setction<<" "<<a[i].id<<endl;
    }
    return 0;
}