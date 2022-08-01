#include<iostream>
int main()
{
    int *p,*q;
    p = (int *)malloc(5*sizeof(int));
    p[0]=1;p[1]=2;p[3]=3;p[4]=6;

    q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<5;i++)
    {
        q[i] = p[i];
    }
    free(p);
    p=q;
    q=NULL;
    for(int i=0;i<5;i++)
    {
        printf("%d \n",p[i]);
    }
}