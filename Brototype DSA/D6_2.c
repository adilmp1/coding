#include <stdio.h>
int queue[10];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==9)
    {
        printf("Overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("%d\n",queue[front]);
        front++;
    }
}
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
int main()
{
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}