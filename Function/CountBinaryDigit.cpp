#include<iostream>
using namespace std;

int binarynum(int decimalNum)
{
    int ans=0, power=1;
    {
        while(decimalNum>=0){
        int rem =decimalNum%2;
        decimalNum /=2;

        ans+=(rem*power);
        power *=10;

        }
        return ans;

    }}

    int main()
    {
    int decimalNum=50;
    {
        cout<<binarynum(decimalNum)<<endl;

        return 0;
   
    }}
