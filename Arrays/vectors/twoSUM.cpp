#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> v={1,3,6,-9,4,9,7,-1,-8};
int n,target= 9;
for(int i=0;i<v.size();i++)
{
    for(int j=i+1; j<v.size(); j++)
    {
     if(v[i]+v[j]==target)
     {
        cout<<"indices "<<i<<","<<j<<endl;
        cout<<"values "<<v[i]<<","<<v[j]<<endl; 
        return 0;
     }
    }
   
    
}
 cout<<"no pair found : "<<endl;
 return 0;
}
