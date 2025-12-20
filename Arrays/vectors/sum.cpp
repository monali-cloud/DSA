#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int sum=0;
    vector<int> v={1,2,3,4,5};

    for(int i=0; i<v.size(); i++)
    {
        sum += v[i];
    }

    cout<<"sum :"<<sum;

    return 0;
}