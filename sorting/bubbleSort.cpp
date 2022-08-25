#include<iostream>
using namespace std;
void  bubbleSort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}
int main()
{
    int n=5;
    int arr[n] = {8,2,4,1,5};
    bubbleSort(arr,n);
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}