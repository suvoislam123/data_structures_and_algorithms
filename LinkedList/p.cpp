#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n],b[n],m[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            m[i]=max(a[i],b[i]);
        }
        int s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            s1=s1+m[i]-a[i];
            s2=s2+m[i]-b[i];
        }
        if(s1==s2)
        {
            cout<<s1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    

}