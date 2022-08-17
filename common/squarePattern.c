#include<stdio.h>
void Draw(int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void DrawUppertriangle(int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            printf(" ");
        }
        for(int j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void DrawCrossUpperTriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int count=1;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    Draw(5);
    DrawUppertriangle(6);
    DrawCrossUpperTriangle(7);
}
