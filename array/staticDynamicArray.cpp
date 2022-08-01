#include<iostream>
using namespace std;
int main()
{
    // static memory at stack
    int A[5];
    // dynamic array at heap
    int *p;
    p=new int[5];
    p[0] = 112;
    p[1] =13;
    p[2] =34;
    p[3] =78;
    p[4] =32;
    p[5] = 133;
    // p[6] =45; will give a problem
    for (int i = 0; i < 5; i++)
    {
       printf("%d \n",p[i]);
    }
    // printf("%d",*p); it will only 112 as pointer point first elements in the heap

    
    int *c;
    c =(int*) malloc(5*sizeof(int));
    delete []p;
    free(c);
    return 0;
}