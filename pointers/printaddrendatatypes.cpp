#include<iostream>
using namespace std;

int main()
{
    int a=10;
    float b=2.4;
    char x='w';

    int *ptrint;
    float *ptrfloat;
    char *ptrchar;

    ptrint =&a;
    ptrfloat =&b;
    ptrchar =&x;

    cout<<"int : "<<ptrint<<endl;
    cout<<"float : "<<ptrfloat<<endl;
    cout<<"char : "<<ptrchar<<endl;

    return 0;

}