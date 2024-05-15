#include<iostream>
#include<math.h>
using namespace std;
int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    f=f*i;
    return f;
}
int nCr(int a,int b)
{
    int f;
    f=fact(a)/(fact(a-b)*fact(b));
    return f;
}
void pattern(int a)
{
    for(int i=0;i<=a;i++)
    {
    for(int j=0;j<=i;j++)
    cout<<nCr(i,j);
    cout<<"\n";
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n1;
    cin>>n1;
    pattern(n1);
    return 0;
}