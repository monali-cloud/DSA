#include<iostream>
using namespace std; 


//function declaration 

int sum(int n)
{
    int sum =0;

    for(int i=1; i<=n ; i++)
    {
        sum+=i;

       
    }
     return sum;
}


//function call
int main()
{
    cout<<"\nthe sum of numbers is :"<<sum(10)<<endl;
    cout<<"\nthe sum of n numbers is :"<<sum(5)<<endl;

    return 0;
}