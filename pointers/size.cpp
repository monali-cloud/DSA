#include<iostream>
using namespace std;

int main()
{
    int a=10;
    float b=2.34;
    
    int *ptrint;
    float *ptrfloat;

    sizeof(a);
    sizeof(*ptrint);

    cout<<"sizeof a : "<<sizeof(a);
    cout<<"size of b :"<<sizeof(*ptrfloat)<<endl;
    return 0;

}