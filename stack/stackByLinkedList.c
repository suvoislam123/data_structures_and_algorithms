#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("Stack is full because heap memory fully occupied\n");
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{
    struct Node *t;
    int x=-1;
    if(top==NULL)
        printf("Stack is Empty\n ");
    else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
void display()
{
    struct Node *p;
    p=top;
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
    
}
int main()
{
    push(100);
    push(200);
    push(300);
    display();
    pop();
    pop();
    printf("\n");
    display();
}