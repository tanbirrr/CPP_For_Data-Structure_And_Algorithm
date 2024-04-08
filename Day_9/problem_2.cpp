//heap
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[4];
    for(int i=0; i<4; i++)
    {
        a[i]=i+1;
    }
    int arx[5];
    int i=0;
    for(; i<5; i++)
    {
        arx[i]=a[i];
    }
    arx[i]=5;
    delete[] a;
  
  
    return 0;
}