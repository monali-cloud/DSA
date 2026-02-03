#include<iostream>
using namespace std;

int main()
{
    int a=10, b=20;
    // do a=20, b=10
    //use temp 
    
    int *ptra, *ptrb;
    ptra= &a;
    ptrb= &b;
int temp=*ptra;
*ptra=*ptrb;
*ptrb=temp;
 
cout<<"value of a :"<<a<<endl;
cout<<"value of b :"<<b<<endl;

return 0;

}