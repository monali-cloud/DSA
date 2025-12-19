#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"enter the size :";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<"enter the element to search";
    cin>>key;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<"element found at index :"<<i;
            return 0;
        }

    }
    cout<<"element does not found ";

    return 0;

}