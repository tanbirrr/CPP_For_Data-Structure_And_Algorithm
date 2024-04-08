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
    
    Student mx;
    mx.marks=INT_MIN;
    for(int i=0; i<3; i++)
    {
        if(a[i].marks>mx.marks)
        {
            mx=a[i];
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

    Student mn;
    mn.marks=INT_MAX;
    for(int i=0; i<3; i++)
    {
        if(a[i].marks<mn.marks)
        {
            mn=a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;;
    return 0;
}