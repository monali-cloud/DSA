#include<iostream>
using namespace std;

int main()
{
    int num=10;
    int *ptr =NULL;
    if(ptr==NULL)
    {
        cout<<" pointer is null :"<<endl;
    }
    else
    {
      cout<<"value using pointer :"<<*ptr<<endl;
    }

    ptr =&num;

    if(ptr!=NULL){
        cout<<"POINTER IS NOT NULL :"<<endl;
        cout<<"value uisng pointer :"<<*ptr<<endl;
    }

    return 0;
}