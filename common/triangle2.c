#include<stdio.h>
int main()
{
    for(int i=0;i<7;i++)
    {
        for(int j=7;j>i;j--)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("This is another pattern:\n");
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(i<=j)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }

        }
        printf("\n");
    }
    printf("This is again another pattern\n");
    for(int i=0;i<8;i++)
    {
        for(int j=7;j>i;j--)
        {
            printf("  ");
        }
        for(int k=0;k<i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

