#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        char name[100];
        float height;
        int age;

    person(char *n,float h,int a)
    {
        strcpy(name,n);
        height=h;
        age=a;
    }
};
int main()
{
    char name[100]="Tanbir";
    person* tanbir=new person(name,5.10,27);
    cout<<tanbir->name<<" "<<fixed<<setprecision(2)<<tanbir->height<<" "<<tanbir->age<<"\n";  
    return 0;
}