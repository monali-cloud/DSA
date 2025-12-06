#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        //space n-i-1 it will print the first space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<"*";

          if(i!=0)  // where in first line there is only 1 star and in other line there is 2 star
            {
        //for innner spaces which are odd it will be (2*i-1)
        for(int j=0;j<2*i-1;j++)
        {
          
              cout<<" ";
            }
            cout<<"*";
            
        }
        cout<<endl;

    }


    //bottom
    for(int i=0; i<n-1 ; i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        cout<<"*";

        if(i != n-2)
        {
            for(int j=0; j<2*(n-i)-5;j++)
            {
                cout<<" ";

            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}