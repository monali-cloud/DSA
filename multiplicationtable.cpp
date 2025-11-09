#include<iostream>
using namespace std;
int main()
{
    int a,i;
   
    cout<<"enter the number whose table needs to be displayed :"<<endl;
    cin>>a;
    for(i=1;i<=10;i++)
    {
    cout<<a<<"x"<<i<<"="<<a*i<<endl;
    }
    
    return 0;
}