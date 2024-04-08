#include<bits/stdc++.h>
using namespace std;
class car
{
  public:
  int windows;
  int speed;
  car(int w,int s)
  {
    windows=w;
    speed=s;
  }
};
int main()
{
    car lembo(4,2000);

    cout<<lembo.windows;
    return 0;
}