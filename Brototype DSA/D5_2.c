#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
struct Node * f = NULL;
struct Node * r = NULL;
void displayElements(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enqueue(int val)
{
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        printf("The queue is full");
    }
    else
    {
        n->data = val;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }
    }
}
int dequeue()
{
    int val = -1;
    struct Node * ptr = f;
    if(f==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        f=f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    printf("%d\n\n",dequeue());
    displayElements(f);
}