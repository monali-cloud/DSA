#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> v={1,2,3,4,6,5,67,3};

    int max=v[0];
    for(int i=1; i< v.size(); i++)
    {
        if(v[i]>max)
        max=v[i];
    }
    cout<<"largest : "<<max;

    return 0;
}