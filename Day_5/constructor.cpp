#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  char name[100];
  int roll;
  int cls;
  char section;

  Student(int r,char s,int c,char n[])
  {
    roll=r;
    section=s;
    cls=c;
    strcpy(name,n);
  }
};
int main()
{
    Student rahim(29,'A',7,"Cristiano Ronaldo");
    Student karim(55,'D',7,"Toni kroos");

    cout<<karim.roll<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.name<<endl;
    return 0;
}