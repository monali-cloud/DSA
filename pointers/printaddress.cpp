#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr;

    ptr= &a;

cout<<"value of num :"<<a<<endl;
cout<<"address of num :"<<&a<<endl;

cout<<"pointer ptr hold address :"<<ptr<<endl;
cout<<"value using pointer :"<<*ptr<<endl;

return 0;
}
