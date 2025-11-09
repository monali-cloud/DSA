#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age of the personn :"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"\nthe person is eligible to vote :";

    }
    else
    {
        cout<<"\n the person is not eligible to vote :";
    }
    return 0;
}