#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={11,22,2,4,5,6,1,78};

    int min=v[0];
    for(int i=1; i< v.size(); i++)
    {
        if(v[i]<min)
        min=v[i];
        }
        cout<<"smallest : "<<min;
        return 0;
}