#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len=9;
    // By copying
    int tempArr[9];
    for(int i=len-1,j=0;i>=0;i--,j++)
    {
        tempArr[j] = arr[i];
    }
    for(int i=0;i<len;i++)
    {
        arr[i] = tempArr[i];
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl<<"Without an auxilary array: "<<endl;
    for(int i=0,j=len-1; i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}