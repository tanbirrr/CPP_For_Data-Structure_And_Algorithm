#include<bits/stdc++.h>
using namespace std;
namespace tanbir
{
    int age=27;
    void hello()
    {
        cout<<"Tanbir namespace"<<endl;
    }
    // class t
    // {

    // };
}
namespace mahin
{
    int age2=22;
    void hello2()
    {
        cout<<"Mahin namespace"<<endl;
    }
    // class t
    // {

    // };
}
using namespace tanbir;
//using namespace mahin;
int main()
{
    // cout<<tanbir::age<<endl;
    // cout<<mahin::age2<<endl;   
       cout<<age<<endl;
       mahin::hello2();
    return 0;
}