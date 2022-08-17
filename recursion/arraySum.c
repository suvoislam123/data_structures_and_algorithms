#include<stdio.h>
int sum(int a[],int n)
{
    if(n<0)
    {
        return 0;
    }
    else
    {
        return sum(a,n-1)+a[n];
    }
}
int main()
{
    int a[] ={1,2,3,4,5,6,29};
    int s = sum(a,6);
    printf("sum : %d",s);
}