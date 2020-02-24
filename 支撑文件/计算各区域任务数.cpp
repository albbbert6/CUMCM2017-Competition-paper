#include<iostream>
#include<stdio.h>
#include<cstring>
struct node
{
    double w1,w2,j1,j2;
}a[40];
struct node1
{
    int one,two,three,four,five;
}b[2000];

using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    double x,W1,W2,J1,J2,y,z;
    for(int i=1;i<=24;i++)
    {
        cin>>x>>W1>>W2>>J1>>J2;
        a[i].w1=W1;
        a[i].w2=W2;
        a[i].j1=J1;
        a[i].j2=J2;
    }
    memset(b,0,sizeof(b));
    int i;
    for(int t=1;t<=1877;t++)
    {
        cin>>x>>y;
        for(i=1;i<=24;i++)
            if(a[i].w1<=x&&a[i].w2>=x && a[i].j1<=y &&a[i].j2>=y)
              {
                  b[i]++;
                  break;
              }
    }
    for(int i=1;i<=24;i++)
       cout<<b[i]<<endl;
    return 0;
}
