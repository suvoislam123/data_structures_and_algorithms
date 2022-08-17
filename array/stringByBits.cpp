#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "moorning";
    long int H=0,x=0;
    for(int i=0;s[i]!='\0';i++)
    {
        x=1;
        x=x<<(s[i]-97);
        if((H&x)>0)
        {
            printf("%c is duplicated\n",s[i]);
        }
        else{
            H=x|H;
        }
    }
}