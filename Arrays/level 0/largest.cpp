#include<iostream>
using namespace std;

int main()
{
    int nums[]={23,56,21,-9,78,98};
    int size=6;

    int largest=INT_MIN;
    for(int i=0; i<size; i++)
    {
        largest=max(nums[i],largest);
    }
   cout<<"the largest in array is "<<largest<<endl;
   return 0;

}
