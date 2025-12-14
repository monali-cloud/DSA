#include<iostream>
using namespace std;

int binaryTodecimal(int decNum)
{
    int ans=0,power=1;
    {
        while (decNum>0)
        {
            int rem = decNum % 10;
            ans+= rem* power;            //steps to calculate remainder


            decNum /=10;
            power*=2;


        }
        return ans;
    }
}
int main()
{
    int decNum = 101010;
    {
        cout<<"the binary to decimal conversion is : "<<binaryTodecimal(decNum);
    }
    return 0;
}