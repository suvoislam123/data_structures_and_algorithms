#include<iostream>
using namespace std;
void headRecursion(int n)
{
    if(n>0)
    {
        headRecursion(n-1);
        printf("%d\n",n);
        // blah blah statements
        // blah blah statements
    }
}
void headRecursionByLoop(int n)
{
    int i = 1;
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    
}
int main()
{
    headRecursion(7);
}