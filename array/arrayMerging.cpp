#include<iostream>
using namespace std;
int main()
{
    int arr1[] = {2,3,11,15,20,27,70,120,200,300,400};
    int arr2[] ={1,4,8,14,19,28,75,100}; 
    int m=11,n=8;
    int arr[m+n];
    int i=0,j=0,k=0;
    while (i<11 && j<8)
    {
        if(arr1[i]>arr2[j])
        {
            arr[k++] = arr2[j++];
        }
        else if(arr1[i]<arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else if(arr1[i]==arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        
    }
    for(;i<11;i++)
    {
        arr[k++]=arr1[i];
    }
    for(;j<8;j++)
    {
        arr[k++] = arr2[j];
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    
}