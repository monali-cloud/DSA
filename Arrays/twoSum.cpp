#include<iostream>
#include<vector>
using namespace std;


 vector<int> twosum(vector<int>& nums, int target)
 {
    vector<int> ans;
    int n=nums.size();

    for(int i=0; i< nums.size(); i++)
    {
       for(int j=i+1; j<n; j++)
       {
        if(nums[i]+nums[j]==target){

            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
       }
        
    }
    return ans;
 }

int main()
{
 vector<int> nums = {4,12,5,13};
 int target = 9;

 vector<int> result = twosum(nums, target);

for(int i : result)
{
    cout<<i<<" ";
}
return 0;
}