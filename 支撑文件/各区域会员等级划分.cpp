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
    freopen("input.txt","r",stdin);// input.txt文件见支撑材料
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
        cin>>x>>y>>z;
        for(i=1;i<=24;i++)
            if(a[i].w1<=x&&a[i].w2>=x && a[i].j1<=y &&a[i].j2>=y)
              {
                if(z>20000)
                    b[i].one++;
                else if(z>2000)b[i].two++;
                else if(z>500)b[i].three++;
                else if(z>100)b[i].four++;
                else b[i].five++;

              }
    }
    for(int i=1;i<=24;i++)
        {
            cout<<i<<endl;
            cout<<"    一级会员："<<b[i].one<<endl;
            cout<<"    二级会员："<<b[i].two<<endl;
            cout<<"    三级会员："<<b[i].three<<endl;
            cout<<"    四级会员："<<b[i].four<<endl;
            cout<<"    五级会员："<<b[i].five<<endl;
        }
    return 0;
}
