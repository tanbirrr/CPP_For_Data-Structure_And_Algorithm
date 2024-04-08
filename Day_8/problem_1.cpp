#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char *n,int r,char s,int mm,int c)
    {
        
        strcpy(name,n);
        roll=r;
        section=s;
        math_marks=mm;
        cls=c;

    }
};
int main()
{   
    char name[100]="Rahim";
    Student*rahim=new Student(name,123,'A',89,7);
    char name2[100]="Karim"; 
    Student *karim=new Student(name2,134,'B',96,7);
    Student *nilo=new Student("Nilo",125,'C',99,7);

    if(rahim->math_marks > karim->math_marks && rahim->math_marks > nilo->math_marks)
    {
        cout<<rahim->name;
    }
    else if(karim->math_marks > rahim->math_marks && karim->math_marks > nilo->math_marks)
    {
        cout<<karim->name;
    }
    else
    {
        cout<<nilo->name;
    }
    return 0;
}