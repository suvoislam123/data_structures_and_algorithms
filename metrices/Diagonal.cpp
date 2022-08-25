#include<iostream>
using namespace std;
class Digonal{
    private:
        int n;
        int *A;
    public:
    Digonal()
    {
        n = 2;
        A = new int[2];
    }
    Digonal(int n)
    {
        this->n=n;
        A = new int[n];
    }
    ~Digonal()
    {
        delete []A;
    }
    void set(int i,int j, int x);
    int get(int i, int j);
    void display();

};
void Digonal::set(int i, int j, int x)
{
     if(i==j)
        A[i-1]=x;
}
int Digonal::get(int i,int j)
{
    if(i==j)
        return A[i];
    else
        return 0;
}
void Digonal::display()
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                cout<<A[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    Digonal d(4);
    d.set(1,1,3);
    d.set(2,2,8);
    d.set(3,3,7);
    d.set(4,4,5);
    d.display();
}