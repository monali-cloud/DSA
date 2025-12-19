#include<iostream>
using namespace std;

int main()
{
    int n, positive=0, negative=0,zero=0;
    cout<<"enter size";
    cin>>n;

    int arr[n];
    for(int i=0; i<n ; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        positive++;
        else if(arr[i]<0)
        negative++;
        else
        zero++;
    }

    cout<<"\npositive : "<<positive;
    cout<<"\nnegative :  "<<negative;
    cout<<"\nZero : "<<zero;

    return 0;
}