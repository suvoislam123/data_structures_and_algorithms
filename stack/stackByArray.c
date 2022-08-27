#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size;
    int top;
    int *S;
};
void create(struct Stack *s)
{
    printf("Enter the size of the stack: ");
    scanf("%d",&s->size);
    s->top=-1;
    s->S = (int *) malloc(s->size*sizeof(int));
}
void display(struct Stack s)
{
    for(int i=s.top;i>=0;i--)
        printf("%d ",s.S[i]);
    printf("\n");
}
void push(struct Stack *s,int x)
{
    if(s->top==s->size-1)
        printf("Stack overflow\n");
    else{
        s->top++;
        s->S[s->top] = x;

    }
}
int pop(struct Stack *s)
{
    int x = -1;
    if(s->top==-1)
        printf("Stack is Empty\n");
    else
        x=s->S[s->top--];
    return x;
    
}
int peek(struct Stack s,int index)
{
    int x=-1;
    if(s.top-index+1<0)
        printf("Invalid Index");
    x=s.S[s.top-index+1];
    return x;
}
int isFull(struct Stack s)
{
    return s.top==s.size-1;
}
int isEmpty(struct Stack s)
{
    if(s.top==-1)
        return 1;
    return 0;
}
int stackTop(struct Stack s)
{
    if(!isEmpty(s))
        return s.S[s.top];
    return -1;
}
int main()
{
    struct Stack st;
    create(&st);
    push(&st,4);
    push(&st,23);
    push(&st,11);
    push(&st,9);
    push(&st,7);
    display(st);
    printf("%d \n",pop(&st));
    printf("Peek ar 2: %d \n",peek(st,2));
    display(st);
}