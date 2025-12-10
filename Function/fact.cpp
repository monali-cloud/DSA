#include<iostream>
using namespace std; 

//function declare

int fact(int n)
{
    int fact =1;

    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}

//function call
int main()
{
    cout<<"the factorial of n number is "<<fact(5)<<endl;
    cout<<"the factorial of n number is "<<fact(10)<<endl;

    return 0;
}