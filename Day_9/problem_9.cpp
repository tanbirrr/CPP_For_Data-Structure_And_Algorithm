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
    char name[100]="tan";
    char name1[100]="bir";
    person *tan=new person(name,5.3,28);
    person *bir=new person(name1,5.7,27);

    (tan->age > bir->age)? cout<<tan->age: cout<<bir->name;

    return 0;
}