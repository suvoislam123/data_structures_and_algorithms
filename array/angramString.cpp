#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1 = "medical";
    string s2 = "decimal";
    long int H1=0,H2=0,x;
    for(int i=0;s1[i]!='\0';i++)
    {
        x=1;
        x=x<<(s1[i]-97);
        H1 =H1|x;
    }
    for(int i=0;s2[i]!='\0';i++)
    {
        x=1;
        x=x<<(s2[i]-97);
        H2 =H2|x;
    }
    if(H1==H2)
    {
        cout<<"They are anagram string"<<endl;
    }
    else{
        cout<<"They are not anagram String"<<endl;
    }
}