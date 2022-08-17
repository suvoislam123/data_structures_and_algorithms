#include<iostream>
struct Array{
    int A[10];
    int size;
    int length;
};
int binarySearch(struct Array arr,int key)
{
    int l,mid,h;
    l=0;
    h = arr.length-1;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
        {
            std::cout<<arr.A[mid]<<" found at "<<mid<<"index";
            return mid;
        }
        else if(arr.A[mid]<key)
        {
            l = mid+1;
        }
        else{
            h=mid-1; 
        }
    }
}
int recursiveBinarySearch(int a[],int low,int high,int key)
{
    int mid = (low+high)/2;
    if(low<=high)
    {
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return recursiveBinarySearch(a,low,mid-1,key);
        else
            return recursiveBinarySearch(a,mid+1,high,key);
    }
    return -1;
}
int main()
{
    struct Array arr1 = {{1,20,44,56,67,102,350,402,502,676},10,10};
    binarySearch(arr1,102);
    int a[] = {1,20,44,56,67,102,350,402,502,676};
    int index = recursiveBinarySearch(a,0,9,44);
    printf("\nIndex is: %d",index);
}