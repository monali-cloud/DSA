#include<iostream>
using namespace std;
int main()
{
    int l,b;
    float area,perimeter;
    cout<<"enter the length and breadth of rectangle :"<<endl;
    cin>>l>>b;
    area=l*b;
    perimeter=2*(l+b);
    cout<<"\nthe area of the rectangle is :"<<area;
    cout<<"\nthe perimeter of the rectangle is :"<<perimeter;

return 0;
}