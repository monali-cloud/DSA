#include<iostream>
using namespace std;

int main()
{
    int n, sum=0,average=0;
    cout<<"enter the size of array :";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++)
    sum += arr[i];
    average=sum/n;

    cout<<"the average of array elements is :"<<sum<<endl;
    cout<<"the average of array elements is :"<<average<<endl;

    return 0;


}