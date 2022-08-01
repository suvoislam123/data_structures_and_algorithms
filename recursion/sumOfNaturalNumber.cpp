#include<iostream>
using namespace std;
int fn(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return fn(n-1)+n;
    }
}
int main()
{
    cout<<fn(5);
}