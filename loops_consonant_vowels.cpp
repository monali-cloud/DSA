#include<iostream>
#include<string>
using namespace std;
int main ()
{
   string str;
    cout<<"enter the string :";
    getline(cin,str);
    
    int consonant =0,vowels=0,digits=0,spaces=0;
    

    for(int i=0;i<str.length();i++)
    {
        char ch=tolower(str[i]);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        vowels++;
    }
    else if(ch>='0' && ch<='9')
    {
         digits++;
    }
    else if(ch==' ')
    {
        spaces++;
    }
    else if(ch>='a' && ch<='z')
    {
        consonant++;
    }
    
}


cout<<"Vowels :"<<vowels<<endl;
cout<<"digits :"<<digits<<endl;
cout<<"spaces :"<<spaces<<endl;
cout<<"consonants :"<<consonant<<endl;


return 0;
    

}