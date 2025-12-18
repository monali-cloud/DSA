#include<iostream>
using namespace std;

int main()
{
   int n,sum=0;
   cout<<"enter the size:"<<endl;
   cin>>n;

   int arr[n];
    cout<<"enter the elements ";
   for(int i=0; i<n; i++)
  
   cin>>arr[i];

   for(int i=0; i<n; i++)
   sum +=arr[i];

   cout<<"sum :"<<sum;

   return 0;

}