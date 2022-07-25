#include<iostream>
using namespace std;
void treeRecursion(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        treeRecursion(n-1);
        treeRecursion(n-2);
        // printf("Returning phase \n");
    }
}
int main()
{
    treeRecursion(4);
}