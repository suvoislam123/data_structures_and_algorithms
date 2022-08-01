#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int ncr(int n,int r)
{
    int t1=fact(n);
    int t2 = fact(r);
    int t3 = fact(n-r);
    return t1/(t2*t3);
}
int  ncrP(int n, int r)
{
    if(n==r || r==0)
    {
        return 1;
    }
    else{
        return ncrP(n-1,r-1)+ ncrP(n-1,r);
    }
}
int main()
{
    // cout<<fact(4);
    cout<<ncr(5,3)<<endl;
    cout<<ncrP(5,3);
    
}