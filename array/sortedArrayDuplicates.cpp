#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,6,8,8,10,12,15,15,15,20,20};
    int n=11,lastDuplicate =0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1] && lastDuplicate!=arr[i+1])
        {
            cout<<arr[i+1]<<" ";
            lastDuplicate=arr[i+1];
        }
    }

}