#include<iostream>
using namespace std;
int main()
{
    // method 1
    int *A[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    // method 2
    int B[3][4] = {{1,2,3,4},{5,6,7,8},{9,0,1,2}};
    // method 3
    int **C;
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
}