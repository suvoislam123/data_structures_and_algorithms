#include<iostream>
void taileRecursion(int n)
{
    if(n>0)
    {
        printf("I don't perform aything at returning time \n");
        // blah blah blah statements
        // blah blah blah statements
        // blah blah blah statements
        // blah blah blah statements
        taileRecursion(n-1);
    }
}
//Both of this function time complexity is same but space complexity of tail recursion is O(n) and by loop is O(1). So better use loop.
void tailRecursionByLoop(int n)
{
    while (n>0)
    {
        printf("I don't perform aything at returning time \n");
        n--;
    }
    
}
int main()
{
    taileRecursion(5);
    tailRecursionByLoop(5);
}