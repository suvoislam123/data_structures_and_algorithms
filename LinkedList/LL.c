#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
} *first = NULL, *genesis=NULL;
void createLL(int A[],int n)
{
    struct Node *last,*t;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next = NULL;
        last->next= t;
        last = t;
    }
}
void displayLL(struct Node *p)
{
    p = first;
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    
}
int totatlElement(struct Node *p)
{
    int count =0;
    while (p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
int Rcount(struct Node *p)
{
    if(p==0)
        return 0;
    else
        return 1+ Rcount(p->next);
}
void display(struct Node *p)
{
    if (p!=NULL)
    {
        
        printf("%d ",p->data);
        display(p->next);
        
    }
    
}
int max(struct Node *p)
{
    int x = 0;
    if(p==0)
        return 0;
    x=max(p->next);
    return x>p->data?x:p->data;
}
int sum(struct Node *p)
{
    int sum=0;
    while (p)
    {
        sum = sum+ p->data;
        p=p->next;
    }
    return sum;
}
struct Node * search(struct Node *p,int key)
{
    while (p!=NULL)
    {
        if(p->data==key)
            return p;
        p=p->next;
    }
    return NULL;
    
}
struct Node* improvedSearch(struct Node *p,int key)
{
    struct Node *q=NULL;
    while (p!=NULL)
    {
        if(p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return first;
        }
        q=p;
        p=p->next;
    }
    
}
void insert(struct Node *p,int index, int x)
{
    if(index<0 || index>totatlElement(p))
        return;
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    if(index==0)
    {
        t->next=first;
        first = t;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
int deleteNode(struct Node *p,int position)
{
    struct Node *q;
    int x=-1;
    if(position<1 && position>totatlElement(p))
        return -1;
    if(position==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        free(q);
    }
    else{
        
        for(int i=0;i<position-1;i++)
        {
            q=p;
            p= p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
    }
    return x;
}
void removeDuplicat(struct Node *p)
{
    struct Node *q = p->next;
    while (q!=NULL)
    {
        if(p->data != q->data)
        {
            p=q;
            q =q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
    
}
void reverseElements(struct Node *p)
{
    struct Node *q = p;
    int n = totatlElement(p);
    int arr[n];
    int i=0;
    while (p)
    {
        arr[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;//global er first p kintu copy of first
    i--;
    while (p)
    {
        p->data=arr[i];
        p=p->next;
        i--;
    }   
}
//it uses sliding pointer technique
void reverseElementsByAddress(struct Node *p)
{
    struct Node *q,*r = NULL;
    while (p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first =q;
    
}
int main()
{
    // int A[]={1,67,23,64,90,34};
    // createLL(A,6);
    // display(first);
    // // displayLL(first);
    // printf("\nTotal Element: %d",totatlElement(first));
    // printf("\nTotal Element: %d",Rcount(first));
    // printf("\nSum of Elements: %d",sum(first));
    // printf("\nMaximum Element is: %d",max(first));
    // printf("\n%d is at %d",90,search(first,90));
    // struct Node *ptr = search(first,67);
    // printf("\ndata is %d ",ptr->data);
    // printf("\n%d is at %d\n",64,improvedSearch(first,64));
    // display(first);
    // insert(first,4,56);
    // printf("\n");
    // display(first);
    // printf("\nAfter delete %d:\n",deleteNode(first,3));
    // display(first);
    // _______________________________________________________//
    int sortedArr[]={1,4,6,40,40,53,55,55,67,77,77,88,100};
    createLL(sortedArr,13);
    display(first);
    printf("\nAfter removing duplicate: \n");
    removeDuplicat(first);
    display(first);
    reverseElements(first);
    // reverseElementsByAddress(first);
    printf("\nAfter Reversing:\n");
    display(first);
    

    
}