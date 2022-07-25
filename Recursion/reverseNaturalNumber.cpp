#include<iostream>
using namespace std;
int reverse(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        reverse(n-1);
    }
}
int main()
{
    reverse(100);
}