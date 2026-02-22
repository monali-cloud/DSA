#include<iostream>
#include<vector>
using namespace std;
 
int maxsubarraysum(vector<int>& arr){
    int sum=arr[0];
    int maxSum=arr[0];

    for(int i=1; i<arr.size(); i++){
      sum=max(arr[i], sum+arr[i]);
      maxSum=max(maxSum,sum );
    }
    return maxSum;
}
int main()
{
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<"Maximum Subarray Sum is : "<<maxsubarraysum(arr);

    return 0;
}