#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,next_term;
    cout<<"enter the number ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
    cout<<a<<" ";
    next_term=a+b;
    a=b;
    b=next_term;}
    return 0;
}