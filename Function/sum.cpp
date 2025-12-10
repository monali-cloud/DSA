#include<iostream>
using namespace std; 

//function declation (functiontype functionname )  with parameters

int sum(int a, int b)
{
   int  sum =a+b;
   return sum;
}

// minimum of two numbers 

int min_of_two_numbers(int a, int b) // and a and b are called parameters 
{
    if(a<b)
    {
      return a;
    }
    else
    {

    return b;
    }
}

//function call
int main()
{
    cout<<"\nsum is "<<sum(10,5)<<endl; // numbers are called arguments 
    cout<<"\nsum is "<<sum(10,5)<<endl;
    cout<<"\nsum is "<<sum(10,5)<<endl;
    
    cout<<"\nmin ="<<min_of_two_numbers(1,5)<<endl;
    cout<<"\nmin ="<<min_of_two_numbers(1,5)<<endl;
    cout<<"\nmin ="<<min_of_two_numbers(1,5)<<endl;
    cout<<"\nmin ="<<min_of_two_numbers(1,5)<<endl;
    return 0; 
}