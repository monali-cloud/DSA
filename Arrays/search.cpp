//algorithm : start 
//enter number of element
//read elements in array
// enter key to find 
//set start =0, end= n-1
//while (start<=end)
//calculate mid =(strt+end)/2
//apply if mid==key
//print element found 
// else  mid<key 
//set low=mid+1
//set high =mid+1
//print element found 
//end 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, key;
     cout<<"enter number of elements in an array : "<<endl;
     cin>>n;

    int arr[n];
    cout<<"enter the array elements: "<<endl;
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<"enter the key element to find : "<<endl;
    cin>>key;

    int start=0, end=n-1;
    int mid;
    bool found =false;

    while(start<=end)
    {
     mid=(start+end)/2;

     if(arr[mid]==key)
     {
        cout<<"element is found at index : "<<mid<<endl;
        found=true;
        break;

     }
     else if(arr[mid]<key){
        start=mid+1;
     }
     else{
        end=mid-1;
     }
    }
    if(!found){
        cout<<"element not found "<<endl;
    }
    return 0;
}