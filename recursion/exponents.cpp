#include<iostream>
int exponent(int m, int n)
{
    if(n==0)
        return 1;
    return exponent(m,n-1)*m;
}
int optimizeExponent(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return optimizeExponent(m*m,n/2);
    else
        return m*optimizeExponent(m*m,(n-1)/2);
}
using namespace std;
int main()
{
    cout<<exponent(2,4)<<endl;
    cout<<optimizeExponent(2,4);
}