#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    float height;
    int age;

    person(int h,int a)
    {
        height=h;
        age=a;
    }
};
int main()
{
    person *tanbir=new person(5.10,26);  
    return 0;
}