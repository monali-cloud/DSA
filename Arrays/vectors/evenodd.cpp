#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,3,5,2,5,67,88,90,4,6,7};

    int even=0,odd=0;
    
    for(int i=0; i<v.size(); i++)
    {
        if (v[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<"even : "<<even<<endl;
    cout<<"odd : "<<odd<<endl;

    return 0;
}