#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isprime=true;

    cout<<"enter the number :"<<endl;
    cin>>n;

    if(n<=1){
     isprime=false;
    }
    else{
    for(int i=2; i*i<=n;i++)
     {
        if(n%i==0)
        {
        isprime=false;
        break;
         } }
    }
   if (isprime)
   
     cout<<"it is a prime :"<<endl;
   
   else
   
    cout<<"it is not prime :"<<endl;
   
    return 0;
}