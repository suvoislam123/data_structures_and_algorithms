#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        printf("The que is full\n");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("Queue is Empty\n");
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void display(struct Queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        printf("%d ",q.Q[i]);
    }
    printf("\n");
}

int main()
{
    struct Queue q;
    printf("Enter Queue Size: ");
    scanf("%d",&q.size);
    q.Q = (int *)malloc(sizeof(int)*q.size);
    q.front=q.rear=-1;
    enqueue(&q,45);
    enqueue(&q,35);
    enqueue(&q,55);
    display(q);
}