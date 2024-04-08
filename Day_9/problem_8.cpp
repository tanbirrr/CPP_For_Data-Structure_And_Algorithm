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
person return_person()
{
    char name[100]="Ajke Mimer mon kharap";
    person tan=person(name,5.10,27);
    return tan;
}
int main()
{
    person tanbir=return_person();
    cout<<tanbir.name<<endl;
    return 0;
}