#include<iostream>

int BinarSearch(int* A[],int low, int high,int key)
{
    int mid;
    while (low<=high)
    {
        mid = (high+low)/2;
        if(A[mid]==key)
        {
            return mid;
        }
        else if (A[high]<A[mid])
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        
    }
    
}
int main()
{
    int A[] = {10,14,17,30,36,50,70,89,100,300,333};
    printf("%d",BinarSearch(A,0,10,17));
}