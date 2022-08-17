#include<iostream>
using namespace std;
int main()
{
    int arr[] = {6,3,8,10,16,7,5,2,4,14};
    int max =0,n=10,k=10;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    int hashArr[max+1];
    for(int i=0;i<max+1;i++)
    {
        hashArr[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        if(hashArr[k-arr[i]]!=0 && (k-arr[i])>0)
        {
            cout<<arr[i]<<" "<<k-arr[i]<<endl;
        }
        hashArr[arr[i]]++;
    }
    
}