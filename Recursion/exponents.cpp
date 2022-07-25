#include<iostream>
int exponent(int m, int n)
{
    if(n==0)
        return 1;
    return exponent(m,n-1)*m;
}
using namespace std;
int main()
{
    cout<<exponent(2,4);
}