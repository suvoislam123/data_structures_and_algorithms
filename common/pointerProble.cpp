// 1.uninitialized poiter
// 2.Memory leaks
// 3.Dangling pointer
#include<iostream>
int main()
{
    int x =13;
    int &y =x;
    std::cout<<x <<y;
}