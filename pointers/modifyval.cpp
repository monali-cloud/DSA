#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr;

    ptr =&a;

    *ptr =20;

    cout<<"updated value of a: "<<a<<endl;

    return 0;
}