#include<iostream>
using namespace std;

int main()
{
    int a=10, b=20;
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 =&b;
    
    int sum= *ptr1 + *ptr2;

    cout<<"sum is :"<<sum<<endl;

    return 0;
}