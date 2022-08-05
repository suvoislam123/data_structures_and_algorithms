#include<stdio.h>
// struct Array
// {
//  int A[10];
//  int size;
//  int length;
// };
//  void Display(struct Array arr)
//  {
//  int i;
//  printf("\nElements are\n");
//  for(i=0;i<arr.length;i++)
//  printf("%d ",arr.A[i]);
//  }
//  void Append(struct Array *arr,int x)
//  {
//     if(arr->length<arr->size)
//     {
//         arr->A[arr->length++]=x;
//     }
//  }
//  void Insert(struct Array *arr,int index,int x)
//  {
//     int i;
//     if(index>=0 && index <=arr->length)
//     {
//         for(i=arr->length;i>index;i--)
//         arr->A[i]=arr->A[i-1];
//         arr->A[index]=x;
//         arr->length++;
//     }
//  }
// int main()
// {
//     struct Array arr1={{2,3,4,5,6},10,5};
//     Append(&arr1,10);
//     Insert(&arr1,0,12);
//     Display(arr1);
//     return 0;
// }
#include<iostream>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("The Elements Are :\n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d\n",arr.A[i]);
    }
}
void Append(struct Array *arr,int value)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++] = value;
    }
}
void Insert(struct Array *arr,int index,int value)
{
    if(index>=0 && index<=arr->length)
    {
        for(int i=arr->length;i>index;i--)
        {
             arr->A[i]=arr->A[i-1];
        }
        arr->A[index] = value;
        arr->length++;
    }
}
int main()
{
    struct Array arr = {{1,2,42,42,6},10,5};
    // Display(arr);
    Append(&arr,34);
    // Display(arr);
    Insert(&arr,2,420);
    Display(arr);

}