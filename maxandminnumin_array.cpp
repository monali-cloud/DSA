#include<iostream>
using namespace std;
int main()
{
    int n;
     
    cout<<"enter the elements of array";
    cin>>n;
    
    int arr[n];
    cout<<"enter "<<n<<"elements"<<endl;
   
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    int largest=arr[0];
    int smallest=arr[0];


    for(int i=1;i<n;i++)
    {
    if (arr[i]>largest)
    {
        largest=arr[i];
    }
    if(arr[i]<smallest)
    {
        smallest=arr[i];

    }
    }
    cout<<"\nlargest number in array "<<largest;
    cout<<"\nsmallest number in array "<<smallest;

    return 0;
}
