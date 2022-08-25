#include<iostream>
#include<string>
using namespace std;
void permutation(string s,int k)
{
    static int A[4]={0,0,0,0};
    static string res[10];
    int i=0;
    if(s[i]=='\0')
    {
        res[k]='\0';
        for(string s:res)
        {
            cout<<s;
        }
        cout<<endl;
    }
    else{
        for(i=0;s[i]!='\0';i++)
        {
            if(A[i]==0)
            {
                res[k] = s[i];
                permutation(s,k+1);
                A[i]=0;
            }
        }
    
    }
}
int main()
{
    string s ="ABC";
    permutation(s,0);
}