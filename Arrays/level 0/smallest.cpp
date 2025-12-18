#include<iostream>
using namespace std;

int main()
{
    int nums[]={1,34,65,-98,56,87,-8};
    int size=7;

    int smallest =INT_MAX;

    for(int i=0; i<size; i++)
    {
     if(nums[i]<smallest)
    { smallest=nums[i];
    }
      }
    cout<<"smallest number in an array is :"<<smallest<<endl;
    return 0;
}
