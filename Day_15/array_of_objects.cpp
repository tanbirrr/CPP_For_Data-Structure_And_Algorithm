#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
     string name;
     int roll;
     int marks;
    //  Student(string name,int roll,int marks)
    //  {
    //     this->name=name;
    //     this->roll=roll;
    //     this->marks=marks;
    //  }
    
};
int main()
{
    Student a[3];
    for(int i=0; i<3; i++)
    {
        // cin>>a[i].name
           getline(cin,a[i].name);
           cin>>a[i].roll>>a[i].marks;
           cin.ignore();
           //getchar();    
    }
    for(int i=0; i<3; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}