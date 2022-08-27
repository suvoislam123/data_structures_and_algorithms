#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

};
class Stack{
private:
    Node *top;
public:
    Stack(){top=NULL;}
    void push(int x);
    int pop();
    void display();
};
void Stack::push(int x)
{
    Node *t = new Node;
    if(t==NULL)
        cout<<"Stack is Full"<<endl;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int Stack::pop()
{
    int x=-1;
    if(top==NULL)
        cout<<"Stack is Empty \n";
    else{
        x=top->data;
        Node *temp = top;
        top=top->next;
        delete temp;
    }
    return x;
}
void Stack::display()
{
    Node *p = top;
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    
}
int main()
{
    Stack stk;
    stk.push(100);
    stk.push(400);
    stk.push(5000);
    stk.push(1000);
    stk.display();
    stk.pop();
    stk.display();


}