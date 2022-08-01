#include<iostream>
using namespace std;
double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
    {
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
double hornersRule(int x,int n)
{   //this is by calling time
    static double s=1;
    if(n==0)
    {
        return s;
    }
    s=1+x*s/n;
    return e(x,n-1);
}
int main()
{
    
    // cout<<e(1,10);
    // cout<<endl;
    cout<<hornersRule(2,10);
}