#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr, **ptr1;

    ptr= &a;
    ptr1= &ptr;

    cout<<"value of num : "<<a<<endl;
    cout<<"pointer addres of a :"<<ptr<<endl;
    cout<<"value of *ptr : "<<*ptr<<endl;
    cout<<"value using **ptr1 : "<<**ptr1<<endl;

    return 0;

}