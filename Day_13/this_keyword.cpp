#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string name,int age)
    {
        // (*this).name=name;
        // (*this).age=age;
        this->name=name;
        this->age=age;
    }
    void hello()
    {
        cout<<"hello"<<endl;
    }
};
int main()
{
    person rakib("Rakib Ahsan",27);
    cout<<rakib.name<<" "<<rakib.age<<endl;
    rakib.hello();
    return 0;
}